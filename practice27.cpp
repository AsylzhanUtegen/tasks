#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, aa,bb,cc;
	cin>>a>>b>>c;
	aa = a;
	bb = b;
	cc = c;
	a = aa + bb;
	b = cc - aa;
	c = aa + bb + cc;
	cout<<a<<" "<<b<<" "<<c;	
}
