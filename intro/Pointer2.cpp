#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b) {
    *a = *a + *b;
    *b = abs(*a - 2 * *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    a = 6;
    b = 4;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "&a = " << &a << ", &b = " << &b << endl;
    cout << "*pa = " << *pa << ", *pb = " << *pb << endl;
    cout << "pa = " << pa << ", pb = " << pb << endl;
    
    update(pa, pb);
    cout << a << '\n' << b;
    
    return 0;
}

/*output:
a = 6, b = 4
&a = 0x7ffe0aa5c76c, &b = 0x7ffe0aa5c768
*pa = 6, *pb = 4
pa = 0x7ffe0aa5c76c, pb = 0x7ffe0aa5c768
10
2
*/
