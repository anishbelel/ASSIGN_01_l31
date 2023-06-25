#include <iostream>
using namespace std;
void pattern(int n)
{
    if (n <= 0)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    pattern(n - 5);
    cout << n << " ";
}
int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    pattern(n);

    return 0;
}