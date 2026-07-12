#include <iostream>
#include<vector>
using namespace std;

// Rotated Sorted Array Searching
int search(vector<int> nums, int target){
    int st=0; 
    int end=nums.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2; // Mid Calculation

        if(nums.at(mid)==target){ // If mid is our target
            return mid;
        }

        if(nums.at(st)<=nums.at(mid)) // Left Sorted
        {
            if(nums.at(st)<target<nums.at(mid)){ // Taget lies in sorted or not
                end=mid-1;
            }else{// Target is not in sorted
                st=mid+1;
            }

        }else{ // Right Sorted --> mid > st
            if(nums.at(mid)>target>nums.at(end)){ // Taget lies in sorted or not
                st=mid+1;
            }else{// Target is not in sorted
                end=mid-1;
            }
            

        }
    }
    return -1;
}

// Rotated Sorted Array searching
int main() {

    vector<int> v2={12,15,18,21,3,6,9}; // Odd Order
    int tar=21;
    cout<< tar <<" lies on index: " << search(v2,tar)<< endl;

    vector<int> v1={5,6,7,8,9,10,1,2,3,4}; // Even Order
    int tar2=9;
    cout<< tar2 <<" lies on index: " << search(v1,tar2)<< endl;
    
    
    return 0;
}