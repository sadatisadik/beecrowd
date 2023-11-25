#include<stdio.h>

int main()
{
    int a,b,c,tmp;
    scanf("%d %d %d",&a,&b,&c);
    int v[3]={a,b,c};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(v[i]<v[j])
            {
                tmp=v[j];
                v[j]=v[i];
                v[i]=tmp;
            }
        }
    }
    printf("%d\n%d\n%d\n",v[0],v[1],v[2]);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}