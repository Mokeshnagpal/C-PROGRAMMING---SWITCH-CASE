#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main()
{
    int a=0,d=0,s=0;
    double x=0.0,g=0.0;
    printf("1-IF SALARY IS<=10000 THEN D.A.-10 AND S.A.-5\n2-IF SALARY IS<=20000 AND SALARY>10000 THEN D.A.-12 AND S.A.-8\n3-IF SALARY IS<=30000 AND SALARY>20000 THEN D.A.-15 AND S.A.-10\nIF SALARY IS>30000 THEN D.A.-20 AND S.A.-12\nINPUT A NUMBER\n");
    scanf("%d",&a);
    printf("Input your basic salary\n");
    scanf("%lf",&x);
    switch(a)
    {
    case 1:
        d=10;
        s=5;
        g=x+(x*10/100)+(x*5/100);
        break;
    case 2:
        d=12;
        s=8;
        g=x+(x*12/100)+(x*8/100);
        break;
    case 3:
        d=20;
        s=12;
        g=x+(x*20/100)+(x*12/100);
        break;
    default:
        printf("Wrong input !!!");
        exit(0);
    }
    printf("\nBasic\tD.A.\tSpl. Allowance\tGross salary\n");
    printf("%0.2lf\t%d\t%d\t%0.2lf",x,d,s,g);
    return 0;
}
