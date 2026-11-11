// tags - vector sort
// date - 2026/10/xx
// score - 10/10

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_total, num;
    vector<int> num_vect;
    
    cin >> num_total;
    while(cin >> num){ num_vect.push_back(num); }
    
    sort(num_vect.begin(), num_vect.end());
    
    for(auto &i: num_vect){ cout << i << " "; }
    
    return 0;
}
