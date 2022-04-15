#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    if(n<=0)printf("Error!");
    int ans=1;
    for(int i=0;i<n;i++){
        ans=ans*(i+1);
    }
    printf("%d",ans);
    return 0;
}

