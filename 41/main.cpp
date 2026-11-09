#include <stdio.h>

int main()
{
    int n,s,pi;
    float sum=0;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&pi);
        sum+=pi;
        if(pi>=0&&pi<=50){c1+=1;}
        else if(pi<=100){c2+=1;}
        else if(pi<=150){c3+=1;}
        else if(pi<=200){c4+=1;}
        else if(pi<=300){c5+=1;}
        else {c6+=1;}
    }
    printf("%.2f\n",sum/n);
    printf("%d %d %d %d %d %d",c1,c2,c3,c4,c5,c6);
    return 0;
}
