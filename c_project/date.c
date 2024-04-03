#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main(){
    time_t ami = time(NULL);
    struct tm* tumi = localtime(&ami);
    printf("time is : %d-%02d-%02d",tumi->tm_hour,tumi->tm_min,tumi->tm_sec);
    printf("\ndate is %d-%02d-%02d\n",tumi->tm_mday,tumi->tm_mon+1,tumi->tm_year+1900);
   
    return 0;
}