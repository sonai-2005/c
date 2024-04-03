#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    int rno;
    char name[20];
    float mark;
    int total;
    float per;

    
}student;

void add(){
    student *s;
    FILE *file;
    int i,j,n;
    printf("how many student do you want : ");
    scanf("%d",&n);
     file =fopen("students.txt","wb");
    s = (student*)calloc(n,sizeof(student));
    for ( i = 1; i <= n; i++)
    {
        s[i].total =0;
        s[i].per = 0;
        printf("enter student's roll number: ");
        scanf("%d",&s[i].rno);
        getchar();
        printf("enter the name: ");
        gets(s[i].name);
        
            printf("enter the number for subject %d : ",j+1);
            scanf("%f",&s[i].mark);
            // s[i].total += s[i].sub[j].mark;

        
        // s[i].per = s[i].total /3.0;
        // fwrite(&s[i],sizeof(student),1,file);
        fwrite(&s[i], sizeof(student), 1,file);
    }
    fclose(file);
}
int main(){
    int a;

    
    printf("1.Add student \n 2.see details\n 0.EXIT  \n  :   ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        add();
        break;
    // case 2: 
    //     see();
    //     break;
    
    default:
        break;
     }
     //}
    return 0;
}
