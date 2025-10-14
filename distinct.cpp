#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArray(vector<int> arr){
    for(int x:arr){
         cout<<x<<" ";
    }
    cout<<endl;
}
void distinct(vector<int> &arr){  //TC : O(nlogn) SC:O(1)
    //printArray(arr);
    
   sort(arr.begin(),arr.end()); //O(nlogn)
    cout<< "sorted:";
   printArray(arr);
   int j=0;
   for(int i=1;i<arr.size();i++){ //n
       if(arr[i]!=arr[j]){
           j++;
           arr[j]=arr[i];
           cout<<"iteration "<<j<<": ";
          printArray(arr);
       }

   }
     arr.resize(j+1); //1
     cout<<"final array: ";
       printArray(arr);
    
    
}

int main(){
    
    vector<int> arr={1,2,3,4,3,3,2,2,1,6};
    distinct(arr);
}