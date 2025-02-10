#include <stdio.h>
int main(){
    int a,c=1;
    scanf("%d",&a);
    while(a>0){
        for(int b = 0;c>b;b++){
            printf("* ");
        }
    c++;
    a--;
    printf("\n");
    } 
}