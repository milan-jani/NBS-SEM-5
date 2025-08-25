#include<iostream>
using namespace std;

void printarray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout <<endl;
    return;
}

void selectionsort(int a[],int size){
    int count = 0; 
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            count++; 
            if(a[min]>a[j]){
                min=j;
            }
        }
        if (i!=min)  swap(a[i],a[min]);
    }
    cout << "Total iteration" << count << endl;
}





int main(){
    int a[10]={0,1,2,3,4};
    int size=sizeof(a)/sizeof(a[0]);
    printarray(a,size);
    selectionsort(a,size);
    cout<<"Sorted:";
    printarray(a,size);
}