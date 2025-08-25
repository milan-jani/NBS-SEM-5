#include<iostream>
#include<vector>
using namespace std;

void rotate_k(vector<int>)

int main(){
    vector<int> v={1, 2, 3, 4, 5};
    int n = v.size();
    
int d;//times to rotate
cout<<"Enter the number of times to rotate: ";
cin>>d;
d= d % n; 
//take backup of last d elements

if (d == 0) {
    cout << "No rotation needed." << endl;
    return 0;
}
int count = 0;
while (d>0) {
    int temp = v[n - 1]; 
    for (int i = n - 1; i > 0; --i) {
        v[i] = v[i - 1]; //shift to the right
    }
    v[0] = temp; 
    d--;
    count++;

}
    cout << "Rotated vector: ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Number of rotations: " << count << endl;
  
    return 0;
}

vector<int> temp(n);
    for (int i = k; i < n; ++i) {
        temp[i - k] = v[i];

    }
    for (int i = 0; i < k; ++i) {
        temp[n - k + i] = v[i];
    }