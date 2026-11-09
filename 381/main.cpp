#include <stdio.h>
int main()
{
    int n,a[10000],m,t;
    scanf("%d",&n);

    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
    if(n%2!=0){m=a[n/2];}
    else{m=(a[(n-1)/2]+a[(n+1)/2])/2;}
    printf("%d %d %d",a[n-1],m,a[0]);
    return 0;
}
