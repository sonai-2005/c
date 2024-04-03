#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int minute, hour, second;
    minute = hour = second = 0;
    while (1)
    {
        // clear the output system
        system("cls");
        // print the time in HH:MM:SS format
       
        printf("%d:%d:%d", hour, minute, second);
        // clear the output buffer in gcc
        fflush(stdout);
        // increase second
        second++;
        if (second == 60)
        {
            minute = minute + 1;
            second = 0;
        }
        if (minute == 60)
        {
            
             
            hour += 1;
            getchar();
            Beep(800, 300);// sound when 60 minute complete
            minute = 0;
        }
        if (hour == 24)
        {
            minute = hour = second = 0;
        }
        sleep(1);
        
    }
    return 0;
}
