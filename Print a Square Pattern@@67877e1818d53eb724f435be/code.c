#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i =0;a>i;i++){
        for (int j = 0;a>j;j++){
            printf("* ");
        }
        printf("\n");
    }
}