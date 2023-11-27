#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,v[3],tmp;

    do
    {
    scanf("%lf %lf %lf",&a,&b,&c);
    }while(a<0 || b<0 || c<0);

    v[0]=a;
    v[1]=b;
    v[2]=c;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(v[i]>v[j])
            {
                tmp=v[i];
                v[i]=v[j];
                v[j]=tmp;
            }
        }
    }
    double x,y,z;
    x=v[0];
    y=v[1];
    z=v[2];
    if(x>=y+z)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(pow(x,2)==pow(y,2)+pow(z,2))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(pow(x,2)>pow(y,2)+pow(z,2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(pow(x,2)<pow(y,2)+pow(z,2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(x==y && y==z)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(x==y || y==z || z==x)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}