#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("%d",'A'+'B');
    int x = 4, y =4,z =4;
    if(x==y==z){
        printf("hello");
    }
    else printf("world");
    time_t t= time(NULL);
    struct tm time = *localtime(&t);
    // printf("the time zone is %d",);
    return 0;
}
