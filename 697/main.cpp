#include <stdio.h>

int main()
{
    float d;int t;float fee1=0,fee2=0,fee=0;
    scanf("%f %d",&d,&t);
    if(d<=3){fee1=10;}
    else if(d<=10){fee1=10+(d-3)*2;}
    else{fee1=10+14+(d-10)*3;}
    fee2=t/5*2;
    fee=fee1+fee2;
    printf("%.1f",fee);
    return 0;
}
