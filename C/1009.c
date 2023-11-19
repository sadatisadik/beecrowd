#include <stdio.h>
void slb();
int main() 
{
    slb();
}

void slb()
{
    char name[100];
    gets(name);
    double sl,num,slb;
    scanf("%lf %lf",&sl,&num);
    slb=sl+num*0.15;
    printf("TOTAL = R$ %.2lf\n",slb);
}