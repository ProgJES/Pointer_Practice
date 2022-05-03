#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ap = arr;

    cout << " arr[0]: " << arr[0]
         << " arr[1]: " << arr[1]
         << " arr[2]: " << arr[2]
         << " arr[3]: " << arr[3]
         << " arr[4]: " << arr[4] << endl;

    cout << " ap[0]: " << ap[0]
         << " ap[1]: " << ap[1]
         << " ap[2]: " << ap[2]
         << " ap[3]: " << ap[3]
         << " ap[4]: " << ap[4] << endl;

    return 0;
}