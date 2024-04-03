#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main(){
   FILE*fp;
   char  name[100];
//    fp = fopen("emnii.txt","r");
//   while( fgets(name,1000,fp)){
//    printf("%s",name);}
fp = fopen("emnii.txt","w");
char about[900];
printf("enter your name  ");
scanf("%s",&name);
printf(" say something about you! ");
getchar();
gets(about);
fputs(name,fp);
getchar();
fputs("\n",fp);
fputs(about,fp);
   fclose(fp);

    return 0;
}
