#include<iostream>
#include<set>
#include<vector>
using namespace std;

void print(set<int> &s) {
    
    for (int x : s){
       
       cout << x << " ";
    } 
    
    cout << endl;
}


int distinct(vector<int> &v){
    set<int> s;
    for(int x : v){
        s.insert(x);
    }
   return s.size();
   //TC: O(n log n) 
   //SC: O(n) 
    
}


int main(){
    
    vector<int> v={5,3,8,1,5,1,3,7,9,8};
    int n=distinct(v);
    cout<<"Number of unique elements are: "<<n<<endl;
    

    

   
   //print using iteratorr
    // cout<<"Using iterator"<<endl;
    // for(set<int>::iterator it=s.begin();it!=s.end();it++){
    //     cout<<*it<<" ";
    // }
    


    return 0;
}


