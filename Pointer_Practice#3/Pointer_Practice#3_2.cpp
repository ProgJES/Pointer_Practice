#include <iostream>
using namespace std;

// Make it clear / empty from the stackframe by the caller
int __cdecl sum_cdecl(int a, int b)
{
    return a + b;
}
// Make it clear / empty from the stackframe by the callee
int __stdcall sum_stdcall(int a, int b)
{
    return a + b;
}
int main()
{
    int(__cdecl * func_cdecl)(int, int);     // CDECL CALLING CONVENTION
    int(__stdcall * func_stdcall)(int, int); // STDCALL CALLING CONVENTION

    func_cdecl = sum_cdecl;
    func_stdcall = sum_stdcall;

    cout << "CDECL CALLING CONVENTION: " << func_cdecl(10, 20) << endl;
    cout << "STDCALL CALLING CONVENTION: " << func_stdcall(10, 20) << endl;

    return 0;
}