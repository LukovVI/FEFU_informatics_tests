#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int h, m, s, n = 0;
	cin >> n;
    
    	n = n%(3600*24);
	h = n/3600;
	m = (n%3600)/60;
	s = n%60;

	cout << h << ":" << m/10 << m%10 << ":" << s/10 << s%10;

	return 0;
}