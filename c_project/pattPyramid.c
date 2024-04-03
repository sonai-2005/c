#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,r,c;
    printf("enter the row number: ");
    scanf("%d",&n);
     system("cls");
    for(r = 1;r<=n;r++){// total row number
        for(c = 1;c<=n-r;c++){// for space the space will be n-r amount....
            printf(" ");
        }
        for(c =1;c<=2*r-1;c++){
            printf("*");
        }
    
        printf("\n");
    }
    for(r=1;r<=n-1;r++){
        for(c=1;c<=r;c++){
                printf(" ");
        }
    for(c=1;c<=2*n-2*r-1;c++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
