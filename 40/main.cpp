#include <stdio.h>

int main()
{
    int n,a[105];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
    if(n==1){printf("no");}
    else if(n==2){printf("%d",a[1]-a[0]);}
    else {int d=a[1]-a[0];
    int tell=1;
    for(int i=1;i<n-1;i++){
        if(a[i+1]-a[i]!=d){
            tell=0;
            break;
        }
    }
    if(tell==1){printf("%d",d);}
    else{printf("no");}}
    return 0;
}
