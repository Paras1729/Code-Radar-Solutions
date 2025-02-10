#include <stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   while(a>0){
    for (int b = 0;b<a){
        printf("*");
    }
    a--;
    printf("\n");
    
      }
}