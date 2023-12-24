#include<stdio.h>
int main()
{
    int A,N,sum=0;
    scanf("%d %d",&A,&N);
    while(N<=0)
    {
        scanf("%d",&N);
    }

    for(int i=0;i<N;i++)
    {
        sum+=(A+i);
    }
    printf("%d\n",sum);
    return 0;
}