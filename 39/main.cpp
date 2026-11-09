#include <stdio.h>

int main()
{
    int i,j,m,n,a[105][105];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int found=0;
    for(i=0;i<m;i++){
    int min_val=a[i][0];
    int col=0;
    for(j=1;j<n;j++){
        if(a[i][j]<min_val){
            min_val=a[i][j];
            col=j;
        }
    }
    int max_val=a[0][col];
    int row=0;
    for(int k=1;k<m;k++){
        if(a[k][col]>max_val){
            max_val=a[k][col];
            row=k;
        }
    }
    if(min_val==max_val){
        found=1;
        printf("%d %d %d\n",row,col,min_val);}
    }
    if(found==0){printf("no\n");}
    return 0;
}
