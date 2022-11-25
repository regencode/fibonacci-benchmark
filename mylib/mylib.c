


int fibIterative(unsigned int N){

    int first = 0, second = 1;

    for(int i=1; i<=N-1; i++){
        int temp = second;

        second = first + second;
        first = temp;
    }

    return second;

}

int fibRecursive(unsigned int N){
    if(N==0){
        return 0;
    } else if(N==1) {
        return 1;
    } else {
        return fibRecursive(N-1)+fibRecursive(N-2);
    }
}