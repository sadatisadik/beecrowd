#include <stdio.h>

int main()
{
    double n1,n2,n3,n4,a;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    a=(n1*2.0+n2*3.0+n3*4.0+n4*1.0)/(2+3+4+1);
    printf("Media: %.1lf\n",a);
    if(a>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(a<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(a>=5.0 && a<=6.9)
    {
        printf("Aluno em exame.\n");
        double n5,b;
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);
        b=(a+n5)/2;
        if(b>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(b<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",b);
    }
    return 0;
}