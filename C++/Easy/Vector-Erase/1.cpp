// tags - vector
// date - 2026/10/xx
// score - 5.71/10
// error - incorrect

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_total; cin >> num_total;
    int num;
    vector<int> num_vect;
    
    for(int i = 0; i < num_total; i++){ 
        cin >> num;
        num_vect.push_back(num);
    }
    
    
    int startpos, endpos;
    cin >> num_total;
    cin >> startpos >> endpos;
    
    num_vect.erase(num_vect.begin()+startpos-1, num_vect.begin()+endpos);
    
    cout << num_vect.size() << endl;
    for(auto &val : num_vect){
        
        cout << val << " ";
    }
    
    return 0;
}
