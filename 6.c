#include <stdio.h>
int main()
{
    int a=0;
    double r=0.0,x=0.0,h=0.0,l=0.0;
    printf("1-VOLUME OF CUBE\n2-VOLUME OF SPHERE\n3-VOLUME OF CUBOID\nINPUT A NUMBER\n");
    scanf("%d",&a);
    switch(a)
    {
    case 2:
        printf("Input radius -\n");
        scanf("%lf",&r);
        x=(22*r*r*r*4)/(7*3);
        break;
    case 3:
        printf("Input length =\n");
        scanf("%lf",&l);
        printf("Input breath =\n");
        scanf("%lf",&r);
        printf("Input height =\n");
        scanf("%lf",&h);
        x=l*r*h;
        break;
    case 1:
        printf("Input side =\n");
        scanf("%lf",&r);
        x=r*r*r;
        break;
    default:
        printf("Wrong input !!!");
    }
    printf("\nVOLUME =%0.2lf",x);
    return 0;
}
