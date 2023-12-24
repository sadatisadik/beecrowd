#include<stdio.h>
int main()
{
    int n;
    double a,b,c,avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        avg=(a*2+b*3+c*5)/(2+3+5);
        printf("%.1lf\n",avg);
    }
    return 0;
}