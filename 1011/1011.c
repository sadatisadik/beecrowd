#include <stdio.h>
#include <math.h>

int main()
{
    const double pi=3.14159;
    double R,V;
    scanf("%lf",&R);
    V=(4/3.0)*pi*pow(R,3);
    printf("VOLUME = %.3lf\n",V);
    return 0;
}