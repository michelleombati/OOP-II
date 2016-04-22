#include <iostream>

using namespace std;

long long accumulator = 1;

int main()
{
    int number;
    cout << "enter a number :";
    cin >> number;
    if(number < 0)
    {
        cout << "no negative numbers allowed!\n";
        return 1;
    }
    if (number>20)
    {
        cout << "program will not produce correct result!\n";
    }
    for(;number > 0; accumulator *= number --);
    cout << "the factorial of " << number << "is"<< accumulator << "\n";
    return 0;
}