// tags - map 
// date - 2026/11/xx
// score - 15/15

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int query_type, query_total;
    string student;
    int score;
    map<string, int> student_map;
    
    cin >> query_total;
    while(cin >> query_type){
        // cout << query_type;
        
        cin >> student;        
        switch(query_type){
            
            case(1):
                cin >> score;
                if(student_map.find(student) == student_map.end()){
                    student_map.insert({student, score});
                }
                else{
                    // cout << "aaaa" << endl;
                    student_map[student] += score;    
                }
                
                break;
            case(2):
                student_map.erase(student);
                break;
            case(3):
                cout << student_map[student] << endl;
                break;
        }
    }
    return 0;
}
