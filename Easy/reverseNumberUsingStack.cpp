#include <bits/stdc++.h>
#include<stack>
using namespace std;

int reverse(int n){
	int temp;
	stack<int> r;
	while (n > 0) {
	    temp = n % 10;
	    n = n / 10;
	    r.push(temp);
	}
	temp = 0;
	int k = 1;
	while(!r.empty()) {
	    temp = temp + (r.top() * k);
	    k *= 10;
	    r.pop();
	}
	return temp;
}
