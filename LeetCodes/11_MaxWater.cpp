#include <iostream>
#include <vector>
using namespace std;

int MaxWat(vector<int> vec){ //O(n)
    int ans;
    int lp=0, rp=vec.size()-1;
    while(lp<rp){
        int width=rp-lp;
        int height=min(vec.at(lp), vec.at(rp));
        int currwat=width*height;
        ans = max(currwat, ans);
        vec.at(lp) < vec.at(rp) ? lp++: rp--;
    }
    return ans;
}

int main() {
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    int max=MaxWat(vec);
    cout << "The Maximum Water stored in container: " << max << endl;
    return 0;
}