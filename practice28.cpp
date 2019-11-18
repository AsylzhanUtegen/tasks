#include <bits/stdc++.h>
using namespace std;
int main(){
	float a, b;
	cin>>a>>b;
	for(int i = 0; i<5; i++){
		a = a+a*(b/100.0);
	}cout<<a;	
}
