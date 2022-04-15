#include<stdio.h>

double a[10000000];
int n;
double sum=0;

int main(void){
     printf("Please input the number of digits:");
    scanf("%d",&n);
    printf("Please input your numbers:");
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    printf("%lf",sum/n);
    return 0;
}