#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
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
    BubbleSort(ar, 7);
    printarr(ar, 7);

    return 0;
}