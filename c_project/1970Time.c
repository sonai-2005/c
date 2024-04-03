// find the time passed till 1970 in seconds;;;)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main(){
    time_t seconds;
    seconds = time(NULL);
    struct tm = *localtime(&seconds);
    
    
    printf("time till 1970 is %ld",seconds);    
    return 0;
}
