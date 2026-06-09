#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number:" << endl;
    cin >> a;

    if(a > 0)
    {
        if(a % 2 == 0)
        {
            cout << "Positive Even" << endl;
        }
        else
        {
            cout << "Positive Odd" << endl;
        }
    }
    else
    {
        cout << "Not Positive" << endl;
    }

    return 0;
}
