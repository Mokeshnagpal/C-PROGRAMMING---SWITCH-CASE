#include <stdio.h>
int fact(int);
int main()
{
    int a=0,n=0;
    double s=0.0;
    printf("1-series =1/4+1/8.....\n2-series =1/1!+1/2!....\nInput a number -\n");
    scanf("%d",&a);
    printf("Input the value of n \n");
    scanf("%d",&n);
    switch(a)
    {
    case 1:
        for(int i=1;i<=n;i++)
        {
            s=s+1/(double)(i*4);
        }
        break;
    case 2:
        for(int i=1;i<=n;i++)
        {
            s=s+i/(double)fact(i);
        }
        break;
    default:
        printf("Wrong input !!!");
    }
    printf("Sum of series = %0.2lf",s);
    return 0;
}
int fact(int f)
{
    int z=1;
    if(f==0)
        f=1;
    for(int j=1;j<=f;j++)
    z=z*j;
    return(z);
}
