#include <iostream>
#include <algorithm>
using namespace std;

void SelectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int si=i; //smallest index
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[si]){
                si=j;
            }
        }
        swap(arr[i],arr[si]);
    }
}

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int ar[7]={8,6,4,2,1,7,5};
    SelectionSort(ar, 7);
    printarr(ar, 7);

    return 0;
}