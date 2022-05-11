#include <iostream>
using namespace std;

struct _sIntData
{
    int n1;
    int n2;
};

struct _sStrData
{
    char str[20];
    char *str2;
};

int main()
{
    struct _sIntData di, *dip;
    struct _sStrData ds, *dsp;

    dip = &di;
    dsp = &ds;
    dsp->str2 = new char[20];

    cin >> dip->n1 >> dip->n2;
    cin >> dsp->str >> dsp->str2;

    cout << dip->n1 << ", " << dip->n2 << endl;
    cout << dsp->str << ", " << dsp->str2 << endl;

    delete dsp->str2;

    return 0;
}