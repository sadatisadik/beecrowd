#include <stdio.h>
 
int main()
{
    int num,hr;    
    float am,sl;
    scanf("%d %d %f",&num,&hr,&am);
    sl=hr*am;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,sl);
    return 0;
}