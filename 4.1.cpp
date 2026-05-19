#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=2000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/instrukcje.txt");
	string A[n];
	int i=0, licznik=0;
	string a="";
	
	for(i=0; i<n; i++){
		getline(we, A[i]);
	}

	for(i=0; i<n; i++){
		a=A[i];
		if(a[0]=='D') licznik++;
		if(a[0]=='U') licznik--;
	}

	cout<<licznik;

	return 0;
}
