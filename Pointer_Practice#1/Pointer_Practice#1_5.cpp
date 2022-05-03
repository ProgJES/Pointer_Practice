#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int(*ap)[2] = (int(*)[2])arr;

    cout << " arr[0]: " << arr[0]
         << " arr[1]: " << arr[1]
         << " arr[2]: " << arr[2]
         << " arr[3]: " << arr[3]
         << " arr[4]: " << arr[4]
         << " arr[5]: " << arr[5] << endl;

    cout << " ap[0][0]: " << ap[0][0]
         << " ap[0][1]: " << ap[0][1]
         << " ap[1][0]: " << ap[1][0]
         << " ap[1][1]: " << ap[1][1]
         << " ap[2][0]: " << ap[2][0]
         << " ap[2][1]: " << ap[2][1] << endl;

    return 0;
}