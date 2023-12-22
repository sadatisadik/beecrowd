#include<stdio.h>
int main()
{
    int ih,im,fh,fm,t,h,m;
    scanf("%d %d %d %d",&ih,&im,&fh,&fm);
    t=((fh*60)+fm)-((ih*60)+im);
    if(t<=0)
    {
        t+=24*60;
    }
    h=t/60;
    m=t%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    return 0;
}
