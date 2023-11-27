#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Perimetro = %.1lf\n",(a+b+c));
    }
    else
    {
        double area;
        area=0.5*(a+b)*c;
        printf("Area = %.1lf\n",area);
    }
    return 0;
}