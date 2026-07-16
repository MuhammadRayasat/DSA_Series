#include <iostream>
#include <vector>
using namespace std;

// Finding single element in paired element array
int search(vector<int> nums){
    int n=nums.size()-1;
    int st=0, end=n;

    while(st<=end){
        int mid=st+(end-st)/2;

        // Corner cases of Array
        if(n==1)
        return nums[mid];

        if(mid==0 && nums[0] != nums[1])
        return nums[mid];
        
        if(mid==n && nums[n] != nums[n-1])
        return nums[mid];

        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1])
        return nums[mid];

        //Even Array
        if(mid%2==0){
            if(nums[mid]==nums[mid-1]){ // Left
                end=mid-1;    
            }else{ // Right
                st=mid+1;    
            }
        }else{ // Odd Array
            if(nums[mid]==nums[mid-1]){ // Right    
                st=mid+1;
            }else{ // left
                end=mid-1;    
            }
        }
        
    } return -1;

}
int main() {
    vector<int> v1={1,1,2,3,3,4,4,5,5};
    vector<int> v2={2,2,3,3,4,5,5};
    vector<int> v3={5,7,7,14,14,29,29,80,80};
    vector<int> v4={2,2,4,4,5,5,6,6,8,8,9};

    cout << "Single Element in Vector v1 is: " << search(v1) << endl;
    cout << "Single Element in Vector v2 is: " << search(v2) << endl;
    cout << "Single Element in Vector v3 is: " << search(v3) << endl;
    cout << "Single Element in Vector v4 is: " << search(v4) << endl;


    return 0;
}