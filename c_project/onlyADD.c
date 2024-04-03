#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct record{
    char date[12];
    int id; 
    char name[10];
    unsigned int total;
    int percentage;
};

void add(){
    FILE *fp;
    fp = fopen("Fileprac.txt", "ab");
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

    printf("Enter the name: ");
    scanf("%9s", st.name);

    printf("Enter the total: ");
    scanf("%u", &st.total);
    
    printf("Added successfully\n");
    fwrite(&st, sizeof(st), 1, fp);
    fclose(fp);
}

int main(){
    add();
    return 0;
}
