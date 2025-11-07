#include<iostream>
using namespace std;


double perdiff(double a, double b) {
    return (abs(a - b) / b) * 100.0;
}
double solve(int n,int s){
    double diff,avg;
    while(true){
        diff=n/s;
        avg=(s+diff)/2;
        cout<<diff<<" "<<avg<<endl;
        double check=perdiff(s,diff);
        cout<<check<<endl;
        if(check<0.1) {
            return avg;
            break;
        }
        n=avg;
    }
}
int main(){
    double  n=73;
    cout<<INT_MAX<<endl;
    int start=1001;
    // cin>>n;
    // cin>>start;
    cout<< solve(n,start);
}