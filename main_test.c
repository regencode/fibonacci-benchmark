
#include <stdio.h>
#include "mylib/mylib.h"
     
int n;

int main(){
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Iterative fib result: %d\n", fibIterative(n));
    printf("Recursive fib result: %d\n", fibRecursive(n));


    return 0;
}