#include <stdio.h>
int main()
{
    int a=0;
    double r=0.0,x=0.0,l=0.0;
    printf("1-AREA OF CIRCLE\n2-AREA OF SQUARE\n3-AREA OF RECTANGLE\nINPUT A NUMBER\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Input radius -\n");
        scanf("%lf",&r);
        x=(22*r*r)/7;
        break;
    case 3:
        printf("Input length =\n");
        scanf("%lf",&l);
        printf("Input breath =\n");
        scanf("%lf",&r);
        x=l*r;
        break;
    case 2:
        printf("Input side =\n");
        scanf("%lf",&r);
        x=r*r;
        break;
    default:
        printf("Wrong input !!!");
    }
    printf("\nAREA =%0.2lf",x);
    return 0;
}
