#include <stdio.h>

int main() 
{

    int n,i,j,size,min;
    scanf("%d", &n);

     size = n*2 - 1;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            int min = i < j ? i : j;
            min = min < size-i ? min : size-i-1;
            min = min < size-j-1 ? min : size-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }

    return 0;
}