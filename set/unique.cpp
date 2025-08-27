#include<iostream>
#include<set>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void print(unordered_set<int> &s) {
    
    for (int x : s){
       
       cout << x << " ";
    } 
    
    cout << endl;
}


void unique(vector<int> &v){
   unordered_map<int,int> m;
    for(int x : v){
        m[x]++;
    }
    //print unique elements
    cout<<"Unique elements are: ";
    for(pair<int,int> p : m){
         if(p.second == 1)
        cout<<p.first<<" ";
    }
   //TC: 
   //SC: 
    
}
//same above funcc using set whose freq is 1
void unique2(vector<int> &v){
    unordered_set<int> s;
     for(int x : v){
        if( s.find(x) == s.end()){
           
          s.insert(x);
     }
    }
     //print unique elements
     cout<<"Unique elements are(using set): ";
     print(s);
    //TC: O(n log n)
    //SC: O(n)
    
}
//in vrein diagram which are used to set in maths blank rectangle is called universal set

int main(){
    
    vector<int> v={1,2,2,3,3,3,4,4,1,5,5};
    unique(v);
    cout<<endl;
    unique2(v);
    
    
    

    

   
   //print using iteratorr
    // cout<<"Using iterator"<<endl;
    // for(set<int>::iterator it=s.begin();it!=s.end();it++){
    //     cout<<*it<<" ";
    // }
    


    return 0;
}


