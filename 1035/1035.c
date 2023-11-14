#include <stdio.h>
int main()
{
    int A,B,C,D,E;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    E=A%2;
    if(B > C && D > A && (C+D) > (A+B) && C > 0 && D > 0 && E == 0 )
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
}