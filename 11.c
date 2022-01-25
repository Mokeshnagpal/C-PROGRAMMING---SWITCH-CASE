#include <stdio.h>
int fact(int);
int main()
{
    int a=0,n=0,m=0,x=0;
    printf("1-Check for buzz number\n2-Check for GCD number\nInput a number -\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Input the number to check \n");
    scanf("%d",&n);
        if(n/10==7||n%7==0)
            printf("The number is a buzz number");
        else
            printf("The number is not a buzz number");
        break;
    case 2:
        printf("Input the number to check \n");
    scanf("%d",&n);
    printf("Input another number to check \n");
    scanf("%d",&m);
        for(int i=1;i<(m*n);i++)
        {
            if(m%i==0&&n%i==0)
                x=i;
        }
        printf("G.C.D - %d",x);
        break;
    default:
        printf("Wrong input !!!");
    }
    return 0;
}
