#include<iostream>
using namespace std;

long long pow(long long base,long long n){
    if(n==1) return base;

    else return base*pow(base,--n);
}

long long pow_optimal(long long base,long long n){
    if(n==0) return 1;
    long long temp=pow(base,n/2);
    if(n%2==0){
        return temp*temp;

    }
    else return base*temp*temp;
}
int main(){
    long long base=2;
    long long n=50;
    //cout<<pow(base,n);
    cout<<pow_optimal(base,n);
}