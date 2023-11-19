#include <stdio.h>

int main() {
    int code[2],unit[2];
    double price[2],sum=0.0;
    for(int i=0; i<2; i++)
    {
        scanf("%d %d %lf",&code[i],&unit[i],&price[i]);
        sum+=unit[i]*price[i];
    }
    printf("VALOR A PAGAR: R$ %.2lf\n",sum);
    return 0;
}