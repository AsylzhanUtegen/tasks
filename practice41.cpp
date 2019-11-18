#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x<(-100) || x > 100){
		x=0;
		cout<<x;
	}else{
		cout<<x+1;
	}
}
