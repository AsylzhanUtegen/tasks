#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	b = b+a;
	a = b - a;
	b = b - a;
	cout<<a<<" "<<b;
}
