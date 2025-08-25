#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v){
     for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout<<endl;
}
void prefixsum(vector<int> arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); ++i) {  
        prefix[i] = prefix[i - 1] + arr[i];
    }
    cout<<"preffix:";
    print(prefix);
   
}
//covert prifix to original array
void convert_to_original(vector<int>arr) {
    for (int i = arr.size() - 1; i > 0; --i) {
        arr[i] -= arr[i - 1];
    }
    arr[0] = arr[0]; // First element remains the same
    cout << "Converted to original array from prefix :";
    print(arr);
}
void prefix_in_place(vector<int> arr) {
    for (int i = 1; i < arr.size(); ++i) {  
        arr[i] += arr[i - 1];
    }
    cout<<"preffix in place:";
    print(arr);
    convert_to_original(arr);
}


//covert suffix to original array
void convert_to_original_suffix(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        arr[i] -= arr[i + 1];
    }
    arr[arr.size() - 1] = arr[arr.size() - 1]; // Last element remains the same
    cout << "Converted to original array from suffix: ";
    print(arr);
}

void suffixsum(vector<int> arr){
    vector<int> suffix(arr.size());
    suffix[arr.size()-1] = arr[arr.size()-1];
    for (int i = arr.size()-2; i >= 0; i--) {  
        suffix[i] = suffix[i + 1] + arr[i];
    }
    cout<<"Suffix:";
    print(suffix);
    convert_to_original_suffix(suffix);
}

int main(){
    vector<int> arr={6 ,9 ,3 ,7 ,5,4};
    cout<<"Original array:";
    print(arr);
    cout<<"------------------"<<endl;
    prefixsum(arr);
    suffixsum(arr);
    prefix_in_place(arr);
    
}