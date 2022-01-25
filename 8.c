#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
    int a=0,b=0,y=0,s=0,x=0,c=0;
    printf("1-CHECK OF PRIME\n2-CHECK OF AUTOMORPHIC\n3-CHECK OF EVEN/ODD\nINPUT A NUMBER\n");
    scanf("%d",&a);
    printf("Input a number to check\n");
    scanf("%d",&x);
    switch(a)
    {
    case 1:
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
                c++;
        }
        if(c==0)
            printf("Number is prime");
        else
            printf("Number is not prime");
        break;
    case 2:

        b=x*x;
        while(b>0)
        {
            y=b%10;
            b=b/10;
            s=s+pow(10,c)*y;
            c++;
            if(s==x)
            {
                printf("Number is automorphic");
                exit(0);
            }
        }
        printf("Number is not automorphic");
        break;
    case 3:
        if(x%2==0)
            printf("Number is even");
        else
            printf("Number is odd");
        break;
    default:
        printf("Wrong input !!!");
    }
    return 0;
}
