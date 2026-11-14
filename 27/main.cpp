#include <stdio.h>


int main()
{
    float a;//ÎÒ×Ô¼º²âÊÔ
    float x;
    scanf("%f",&a);
    if(a<=110)
    {
        x=0.50*a;
    }
    else if(a<=210)
    {
        x=0.50*110+0.55*(a-110);
    }
    else
    {
        x=0.50*110+0.55*100+0.70*(a-210);
    }
    printf("%.2f\n",x);

}
