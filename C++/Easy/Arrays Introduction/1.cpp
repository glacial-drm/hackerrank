// tags - array string
// date - 2026/02/xx
// score - 10/10

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i; 
    string* arr;
    cin >> i;
    
    arr = new string[i];
    for(int j = 0; j < i; j++){
        cin >> arr[j];
    }
    
    for(int j = i-1; j >= 0; j--){
        cout << arr[j]+' ';    
    }
    
    return 0;
}
