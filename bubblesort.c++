#include <iostream>
using namespace std;
//
int main() {
    int n;
    cout << "Enter the size";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Bubble Sort
   bool flag = false;
    for(int i = 0; i < n ; i++) {

        for(int j = 0; j < n - i - 1; ++j) {
            if(arr[j] > arr[j + 1]) {
                // Swap 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cout<<"h"<<endl;
                flag = true;
                
            }
           
            
        
    }
     if(!flag) {
                break; 
            }
}
    cout << "Sorted array is: ";
  
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
   
}