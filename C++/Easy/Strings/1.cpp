// tags - string
// date - 2026/02/xx
// score - 10/10

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1, s2;
    cin >> s1, cin >> s2;
    
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 << s2 << endl;
    
    
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    
    cout << s1 << " " << s2;
    return 0;
}
