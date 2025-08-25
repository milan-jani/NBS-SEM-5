#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

void print(vector<int> a){
    for (int i = 0; i < a.size();    i++)
    {
       cout<<a[i];
    }
    
}

 double mean(vector<int> arr) {
    if (arr.empty()) return 0.0;
    double sum = 0;
    for (int a:arr) {
        sum+=a;
    }
    return sum/arr.size();
}
double median(vector<int> arr){
    if (arr.empty()) return 0.0;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}
void mode(vector<int> arr){
    if(arr.empty()) return;
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    int max=0;
    for(pair<int,int> p :freq){
        (p.second>max)?max = p.second:max;
    }
    vector<int> mod;
    for(pair<int,int> p :freq){
        if(p.second == max){
            mod.push_back(p.first);
        }
    }
    print(mod);



}
// find mode in single loop (supports multiple modes)
void mode_singloop(vector<int> arr) {
    unordered_map<int,int> freq;
    int maxFreq = 0;
    vector<int> modes;

    for (int x : arr) {
        freq[x]++;

        if (freq[x] > maxFreq) {
            maxFreq = freq[x];
            modes={x};
        } 
        else if (freq[x] == maxFreq) {
            
           
                modes.push_back(x);
            
        }
    }

    cout << "Modes: ";
    print(modes);
    cout << endl;
}

int main() {
    vector<int> arr = {1,2,2,3,3,5,5,6,7};
    // cout<<"enter the size:";
    // int n;
    // cin>>n;
    // cout<<"enter the values:";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout << "mean: " << mean(arr)<<endl;
    cout<<"median:" <<median(arr)<<endl;
    cout<<"mode:";
   mode(arr);
    cout<<endl;
     mode_singloop(arr);
     return 0;
    
}