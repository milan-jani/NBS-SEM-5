#include<iostream>
#include<set>
using namespace std;

void print(set<int> s) {
    for (int x : s) cout << x << " ";
    cout << endl;
}

void add(set<int> &s, int x) {
    s.insert(x);
}

int main(){
    set<int> s;
    add(s,5);
    add(s,3);   
    add(s,8);
    add(s,1);
    add(s,5); 

    cout << "Set elements in sorted order:" << endl;
    print(s);
   //print using iteratorr
    cout<<"Using iterator"<<endl;
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    //another way to print
    cout<<"\nUsing auto"<<endl;


    return 0;
}