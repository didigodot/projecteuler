#include <iostream>
using namespace std;
int main()
{
    int f1 = 1;
    int f2 = 1;
    int sum = 0;
    while(f2<4000000)
    {
        int temp = f2;
        f2=f2+f1;
        f1=temp;
        if(f2%2==0)
            sum+=f2;
    }
    cout << sum;
    return 0;
}
        
