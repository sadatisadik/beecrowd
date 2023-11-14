#include <stdio.h>

int main()
{
    int X;
    double Y,con;
    scanf ("%d %lf", &X, &Y);
    con=X/Y;
    printf("%.3lf km/l\n",con);
    return 0;
}
