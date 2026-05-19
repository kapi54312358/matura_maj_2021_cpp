#include <iostream>

using namespace std;

int dopelnienie(int n){
	int d=0, r=0, w=0, p=1;
	
	while(n>0){
		r=n%10;
		d=9-r;
		w+=d*p;
		n/=10;
		p*=10;
	}
	
	return w;
}

int main(int argc, char** argv) {
	cout<<dopelnienie(2021);
	
	return 0;
}
