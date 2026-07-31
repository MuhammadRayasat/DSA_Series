#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
   for(int i=1; i<n; i++){
    int curr= arr[i];
    int prev= i-1;
    while(prev >= 0 && arr[prev] > curr){
        arr[prev+1]=arr[prev];
        prev--;

    }
    arr[prev+1]=curr;
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
    InsertionSort(ar, 7);
    printarr(ar, 7);

    return 0;
}