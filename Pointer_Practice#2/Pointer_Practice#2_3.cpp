#include <iostream>
using namespace std;

struct _point
{
    int x, y;
};
int main()
{
    struct _point p[3] = {{10, 20}, {30, 40}, {50, 60}};
    struct _point *sp = p;

    cout << sp->x << ", " << sp->y << endl;
    cout << (sp + 1)->x << ", " << (sp + 1)->y << endl;
    cout << (sp + 2)->x << ", " << (sp + 2)->y << endl;

    cout << sp[0].x << ", " << sp[0].y << endl;
    cout << sp[1].x << ", " << sp[1].x << endl;
    cout << sp[2].x << ", " << sp[2].x << endl;
    return 0;
}