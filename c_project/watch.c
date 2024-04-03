#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>
#include<windows.h>
int main(){
    time_t s,val =1;
    struct tm* current_time;

// time in seconds--;)

    s = time(NULL);


//to get the time in seconds


    current_time = localtime(&s);

    //print the time in minute and hours

    printf(" current time      -  %d : %d : %d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);

    while(1){
        if(current_time->tm_hour>=12){
            current_time->tm_hour = current_time->tm_hour-12;
        }
        current_time->tm_sec+=1;
        if(current_time->tm_sec == 60){
            current_time->tm_min+=1;
            Beep(800,800);
            current_time->tm_sec = 0;
        }
        if(current_time->tm_min==60){
            current_time->tm_hour+=1;
            Beep(900,900);
            current_time->tm_min =0;
            }
            system("cls");
      printf("\n%d : %d : %d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
      
       fflush(stdout);
       sleep(1);  
      }
         
    return 0;
}
