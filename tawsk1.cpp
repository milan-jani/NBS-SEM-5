//write a program to find x^n

#include <iostream>
using namespace std;

int pow(int x,int n) {
    if(n>0)
    return (n == 0) ? 1 : x * pow(x, n - 1);
    if(n<0)
    return (n == 0) ? 1 : 1 / (x * pow(x, -n - 1));
}

int main(){
    int x,n;
    cout<<"enter base";
    cin>>x;
    cout<<"enter power:";
    cin>>n;
    int result = 1;
    for(int i=0;i<n;i++){
        result *= x;
    }
    cout<<"Result: "<<x<<endl;
    cout<<"result:"<<pow(2,8)<<endl;


}