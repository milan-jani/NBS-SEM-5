//write three func input , print ,sum
// im main func call this func and print for an vector/
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &v, int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        v.push_back(element);
    }
}

void print(const vector<int> &v) {
    cout << "Elements in the vector: ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int sum(const vector<int> &v) {
    int total = 0;
    for (int x: v) {
        total += x;
    }
    return total;
}
//reverse the vector and print it
void reverse(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(v[i], v[n - i - 1]);
    }
    cout << "Reversed :";
    print(v);
}
//max
int max(vector<int> v){
    int max=v[0];
    for(int x:v){
        if(max<x){
            max=x;
        }
        return max;
    }
}
int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v;
    input(v, n);
    print(v);
    
    int totalSum = sum(v);
    cout << "Sum:" << totalSum << endl;
    reverse(v);
    cout << "Max:" << max(v) << endl;
    return 0;
}

//cobert (111)10 -> ()7?
//331 base 7 to base 10?
//