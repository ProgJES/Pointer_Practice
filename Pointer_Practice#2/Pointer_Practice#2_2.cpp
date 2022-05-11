#include <iostream>
using namespace std;

struct _node
{
    int data;
    struct _node *link;
};
int main()
{
    struct _node n5 = {50, NULL}, n4 = {40, NULL}, n3 = {30, NULL}, n2 = {20, NULL}, n1 = {10, NULL};
    struct _node *np = NULL;

    np = &n1;
    n1.link = &n2;
    n2.link = &n3;
    n3.link = &n4;
    n4.link = &n5;

    cout << &np << ", " << &n1 << ", " << &n2 << ", " << &n3 << ", " << &n4 << ", " << &n5 << endl;

    cout << np->data << endl;
    np = np->link;

    cout << np->data << endl;
    np = np->link;

    cout << np->data << endl;
    np = np->link;

    cout << np->data << endl;
    np = np->link;

    cout << np->data << endl;

    return 0;
}