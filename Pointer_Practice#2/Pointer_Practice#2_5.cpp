#include <iostream>
using namespace std;

struct _sData
{
    int *ap;
    int num;
};

int main()
{
    struct _sData s;
    s.num = 3;
    s.ap = new int[s.num];
    *(s.ap) = 10;
    *(s.ap + 1) = 20;
    *(s.ap + 2) = 30;

    cout << "NUMBER: " << s.num << " [0]: " << s.ap[0] << " [1]: " << s.ap[1] << " [2]: " << s.ap[2] << endl;
    return 0;
}