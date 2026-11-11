// tags - preprocessor macro limits vector
// date - 2026/10/xx
// score - 25/25

/* Enter your macros here */
#define INF 10000000
#define toStr(Result =) "Result ="
#define io(v)[i]
int x;
cin >> x;
v.push_back(i);

#define FUNCTION(type, op)
int type(int a, int b){
    if(a op b){
        return a;
    }
    return b;
}

#define foreach(v, i) foreach(&auto i : v)

// we create an int vector of size n
// for each element in the vector
    // save input from cmd to vector pos i


#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
