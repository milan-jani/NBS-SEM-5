//merge sort using recursionn and divide and conquer
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> merge(vector<int>& A,vector<int>& B) {
    int i = 0; // index for A
    int j = 0; // index for B
    int k = 0; // index for C
    vector<int> C(A.size() + B.size());

    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < A.size()) {
        C[k++] = A[i++];
    }

    while (j < B.size()) {
        C[k++] = B[j++];
    }

    return C;
}
vector<int> mergesort(vector<int>& arr){
    if(arr.size()<=1) return arr;
    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());
    left = mergesort(left);
    right = mergesort(right);
    return merge(left, right);
}
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    vector<int> sortedArr = mergesort(arr);
    
    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}