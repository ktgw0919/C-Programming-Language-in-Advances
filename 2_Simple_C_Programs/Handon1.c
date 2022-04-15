#include<stdio.h>

int a[10000000];
int n;


int main(void){
    printf("Please input the number of digits:");
    scanf("%d",&n);
    printf("Please input your numbers:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                int tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}