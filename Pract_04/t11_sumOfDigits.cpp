#include <iostream>
using namespace std;



int sumDigits(int n){
    int result = 0;
    while(n > 0){
        result += n % 10;
        n /= 10;
    }
    return result;
}

int finalDigitSum(int n){
    while(n >= 10){
        n = sumDigits(n);
    }
    return n;
}

int main(){
    int n;
    cin >> n;

    cout << finalDigitSum(n);
}
