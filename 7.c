#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
    int a=0,x=0,d=0;
    double c=0.0;
    printf("0-GROUND FLOOR---10 percent prize discount and + 8 percent developmental discount\n1-FIRST FLOOR---2 percent prize discount and + 1 percent developmental discount\n2-SECOND FLOOR---5 percent prize discount and + 5 percent developmental discount\n3-THIRD FLOOR---7.5 percent prize discount and + 10 percent developmental discount\n\nINPUT THE FLOOR NUMBER\n");
    scanf("%d",&a);
    printf("Input the total cost\n");
    scanf("%d",&x);
    switch(a)
    {
    case 0:
        d=18;
        c=(d*x)/100;
        break;
    case 1:
        d=3;
        c=(97*x)/100;
        break;
    case 2:
        d=10;
        c=(90*x)/100;
        break;
    case 3:
        d=17.5;
        c=(82.5*x)/100;
        break;
    default:
        printf("Wrong floor input !!!");
        exit(0);
    }
    printf("Total discount - %d\n",d);
    printf("\nCost to be paid - %0.2lf",c);
    return 0;
}
