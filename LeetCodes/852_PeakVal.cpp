#include <iostream>
#include <vector>
using namespace std;

// Peak Index in Sorted Array by binary approach TC: O(logn)
int peak(vector<int> A){
    int st=1;   int end=A.size()-2; // Because peak always exist in array
    while(st<=end)
    {
        int mid= st + (end-st)/2;
        
        if(A.at(mid)>A.at(mid-1) && A.at(mid)>A.at(mid+1))
        {
            return mid;
        }

        if(A.at(mid)>A.at(mid-1))
        { // Increasing
            st=mid+1;
        }else{ // Decreasing
            end=mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr={0,3,8,9,5,2};
    cout << "Peak Value in Array is at Index: " << peak(arr) << endl;

    vector<int> arr2={0,10,5,2};
    cout << "Peak Value in Array is at Index: " << peak(arr2) << endl;
    return 0;
}