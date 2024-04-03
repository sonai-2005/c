#include<stdio.h>
#include<math.h>
int main(){
    float a ,b,c;
    float x1,x2;
    printf("enter the valueo of a ,b ,c : ");
    scanf("%f%f%f",&a,&b,&c);
    float check = pow(b,2)-4*a*c;
    if (check > 0)
    {
        printf("the roots are real and unequal \n" );
        x1 = (-b/2*a)+(pow(check,0.5)/2*a);
        x2 = (-b/2*a)-(pow(check,0.5)/2*a);
        printf("the values are %f and %f\n",x1,x2);
    }
     else if (check == 0)
    {
        printf("the roots are real and equal \n" );
        x1 = (-b/2*a)+(pow(check,0.5)/2*a);
        printf("%f\n",x1);
    }
    else if (check < 0)
    {
        printf("the roots are imaginary \n" );
        x1 = (-b/2*a);
        x2 = ((pow(b,2)-4*a*c)/2*a);
        printf("the roots are %f + %fi\n",x1,x2);
    }
    
    
    return 0;
}
