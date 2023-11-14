#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,x,y;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(a==0 || d < 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    else
    {
        x=0.5*(-b+sqrt(d))/a;
        y=0.5*(-b-sqrt(d))/a;
        printf("R1 = %.5lf\n",x);
        printf("R2 = %.5lf\n",y);
    }
    return 0;
}