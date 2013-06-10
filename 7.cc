#include <iostream>
using namespace std;

bool isPrime(int a)
{
        for (int i = 3;i*i<=a; i+=2)
        {
            if(a%i==0 && a!=i)
            return false;
        }
            return true;
}

int main()
{
    int num = 3;
    int count = 2;
    while(count<=10001)
    {
        if(isPrime(num))
        {
            count++;
        }
        num+=2;
    }
    cout << num;
    return 0;
}
