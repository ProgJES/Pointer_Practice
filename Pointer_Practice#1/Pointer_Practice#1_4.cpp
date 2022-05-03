#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{10, 20, 30}, {100, 200, 300}};
    int *ap = (int *)arr;

    cout << " arr[0][0]: " << arr[0][0]
         << " arr[0][1]: " << arr[0][1]
         << " arr[0][2]: " << arr[0][2]
         << " arr[1][0]: " << arr[1][0]
         << " arr[1][1]: " << arr[1][1]
         << " arr[1][2]: " << arr[1][2] << endl;

    cout << " ap[0]: " << ap[0]
         << " ap[1]: " << ap[1]
         << " ap[2]: " << ap[2]
         << " ap[3]: " << ap[3]
         << " ap[4]: " << ap[4]
         << " ap[5]: " << ap[5] << endl;

    return 0;
}