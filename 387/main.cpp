#include <stdio.h>

int main()
{
    int a,b,m,i,p;
    scanf("%d %d",&a,&b);
    p=(a<b)?a:b;
    for(i=p;i>=1;i--){
        if(a%i==0&&b%i==0){
            m=i;
            break;
        }
    }
    printf("%d",a*b/m);
    return 0;
}
