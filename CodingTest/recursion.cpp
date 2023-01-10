#include <iostream>


int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 1 || n == 0)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    
}

