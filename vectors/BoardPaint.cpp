#include <iostream>
#include <vector>
using namespace std;
// Finding minimum maximum time for painting board

// Valid Time Calculation for given range
bool ispossible(vector<int> vec, int n, int m, int maxAllowedTime){
    int painters=1, time=0;

    for(int i=0; i<n; i++){
        if(time + vec[i] <= maxAllowedTime){
            time+=vec[i];
        }else{
            painters++;
            time=vec[i];
        }
    }

    return painters<=m ? true: false;
}

// Calculate Minimum maximum time for painting board
int minipaint(vector<int> arr, int n,  int m){
int sum=0, MaxVal=INT_MIN;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        MaxVal=max(MaxVal, arr[i]);
    }

    int st=MaxVal, end=sum, ans=-1;

    while(st<=end){
        int mid=st + (end-st)/2;

        if(ispossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }

    return ans;

}

int main() {    

    vector<int> arr={40,30,10,20}; // Board Length
    int n=4; // Number of Boards
    int m=2; // Number of Painters
    int result=minipaint(arr, n, m);
    cout<<"Minimum maximum time for painting board: "<<result<<endl;
    return 0;
}