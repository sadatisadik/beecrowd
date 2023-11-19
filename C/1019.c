#include <stdio.h>

int main()
{
    int N,hr,min,sec;
    scanf("%d",&N);
    hr=N/3600;
    min=(N%3600)/60;
    sec=(N%3600)%60;
    printf("%d:%d:%d\n",hr,min,sec);
}
