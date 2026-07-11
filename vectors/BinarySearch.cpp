#include <iostream>
#include <vector>
using namespace std;


// Binary search only for Asscendig sorted Array
int search(vector<int> vec, int trg){
    int st=0;
    int end=vec.size()-1;

    while(st<=end){
        int mid=st + (end-st)/2; // Becuase of prevention from overflow of int range
        
        if(trg>vec.at(mid))
        st=mid+1; // Next Half
        else if(trg<vec.at(mid))
        end=mid-1; // First Half
        else
        return mid;

    }
    return -1;
}

int main() {

    vector<int> v2={3,6,9,12,15,18,21}; // Odd Order
    int tar=21;
    cout<< tar <<" lies on index: " << search(v2,tar)<< endl;

    vector<int> v1={1,2,3,4,5,6,7,8,9,10}; // Even Order
    int tar2=9;
    cout<< tar2 <<" lies on index: " << search(v1,tar2)<< endl;
    
    
    return 0;
}