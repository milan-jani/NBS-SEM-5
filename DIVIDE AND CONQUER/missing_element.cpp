#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//using divide and conquer approach
int missing_element(vector<int> arr){
    int n=arr.size();
    cout<<"n: "<<n<<endl;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==mid+1){
            low=mid+1;
        }
        else{
            if(mid==0 || arr[mid-1]==mid){
                return mid+1;
            }
            high=mid-1;
        }
    }
    return n+1;
}
int main(){
    // int n;
    // cin>>n;
    vector<int> arr={2,3,4,5,6,7};
    cout<<missing_element(arr);
    
    return 0;
}