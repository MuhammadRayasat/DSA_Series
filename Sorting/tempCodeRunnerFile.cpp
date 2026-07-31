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