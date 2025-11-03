#include<iostream>
#include<vector>
using namespace std;

pair<string,int> BS(vector<int > & v,int key){
    int n=v.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==key) return {"Found at pos:", mid};
        else if(v[mid]<key) low=mid+1;
        else high=mid-1;
    }
    return {"Not Found!!",-1};
}
int main(){
vector<int> v={0,1,2,3,4,5,6,7,8,9};
   pair<string,int> p= BS(v,40);
   cout<<p.first<<" "<<p.second<<endl;
}
