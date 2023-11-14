#include <stdio.h>
#include <math.h>
int main()
{
    double m,n;
    int x,r,s;
    do
    {
        scanf("%lf",&m);
    }while(m <= 0);

    x=(int)m;
    n=m-x;
    s=round(n*100);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",x/100);
    r=x%100;

    printf("%d nota(s) de R$ 50.00\n",r/50);
    r=r%50;

    printf("%d nota(s) de R$ 20.00\n",r/20);
    r=r%20;

    printf("%d nota(s) de R$ 10.00\n",r/10);
    r=r%10;

    printf("%d nota(s) de R$ 5.00\n",r/5);
    r=r%5;

    printf("%d nota(s) de R$ 2.00\n",r/2);
    r=r%2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",r/1);

    printf("%d moeda(s) de R$ 0.50\n",s/50);
    r=s%50;

    printf("%d moeda(s) de R$ 0.25\n",r/25);
    r=r%25;

    printf("%d moeda(s) de R$ 0.10\n",r/10);
    r=r%10;

    printf("%d moeda(s) de R$ 0.05\n",r/5);
    r=r%5;

    printf("%d moeda(s) de R$ 0.01\n",r/1);
    return 0;
}
