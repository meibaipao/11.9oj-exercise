#include <stdio.h>

int main()
{
    int n,m;
    float sum=0;
    float a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        sum+=m;
    }
    printf("%.2f",sum/n);
    return 0;
}
