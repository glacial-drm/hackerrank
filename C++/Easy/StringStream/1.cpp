// tags - vector input tokenise
// date - 2026/10/xx
// score - 10/10

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> vect;
    char ch = 'x';
    int i;
    stringstream ss(str);
    
    while(ss >> i >> ch){
        vect.push_back(i);
    }
    vect.push_back(i);
    
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
