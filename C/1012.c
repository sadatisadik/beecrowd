#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    double A,B,C,tri,cir,tra,sq,rec;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri=0.5*A*C, cir=pi*C*C, tra=0.5*(A+B)*C, sq=B*B, rec=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,sq,rec);
    return 0;
}
