#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char t;
    double d=0.0,p=0.0;;
    char n[20],a[40];
    printf("Input name -\n");
    fflush(stdin);
    scanf("%[^\n]",n);
    fflush(stdin);
    printf("Input address -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input purchase amount -\n");
    scanf("%lf",&p);
    printf("Input purchase type -\n");
    fflush(stdin);
    scanf("%c",&t);
    fflush(stdin);
    tolower(t);
    switch(t)
    {
    case 'l':
        if(p<=25000)
            d=0.0;
            else if(p<=57000)
            d=5.0;
            else if(p<=100000)
            d=7.5;
            else
            d=10.0;
            break;
    case 'd':
        if(p<=25000)
            d=5.0;
            else if(p<=57000)
            d=7.5;
            else if(p<=100000)
            d=10.0;
            else
            d=15.0;
            break;
    default:
        printf("Wrong choice !!!");
        exit(0);
    }
    d=d*p/100;
    printf("Name - %s\n",n);
    printf("Address - %s\n",a);
    printf("Discount - %0.2lf",d);
    d=p-d;
    printf("\nNet amount to be paid - %0.2lf",d);
    return 0;
}
