#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=2000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/instrukcje.txt");
	string instrukcja[n];
	char znak[n];
	int i=0, j=0, licznik=0, najw_l=0;
	char litera;

	for(i=0; i<n; i++){
		we>>instrukcja[i];
		we>>znak[i];
	}
	
	for(j=0; j<26; j++){
		licznik=0;
		for(i=0; i<n; i++){
			if(instrukcja[i]=="DOPISZ"){
				if(znak[i]==65+j) licznik++;
			}
		}
		if(licznik>najw_l){
			najw_l=licznik;
			litera=65+j;
		}
	}
	
	cout<<litera<<" "<<najw_l;

	return 0;
}
