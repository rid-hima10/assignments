#include<stdio.h>
// print 2 -> 3x3 matrix
int main(){
    int matrix_1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d%d element",i,j);
            scanf("%d",&matrix_1[i][j]);
        }
    }
    int matrix_2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter %d%d element",i,j);
            scanf("%d",&matrix_2[i][j]);
        }
    }
    printf("Matrix1:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix2:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",matrix_2[i][j]);
        }
        printf("\n");
    }
    // print addition of these matrices
    int sum[3][3];
    printf("sum of two matrix is\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=matrix_1[i][j]+matrix_2[i][j];
            printf("%d\t",sum[i][j]);
        }
    printf("\n");
    }
    return 0;
}