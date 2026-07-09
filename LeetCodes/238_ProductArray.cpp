#include <iostream>
#include<vector>
using namespace std;


// Product of Array of each element except self, by Optimal approach O(n)
vector<int> product(vector<int> nums){ 
    int n=nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }

    for(int i=n-2; i>=0; i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for(int i=0; i<n; i++){
        ans[i]=prefix[i]*suffix[i];
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