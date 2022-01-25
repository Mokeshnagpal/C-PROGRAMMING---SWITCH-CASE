#include <stdio.h>
int main()
{
    int a;
    printf("1-january\n2-febuary\n3-march\n4april\n5-may\n6-june\n7-july\n8-august\n9-september\n10-october\n11-november\n12-december\nInput a number -\n");
   scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("31 days");
        break;
        case 3:
        printf("31 days");
        break;
        case 5:
        printf("31 days");
        break;
        case 7:
        printf("31 days");
        break;
        case 8:
        printf("31 days");
        break;
        case 10:
        printf("31 days");
        break;
        case 12:
        printf("31 days");
        break;
        case 2:
        printf("28/29 days");
        break;
        case 4:
        printf("30 days");
        break;
        case 6:
        printf("30 days");
        break;
        case 9:
        printf("30 days");
        break;
        case 11:
        printf("30 days");
        break;
        default:
        printf("Wrong input !!!");
    }
    return 0;
}
