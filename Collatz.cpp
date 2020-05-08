#include <stdio.h>
#include <iostream>
using namespace std;

int collatz(int num);

int main (void){
    int num;
    cout << "Enter a number to see its transformation under collatz" << endl;
    cin >> num;
    collatz(num);
    return 0;
}

int collatz(int num){
    if(num == 1){
        return 1;
    } else if(num %2 == 0){
        num /= 2;
        cout << num << " -> ";
        collatz(num);
    } else {
        num = 3* num + 1;
        cout << num << " -> ";
        collatz(num);
    }
    return 0;
}