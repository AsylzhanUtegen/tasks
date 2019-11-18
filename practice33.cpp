#include <bits/stdc++.h>
using namespace std;
int main(){
	float x ,y;
	cin>>x>>y;
	float xx = sqrt(x), yy = sqrt(y);
	if(xx>=0 && yy>=0){
		cout<<sqrt(x-sqrt(y));
	}else{
		cout<<"Error";
	}
}
