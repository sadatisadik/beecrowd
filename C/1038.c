#include <stdio.h>
int main()
{
    int x,y;
    double p;
    scanf("%d %d",&x,&y);
    switch(x)
    {
        case 1:
        p=4.0*y;
        break;

        case 2:
        p=4.5*y;
        break;

        case 3:
        p=5.0*y;
        break;

        case 4:
        p=2.0*y;
        break;

        case 5:
        p=1.5*y;
        break;

        default:
        return 1;
    }

    printf("Total: R$ %.2lf\n",p);
    return 0;
}