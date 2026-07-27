#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Aggressive Cow Problem

bool isPossible(vector<int> &arr, int N, int C, int MinAllowedDistance){  // O(n)
    int cowCount=1;
    int lastPos=arr[0];

    for(int i=0; i<N; i++){
        if(arr[i]-lastPos>=MinAllowedDistance ){
            cowCount++;
            if(cowCount==C){
                return true;
            }
            lastPos=arr[i];
        }
    }

    return false;
}

int getDistance(vector<int> &arr, int N, int C){
    sort(arr.begin(), arr.end());   // NlogN
    int st=1, end=arr[N-1]-arr[0], ans=-1;

    while (st<=end) // O(log(Range)*N)
    {
        int mid = st + (end-st)/2;
        
        if(isPossible(arr, N, C, mid)){ // Right
            ans=mid;
            st=mid+1;

        }else{  // Left
            end = mid-1;

        }
    }
    return ans;

}


int main() {
    int N=5, C=3;
    vector<int> arr={1,2,4,8,9};

    cout<< getDistance(arr, N, C) << endl;
    return 0;
}