// tags - array
// date - 2026/02/xx
// score - 10/10

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int i, j;
    cin >> i >> j;
    
    for(int k = i; k <= j; k++){
        if(k < 10){
            cout << nums[k]+"\n";
        }
        else if(k % 2){
            cout << "odd\n";
        }
        else{
            cout << "even\n";
        }
    }
    
    return 0;
}
