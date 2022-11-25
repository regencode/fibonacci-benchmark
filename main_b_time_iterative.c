#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"
     
clock_t start, end;
double cpu_time_used;
double total_time_used;
int res;

FILE *fp, *fp2;


int main(){


    //Iterative

    fp = fopen("dataIterative.dat", "w");
    fp2 = fopen("dataIterativeMagnified.dat", "w");

    for(int i=1; i<=50000; i++){

        if(i<=40){

            start = clock();
            res = fibIterative(i);
            end = clock();

            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            total_time_used += cpu_time_used;

            fprintf(fp, "(%d,%lf),", i, cpu_time_used); //Iterative - Actual Runtime

            printf("Iterative Fib Total Runtime: %lfs   Index: %d\n", total_time_used, i);

        } else if(i%1000==0){
            start = clock();
            res = fibIterative(i);
            end = clock();

            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            total_time_used += cpu_time_used;

            fprintf(fp2, "(%d,%lf),", i/1000, cpu_time_used*100000); //Iterative - Magnified Runtime per 1000 steps

            printf("Iterative Fib Total Runtime: %lfs   Index: %d\n", total_time_used, i);
        }

    }
    printf("Iterative Fib data generated at dataIterative.dat and dataIterativeMagnified.dat\n");
    fclose(fp);
    fclose(fp2);

    return 0;
}