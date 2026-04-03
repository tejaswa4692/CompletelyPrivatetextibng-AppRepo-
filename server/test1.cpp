#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int len;
    cout << "Enter the length of number pyramid: ";
    cin >> len;
    cout << endl;
    string a = "*";
    len += 2;
    for (int i = 1; i < len; i++)
    {   
        for (size_t j = 1; j < i; j++)
        {
            cout << j;
            cout << endl;
    }
    
    
    cout << endl;
}
