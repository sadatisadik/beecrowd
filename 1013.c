#include <stdio.h>
int max(int x,int y);
int main()
{
    int a,b,c,g;
    scanf("%d %d %d",&a,&b,&c);
    g=max(a,b);
    g=max(g,c);
    printf("%d eh o maior\n",g);
}
int max(int x,int y)
{
    return (x+y+abs(x-y))/2;
}
