int fibonacciUsingRecursion(int n) {
    if(n==1 || n==2) {
        return 1;
    }
    return fibonacciUsingRecursion(n-1)+fibonacciUsingRecursion(n-2);
}