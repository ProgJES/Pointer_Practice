#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {{10, 20}, {100, 200}};
    int(*ap)[2] = (int(*)[2])arr; // When they are the same type type casting can be skipped
                                  // ex) int(*ap)[2] = (int(*)[2])arr;

    cout << " arr[0][0]: " << arr[0][0]
         << " arr[0][1]: " << arr[0][1]
         << " arr[1][0]: " << arr[1][0]
         << " arr[1][1]: " << arr[1][1] << endl;

    cout << " ap[0][0]: " << ap[0][0]
         << " ap[0][1]: " << ap[0][1]
         << " ap[1][0]: " << ap[1][0]
         << " ap[1][1]: " << ap[1][1] << endl;

    return 0;
}
