#include <stdio.h>

int main()
{
    int a,b,m,n,i;
    scanf("%d %d",&a,&b);
    if(a==0)
    {
        n=b;
    }
    if(b==0)
    {
        n=a;
    }
    m=(a<b)?a:b;
    for(i=m; i>=1; i--)
    {
        if(a%i==0&&b%i==0)
        {
            n=i;
            break;
        }
    }
    printf("%d",n);
    return 0;
}
