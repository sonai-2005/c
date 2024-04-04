#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct record {
    char date[12];
    int id; 
    char name[10];
    unsigned int total;
    int percentage;
};

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void add() {
    FILE *fp;
    fp = fopen("Fileprac.txt", "wt"); // Change mode to write text "ab" to "wt"
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    struct record st;
    char date[12];
    time_t s = time(NULL);
    struct tm dd = *localtime(&s);
    sprintf(date, "%02d/%02d/%02d", dd.tm_mday, dd.tm_mon + 1, dd.tm_year + 1900);
    strcpy(st.date, date);

    printf("Enter the id: ");
    scanf("%d", &st.id);
    clearBuffer(); // Clear the input buffer (Previous text from memory)

    printf("Enter the name: ");
    scanf("%9[^\n]", st.name);
    clearBuffer(); // same

    printf("Enter the total: ");
    scanf("%u", &st.total);
    clearBuffer(); // same

    // Calculate percentage
    st.percentage = (int)((st.total / 1000.0) * 100); // calculation

    printf("Added successfully\n");
    fprintf(fp, "%s\n %d\n %s\n %u\n %d\n", st.date, st.id, st.name, st.total, st.percentage); // text in Notepad 
    fclose(fp);
}

void printRecords() {
    FILE *fp;
    fp = fopen("Fileprac.txt", "rt"); // Change mode to read text mode - E=mc2
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    struct record st;

    while (fscanf(fp, "%s %d %s %u %d", st.date, &st.id, st.name, &st.total, &st.percentage) != EOF) { // text in Terminal - E=mc2
        printf("Date: %s\n", st.date);
        printf("ID: %d\n", st.id);
        printf("Name: %s\n", st.name);
        printf("Total: %u\n", st.total);
        printf("Percentage: %d\n", st.percentage);
        printf("\n");
    }

    fclose(fp);
}

int main() {
    add();
    printRecords();
    return 0;
}
