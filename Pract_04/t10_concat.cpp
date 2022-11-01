#include <iostream>
using namespace std;

int countDigits(int n){
    int result = 0;
    while(n > 0){
        n /= 10;
        result++;
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

int concat(int first, int second){
    int offset = countDigits(second); 
    int result = first * myPow(10, offset) + second; // we add offset digits to the back of the first number and add them
    return result;
}

int main(){ 
    int f, s;
    cin >> f >> s;

    cout << concat(f, s);
}

