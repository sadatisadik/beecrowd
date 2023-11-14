#include <stdio.h>
#include <math.h>
double dis(double a, double b, double c, double d);
int main() {
    double x1,x2,y1,y2,s;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    s=dis(x1,x2,y1,y2);
    printf("%.4lf\n",s);
    return 0;
}

double dis(double a, double b, double c, double d)
{
    return sqrt(pow((b-a),2)+pow((d-c),2));
}
