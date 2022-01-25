#include <stdio.h>
int main()
{
    int a=0;
    double t=0.0,m=0.0;
    double r=0.0,x=0.0,l=0.0;
    printf("1-CONVERT TO FAREHENEIT\n2-CONVERT TO CELCIUS\nINPUT A NUMBER\n");
    scanf("%d",&a);
    printf("Input the temperature\n");
    scanf("%lf",&t);
    switch(a)
    {
case 1:
    m=1.8*t+32;
    printf("\nTemperature after conversion to fareheneit - %0.2lf\n",m);
    break;
case 2:
    m=5*(t-32)/9;
    printf("\nTemperature after conversion to celcius - %0.2lf\n",m);
    break;
default:
    printf("Wrong input !!!");
    }
    return 0;
}

