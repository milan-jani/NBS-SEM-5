#include<iostream>
#include <unordered_set>
#include<vector>
using namespace std;

unordered_set<int> unionSet(vector<int> &arr1,vector<int> &arr2){
    unordered_set<int> s(arr1.begin(),arr1.end());
    vector<int> temp;
    for(int x:arr2){
        if(s.find(x)!=s.end()) temp.push_back(x);
        s.erase(x);
    }
    return unordered_set<int>(temp.begin(),temp.end());
}
int main(){
    vector<int> arr1={1,1,5,4,2};
    vector<int> arr2={2,3,4,1};
    unordered_set<int> ans=unionSet(arr1,arr2);
    cout<<"A intersection B:";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
       
}