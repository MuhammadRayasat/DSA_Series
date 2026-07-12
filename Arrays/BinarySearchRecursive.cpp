#include <iostream>
#include <vector>
using namespace std;

// Recursive Binary Search TC O(logn)
int bs (vector<int> vec,int tg, int st, int end){
    if(st<=end){
        int mid=st+(end-st)/2;

        if(tg>vec.at(mid)){ // Second half
            return bs(vec,tg,mid+1, end);
        }

        else if(tg<vec.at(mid)){ // First Half
            return bs(vec, tg, st, mid-1);
        }

        else  // answer
        return mid;
    }
    return -1;
}


int main() {

    vector<int> v2={3,6,9,12,15,18,21}; // Odd Order
    int tar=21;
    cout<< tar <<" lies on index: " << bs(v2,tar,0,v2.size()-1)<< endl;

    vector<int> v1={1,2,3,4,5,6,7,8,9,10}; // Even Order
    int tar2=9;
    cout<< tar2 <<" lies on index: " << bs(v1,tar2,0,v1.size()-1)<< endl;
    
    
    return 0;
}