#include <iostream>
using namespace std;

// Caller
int __cdecl Add_cdecl(int x, int y)
{
    return x + y;
}
// Callee
int __stdcall Add_stdcall(int x, int y)
{
    return x + y;
}

int main()
{
    cout << "(CALLER)ADD CDECL: " << Add_cdecl(10, 20) << endl;
    cout << "(CALLEE)ADD STDCALL: " << Add_stdcall(10, 20) << endl;
    return 0;
}