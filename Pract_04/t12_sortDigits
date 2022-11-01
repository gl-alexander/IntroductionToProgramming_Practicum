#include <iostream>
using namespace std;

int countOccurances(int n, int digit){
    if(digit > 9 || digit < 0) return -1;

    int result = 0;
    while(n > 0){
        if(n % 10 == digit){
            result++;
        }
        n /= 10;
    }
    return result;
}

int repeatDigit(int n, int k){
    int result = 0;
    for(int i = 0; i < k; i++){
        result *= 10;
        result += n;
    }
    return result;
}

int myPow(int x, int n){
    int result = 1;
    for(int i = 0; i < n; i++){
        result *= x;
    }
    return result;
}

int sortDigits(int n){
    int result = 0;
    for(int i = 0; i <= 9; i++){
        int digitOccurances = countOccurances(n, i);
        if(digitOccurances > 0){
            result *= myPow(10, digitOccurances);
            result += repeatDigit(i, digitOccurances);
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;

    cout << sortDigits(n);
}
