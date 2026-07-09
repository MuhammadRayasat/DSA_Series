#include <iostream>
#include<vector>
using namespace std;


// Product of Array of each element except self, by Optimal approach Time O(n) and space O(1)
vector<int> product(vector<int> nums){ 
    int n=nums.size();
    vector<int> ans(n,1);

    // Prefix => ans
    for(int i=1; i<n; i++){
        ans[i]=ans[i-1]*nums[i-1];
    }

    // Suffix multiply
    int suffix=1;
    for(int i=n-2; i>=0; i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }


    return ans;
}

int main() {
    vector<int> v={1,2,3,4};
    vector<int> an=product(v);
    cout << "Product of Vector each element except self: "<< endl;
    for(int val: an){
    cout<<val<<",";
    }
    return 0;
}