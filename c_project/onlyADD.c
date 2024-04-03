#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
FILE *fp;
 struct name{
    char date[12];
    int id; 
    char name[10];
    unsigned int total;
    int percentage;
}st;
void add(){
   
    fp = fopen("Fileprac.txt","ab");
    fprintf(fp,"\n\n",1,1);
    char datt[12];
    time_t s = time(NULL);
    struct tm dd = *localtime(&s);
    sprintf(datt,"%02d/%02d/%02d",dd.tm_mday,dd.tm_mon +1,dd.tm_year+1900);
    strcpy(st.date,datt);
    printf("enter a key to continue.....");
    getchar();
    printf("enter the id: ");
    scanf("%d",&st.id);
    getchar();
    printf("enter the name: ");
    fflush(stdin);
    scanf("%s",&st.name);
    printf("enter the total: ");
    fflush(stdin);
    scanf("%u",&st.total);
    
    printf("added successfully\n");
    fwrite(&st, sizeof(st) , 1 ,fp);
    fclose(fp);
}
int main(){
    add();
    
    return 0;
}
