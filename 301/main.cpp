#include <stdio.h>

int main()
{
    int m,n,a=0,b=0,sum1=0,sum2=0;
    scanf("%d %d",&m,&n);
    for(int i=1; i<m; i++)
    {
        if(m%i==0)
        {
            sum1+=i;
            a++;
        }
    }
    for(int j=1; j<n; j++)
    {
        if(n%j==0)
        {
            sum2+=j;
            b++;
        }
    }
    if(sum1==n||sum2==m)
    {
        printf("yes ");
        printf("%d %d",a,b);
    }
    if(sum1!=n&&sum2!=m)
    {
        printf("no ");
        printf("%d %d",a,b);
    }
    return 0;
}
