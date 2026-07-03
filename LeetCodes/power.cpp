#include <iostream>
using namespace std;

int DeciToBin(int deci)
{

    int ans=0, pow=1; //10^0
    while(deci>0){
        int rem = deci%2;
        deci /= 2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans; // Binary Number
}

//use of binary exponentiation for time complexity O(log n)
long long power(int num, int exp){
    if(exp == 0) return 1;
    if(exp < 0) return 0; // integer power can't handle negative exponents

    long long binform = exp; // exponent in decimal, will process bit by bit
    long long ans = 1;
    long long x = num; // base that gets squared each iteration

    while(binform > 0){
        if(binform % 2 == 1){ // if current bit is 1
            ans *= x;
        }
        x *= x; // square the base
        binform /= 2; // move to next bit
    }
    return ans;
}


int main() {
    cout << "3^2 = " << power(3, 2) << endl;
    cout << "2^10 = " << power(2, 10) << endl;
    cout << "5^0 = " << power(5, 0) << endl;
    cout << "2^31 = " << power(2, 31) << endl;
    return 0;
}