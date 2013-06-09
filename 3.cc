# include <iostream>
using namespace std;

bool isPrime(int a)
{
    for (int i = 3;i*i<a; i+=2)
     {
         if(a%i==0)
            return false;
     }
     return true;
}

int main()
{
    int num = 755146;
    int max = 0;
    for(int i = 1; i<num; i+=2)
    {
        if(isPrime(i) && 600851475143%i==0)
            max=i;
    }
    cout << max;
    return 0;
}

