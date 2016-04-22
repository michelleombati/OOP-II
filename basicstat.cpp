#include <iostream>

using namespace std;

int main ()

{
    int N;
    cout<<"Enter N:";
    cin>> N;
    int acc =0;
    

    cin>> acc;
    int minVal = acc;
    int maxVal = acc;


for (int i=1; i < N; ++1)
{
    int a;
    cin >> a;
    acc += a;
    if (a < minVal)
    {
        minVal = a;
    }
    if(a > maxVal)
    {
        maxVal = a;
    }
}
cout << "Mean:" << (double)acc/N <<"\n";
cout << "max :" <<maxVal<< "\n";
cout << "min :" <<minVal<< "\n";
cout << "Range:" << (maxVal-minVal<< "\n";

return 0;
}
