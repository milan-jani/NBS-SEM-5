#include<iostream>
#include <unordered_set>
#include<vector>

using namespace std;

unordered_set<int> diff(vector<int> &arr1,vector<int> &arr2){
    unordered_set<int> s(arr1.begin(),arr1.end());
    for(int x:arr2){
        if(s.find(x)!=s.end()) s.erase(x);
    }
    //print the set
    return s;


}

int main(){
    vector<int> arr1={1,11,12,13,10};
    vector<int> arr2={2,3,4,1};
    unordered_set<int> ans=diff(arr1,arr2);
    cout<<"A-B:";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
       
}