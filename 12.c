#include <stdio.h>
int fact(int);
int main()
{
    int a=0,n=0,s=0,p=0,r=0;


    printf("1-Check for perfect number\n2-Check for palindrome number\nInput a number -\n");
    scanf("%d",&a);
    printf("Input the value of n \n");
    scanf("%d",&n);
    switch(a)
    {
        case 1:
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                s+=i;
            }
        }
        if(s==n)
            printf("The number is a perfect number");
        else
            printf("The number is not a perfect number");
        break;
    case 2:
        s=n;
        while(s>0)
        {
            r=s%10;
            s=s/10;
            p=p*10+r;
        }
        if(p==n)
        printf("The number is a palindrome number");
        else
            printf("The number is not a palindrome number");
        break;
        default:
        printf("Wrong input !!!");
    }
    return 0;
}
