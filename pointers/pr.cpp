//pointers are unisnged integers that store the address of a variable
#include<iostream>
using namespace std;


int main(){
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=i+1;
    }
    int *p=&a[12];
   // p++;
    // cout<<*(p-7)<<endl;
     cout<<(p[-7])<<endl;
    // int *p1=&a[7];
    //cout<<*p<<endl;
    // cout<<p1<<endl;
    //  cout<<p1-p<<endl; 
  

    return 0;
}