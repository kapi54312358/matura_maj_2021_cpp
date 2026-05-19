#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=2000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/instrukcje.txt");
	string instrukcja[n];
	char znak[n];
	int i=0, j=0, licznik=0, najd_c=0;
	string najd_ins="";

	for(i=0; i<n; i++){
		we>>instrukcja[i];
		we>>znak[i];
	}

	for(i=0; i<n; i++){
		j=i+1;
		licznik=1;
		while(instrukcja[i]==instrukcja[j]){
			licznik++;
			j++;
		}
		if(licznik>najd_c){
			najd_c=licznik;
			najd_ins=instrukcja[i];
		}
	}

	cout<<najd_ins<<" "<<najd_c;

	return 0;
}
