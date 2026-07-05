//brute Force approch to find max water container of an array
#include <iostream>
using namespace std;

int maxWat(int arr[], int n){
    int maxwat=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int width = j-i;
            int height=min(arr[j],arr[i]);
            int currwat=width*height;
            maxwat=max(maxwat, currwat);
        }
    }

    return maxwat;
}

int main() {
    
    int n=9;
    int height[n]={1,8,6,2,5,4,8,3,7};
    cout << "The Maximum Water is hold by one container: " << maxWat(height,n) << endl;

    return 0;
}