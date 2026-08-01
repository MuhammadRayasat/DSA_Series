#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// We may use sort() but do it without builtin function
void Sort(vector<int>& vec){
    int n = vec.size();
    int count0=0, count1=0, count2=0;

    for(int i=0; i<n; i++){
        if(vec.at(i)==0) count0++;
        else if(vec.at(i)==1) count1++;
        else count2++;
    }

    int indx=0;
    for(int i=0; i<count0; i++)   vec.at(indx++)=0;
    for(int i=0; i<count1; i++)   vec.at(indx++)=1;
    for(int i=0; i<count2; i++)   vec.at(indx++)=2;

}

void printv(vector<int> vec){
    for(int val : vec)
    cout<< val << " ";
    cout << endl;
}
int main() {
    vector<int> arr={0,2,1,2,1,0,0,1,2};
    Sort(arr);
    printv(arr);   
    return 0;
}