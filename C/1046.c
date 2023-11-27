#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d %d",&a,&b);
    if(a==b || a>b)
    {
        d=24-a+b;
    }
    else if(a<b)
    {
        d=b-a;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n",d);
    return 0;
}