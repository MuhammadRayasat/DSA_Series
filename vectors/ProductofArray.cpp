#include <iostream>
#include <vector>
using namespace std;

// Product of Array of each element except self, by brute force approach O(n2)
vector<int> prod(vector<int> vec){
vector<int> ans;
int n=vec.size();
for(int i=0; i<n; i++){
    int prod=1;
    for(int j=0; j<n; j++){
        if(i!=j)
        prod *= vec.at(j);
    }
    ans.push_back(prod);
}

return ans;
}

int main() {
    vector<int> v={1,2,3,4};
    vector<int> an=prod(v);
    cout << "Product of Vector each element except self: "<< endl;
    for(int val: an){
    cout<<val<<",";
    }
    return 0;
}