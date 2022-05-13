#include<stdio.h>

int main(void){
    int a[109][109];
    int b[109][109];

    int a_x,a_y,b_x,b_y;

    printf("Input number of columns in matrix A(Less than 100):");
    scanf("%d",&a_x);
    printf("Input number of rows in matrix A(Less than 100):");
    scanf("%d",&a_y);
    printf("Input number of columns in matrix B(Less than 100):");
    scanf("%d",&b_x);
    printf("Input number of rows in matrix B(Less than 100):");
    scanf("%d",&b_y);

    if(a_x!=b_y){
        printf("Cannot be calculate!");
        return 0;
    }

    for(int i=0;i<a_y;i++){
        printf("Input row %d of matrix A:",i+1);
        for(int j=0;j<a_x;j++){
            scanf("%d",&a[i][j]);
        }
    }
    /*
    for(int i=0;i<a_y;i++){
        for(int j=0;j<a_x;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */

    for(int i=0;i<b_y;i++){
        printf("Input row %d of matrix B:",i+1);
        for(int j=0;j<b_x;j++){
            scanf("%d",&b[i][j]);
        }
    }
    /*
    for(int i=0;i<b_y;i++){
        for(int j=0;j<b_x;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    */

   int ans[109][109];

   for(int i=0;i<a_y;i++){
       for(int j=0;j<b_x;j++){
           for(int k=0;k<b_y;k++){
               ans[i][j]+=a[i][k]*b[k][j];
           }
       }
   }
   
    for(int i=0;i<a_y;i++){
        for(int j=0;j<b_x;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}
