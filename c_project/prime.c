#include<stdio.h>
#include<stdlib.h>
int main(){
    int a ;
    printf("enter a number to know the limit: ");
    scanf("%d",&a);
     if(a>=7){
        printf("1 , 2 , 3 , 5 , 7 ,");
    }
   
        for(int i = 8; i<a;i++){
            if((i%2)!=0 && (i%3)!=0 && (i%5)!=0 && (i%7)!=0 ){
                
                printf("%d\n",i);
                
            }
            else
            continue;
        }
    return 0;
}
