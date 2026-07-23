#include <iostream>
#include <vector>
using namespace std;
// Finding Minimum possible maximum book Allocation

// Validation
bool isValid(vector<int> arr, int n, int m, int maxallowedpage){ //O(n)
    int student=1, pages=0;
    
    for(int i=0; i<n; i++){
         if(arr[i] > maxallowedpage){
            return false;
         }

         if(pages + arr[i] <= maxallowedpage){
            pages += arr[i];
         }else{
            student++;
            pages = arr[i];
         }
    }
    return student > m ? false : true;
     
}


// Function for evaluating
int allocateBooks(vector<int> arr, int n, int m){ //O(logN * n)
    
    if(m>n){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){ // O(n)
        sum+=arr[i];
    }
    
    int ans = -1; 
    int st=0, end=sum; // Range of possible value 

    while(st<end){ //Olog(N)
        int mid = st+(end-st)/2;

        if(isValid(arr,n,m,mid)){ //Left
            ans=mid;
            end=mid-1; 
        } else{ //Right
            st=mid+1;
        }
    }

    return ans;
}


int main() {
    
    vector<int> ar={3,7,4,2};
    int n=4, m=2;

    cout << allocateBooks(ar, n, m) << endl;
    return 0;
}