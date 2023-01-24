#include <iostream>

using namespace std;

int main()
{
    int nums[10];
    int sum = 0, product = 1;

    for (int i = 0; i < 10; ++i)
    {
        cout << "Enter number: ";
        cin >> nums[i];
        sum += nums[i];
        product *= nums[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
    return 0;
}