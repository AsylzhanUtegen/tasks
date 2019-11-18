#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin>>a;
	int c = a;
	a*=a;
	b = a;
	a*=a;
	int x = a;
	cout<<"a^4 2steps: "<<a<<endl;
	a*=b;
	cout<<"a^6 3steps: "<<a<<endl;
	a=a*a*a;
	a = a/(2*b);
	cout<<"a^15 5 steps: "<<a;
	
}
