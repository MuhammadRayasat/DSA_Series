#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag Alogrithm
void Sort(vector<int> &vec){
    int mid=0, low=0, high=vec.size()-1;
    while(mid<=high){

        if(vec.at(mid)==0){
            swap(vec.at(mid),vec.at(low));
            low++;
            mid++;
        }
        else if(vec.at(mid)==1){
            mid++;
        }
        else // 2
        {
            swap(vec.at(mid),vec.at(high));
            high--;
        }

    }

}
int main() {
    vector<int> arr={2,0,2,1,1,0,1,2,0,0};
    Sort(arr);
    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}