#include <iostream>
using namespace std;
int n = 20;
int *func()
{
    return &n;
}
int function1()
{
    return 10;
}
int function2()
{
    return 12;
}
int main()
{
    int *np = func();
    cout << "int * func(): " << *np << endl;
    int (*main_func)();
    main_func = function1;
    cout << "#1) int (*func)(): " << main_func() << endl;

    main_func = function2;
    cout << "#2) int (*func)(): " << main_func() << endl;

    int (*main_func_2[2])();
    main_func_2[0] = function1;
    main_func_2[1] = function2;

    cout << "int (*func[2])(): " << main_func_2[0]() << ", " << main_func_2[1]() << endl;
    return 0;
}