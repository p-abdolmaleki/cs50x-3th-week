#include <iostream>
using namespace std;

int fib(int n) 
{
    int a0 = 0;
    int a1 = 1;
    int current;
    if (n == 0)
    {
        return a0;
    }
    else if(n == 1)
    {
        return a1;
    }
    else 
    {
        for (int i = 2; i <= n; i++)
        {
            current = a0 + a1;
            a0 = a1;
            a1 = current;
        }
        return current;
    }
}
int main()
{
    cout<<fib(5);
    return 0;
}