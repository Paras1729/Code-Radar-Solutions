// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    int arr[a];
    int arr1[a];
    for (int i = 0 ; i < a ; i++){
        scanf("%d",&b);
        arr[i] = b;
        b = 0;
    }
    scanf("%d",&c);
    int i = 0;
    for (int j = c; j<a; j++){
        scanf("%d",&b);
        arr1[i] = arr[j];
        b = 0;
        i++;
    }
    for (int k = 0 ; k<j ; k++){
        scanf("%d",&b);
        arr1[i] = arr[k];
        b = 0;
        i++;
    }
    for (int m = 0 ; m < a ; m++){
        printf("%d\n",arr1[m]);
    }
}