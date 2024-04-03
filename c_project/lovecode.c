#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("how many times do you wanna print? : ");
    scanf("%d",&a);
    for(int i =1;i<a;i++){
        for(int j =1; j<a-i;j++){
            printf(" "); 
            }
            for(int k = 1;k<=2*i-1;k++){
                printf("%c",3);// ascii value of love is 3
            }
       
    printf("\n");
    }
    return 0;
}
