#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int n=100;
    // vector<int> primes;
    // for (int i =2 ; i <= n; i++)
    // {
    //     primes.push_back(i);
    // }
    //using bool
    vector<bool> primes(n+1,1);
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        if(primes[i]){
            for(int j=i*i;j<=n;j+=i){
                primes[j]=0;
            }
        }
    }
    cout<<"Primes upto "<<n<<": ";
    
    
    

    for(int p:primes){
        if(p!=0)
        cout<<p<<" ";
    }
    
}