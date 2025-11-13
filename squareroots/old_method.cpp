#include<iostream>
using namespace std;


double perdiff(double a, double b) {
    return (abs(a - b) / b) * 100.0;
}
double solve(double n,double s){
    double diff,avg;
    while(true){
        diff=n/s;
        avg=(s+diff)/2;
        cout<<diff<<" "<<avg<<endl;
       
        //cout<<check<<endl;
        if(perdiff(s,avg)<0.1) {
            return avg;
            break;
        }
        s=avg;

    }
}
int main(){
    double  n=8;
   
    double start=1;
    // cin>>n;
    // cin>>start;
    cout<< solve(n,start);
}