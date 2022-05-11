#include <iostream>
using namespace std;

struct _node
{
    int data;
    struct _node *link;
};
int main()
{
    struct _node n1, n2, n3;

    n1.data = 10;
    n1.link = &n2;
    n2.data = 20;
    n2.link = &n1;

    n3.data = 30;
    n3.link = &n3;

    cout << &n1 << ", " << &n2 << ", " << &n3 << endl;
    cout << n1.link << ", " << n2.link << ", " << n3.link << endl;
    cout << n1.link->data << ", " << n2.link->data << ", " << n3.link->data << endl;

    return 0;
}