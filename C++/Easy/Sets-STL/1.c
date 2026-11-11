// tags - set 
// date - 2026/10/xx
// score - 15/15

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int query_total, query_type;
    cin >> query_total;
    
    int value; set<int> s;
    while(cin >> query_type){
        
        switch(query_type){
            
            case 1:
                cin >> value;
                s.insert(value);
                break;
            case 2:
                cin >> value;
                if(s.find(value) != s.end()){ s.erase(value); }
                break;
            case 3:
                cin >> value;
                cout << ((s.find(value) != s.end()) ? "Yes" : "No") << endl;
                break; 
        };
        
    }
    
    return 0;
}
