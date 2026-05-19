#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=2000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/instrukcje.txt");
	string instrukcja[n];
	string wynik="", a="";
	char znak[n];
	int i=0, j=0;

	for(i=0; i<n; i++){
		we>>instrukcja[i];
		we>>znak[i];
	}
	
	for(i=0; i<n; i++){
		a=instrukcja[i];
		
		if(a[0]=='D') wynik+=znak[i];
		
		if(a[0]=='U') wynik.erase(wynik.size()-1);
		
		if(a[0]=='Z') wynik[wynik.size()-1]=znak[i];		
		
		if(a[0]=='P'){
			j=0;
			while(znak[i]!=wynik[j]){
				j++;
			}
			if(wynik[j]=='Z') wynik[j]='A';
			else wynik[j]=znak[i]+1;
		}

	}
	
	cout<<wynik;
	
	return 0;
}
