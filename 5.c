#include <ctype.h>
#include <stdio.h>
int main()
{
    char a;
    printf("v-violet\ni-indigo\nb-blue\ng-green\ny-yellow\no-orange\nr-red\nInput a character -\n");
   scanf("%c",&a);

    switch(tolower(a))
    {
        case 'v':
        printf("VIOLET");
        break;
        case 'i':
        printf("INDIGO");
        break;
        case 'b':
        printf("BLUE");
        break;
        case 'g':
        printf("GREEN");
        break;
        case 'y':
        printf("YELLOW");
        break;
        case 'o':
        printf("ORANGE");
        break;
        case 'r':
        printf("RED");
        break;
        default:
        printf("Wrong input !!!");
    }
    return 0;
}
