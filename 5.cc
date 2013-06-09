#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    bool found = false;
    for(int i = 20; i>19; i+=20)
    {
        for(int j=1; j<=19; j++)
        {
            if(i%j!=0)
            {
                found=false;
                break;
            }
            else
                found=true;
        }
        if(found==true)
        {
            num=i;
            break;
        }
    }
    cout << num;
    return 0;
}
