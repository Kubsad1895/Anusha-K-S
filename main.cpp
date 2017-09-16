#include <iostream>
#include<decrement.h>

using namespace std;

int main(int argc, char *argv[])
{
    decrement c1, c2;
    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();
    --c1;
    c2 = --c1;
    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count() << endl;
    return 0;
}
