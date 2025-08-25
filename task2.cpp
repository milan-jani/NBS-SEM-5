//wrte a program to find out sum of digits of givrn number
#include <iostream>
using namespace std;
int sum(int n) {
    if (n == 0) return 0;
    else {return n%10 + sum(n/10);}
}
int main() {
    int n;
    cout << "Enter num:";
    cin >> n;
    cout<<"ans:"<<sum(n)<<endl;
    return 0;
}
