#include<iostream>
#include<vector>
using namespace std;

bool BS(vector<int > & v,int low,int high,int key){
   if(low>=high) return false;

   int mid=(low+high)/2;

   if(v[mid]==key) return true;
   else if(v[mid]<key) BS(v,mid+1,high,key);
   else BS(v,low,mid-1,key);
   return false;
}
int main(){
vector<int> v={0,1,2,3,4,5,6,7,8,9};
   cout<<BS(v,0,v.size()-1,40);
}
