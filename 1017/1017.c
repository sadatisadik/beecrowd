#include <stdio.h>

int main()
{
    int t,v,s;
    double f;
    scanf("%d %d",&t,&v);
    s=v*t;
    f=s/12.0;
    printf("%.3lf\n",f);
    return 0;
}
