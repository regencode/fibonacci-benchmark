
#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"
     
clock_t start, end;
double cpu_time_used;
double total_time_used;
int res;

FILE *fp, *fp2;


int main(){



    //Recursive

    fp = fopen("dataRecursive.dat", "w");
    fp2 = fopen("dataRecursiveMagnified.dat" , "w");

    for(int i=1; i<=40; i++){
        start = clock();
        res = fibRecursive(i);
        end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        total_time_used += cpu_time_used;

        fprintf(fp, "(%d,%lf),", i, cpu_time_used); //Recursive - Actual Runtime
        fprintf(fp2, "(%d,%lf),", i, cpu_time_used*100); // Recursive - Magnified Runtime

        printf("Recursive Fib Total Runtime: %lfs   Index: %d\n", total_time_used, i);
    }
    printf("Recursive Fib data generated at dataRecursive.dat and dataRecursiveMagnified.dat\n");
    fclose(fp);
    fclose(fp2);

    return 0;
}