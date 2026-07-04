#include <iostream>
#include <vector>
using namespace std;

int profit(vector<int> vec){
    int maxp=0;
    int n=vec.size();
    int bestbuy=vec.at(0);

    for (int i=1; i<n; i++){

        if(vec.at(i)>bestbuy)
        {
        maxp=max(maxp, vec.at(i)-bestbuy);

        }
        bestbuy=min(bestbuy, vec.at(i));

    }
    return maxp;
}
int main() {
    vector<int> stockprice={2,5,3,6,2,6,2,6,7,3,7,7,8,9,4};
    int x;
    x = profit(stockprice);
    cout << "Maxprofit of this trade price: " << x << endl;
    return 0;
}