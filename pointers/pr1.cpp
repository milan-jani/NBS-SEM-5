//pointers are unisnged integers that store the address of a variable
#include<iostream>
using namespace std;


#include <iostream>
#include <iterator>   // for ostream_iterator
#include <algorithm>  // for copy
using namespace std;

int main() {
    int a[10];
    for(int i=0; i<10; i++) {
        a[i] = i+1;
    }
    int *p = &a[0];

    // pehle check kar rahe ho pointer aur first element
    cout << p << " " << a << endl;

    // ✅ print whole array in single cout statement
    cout << "Array: ";
    copy(p, p + 10, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
