#include<iostream>
#include <unordered_set>
#include<vector>
using namespace std;

unordered_set<int> unionSet(vector<int> &arr1,vector<int> &arr2){
    unordered_set<int> s(arr1.begin(),arr1.end());
    for(int x:arr2){
        s.insert(x);
    }
    return s;
}
int main(){
    vector<int> arr1={1,1,5,4,2};
    vector<int> arr2={2,3,4,1};
    unordered_set<int> ans=unionSet(arr1,arr2);
    cout<<"A U B:";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
       
}