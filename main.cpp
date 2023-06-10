// ***************************************************
// Projekt:      
// Copyright:    
// Author: Besart Jashari       
// Datum:        
// Programmname: 
// ***************************************************

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <windows.h>

	using namespace std;

	int main(){
	
	srand(time(NULL));
	
	int computerzahl = rand()%100;
	int deinezahl;
	int versuch = 1;
	int maxversuch = 5;
	cout << "Sie Spielen nun gegen den Computer. Errate die Computerzahl zwischen 0-100!\n Sie haben 5 versuche\n\n";
	
	
	do{
		cout << "Ihre Zahl: ";
		cin >> deinezahl;
		if(deinezahl > computerzahl){
			cout << "Ihre Zahl ist noch zu gross!\n";
		}
		else if(deinezahl < computerzahl){
			cout << "Ihre Zahl ist noch zu Klein!\n";
		}
		else{
			cout << "Gratuliere!! sie haben die zahl: "<< computerzahl << " erraten!";
		}
		
		++versuch;
			cout << "\nversuch: "<< versuch<< endl;
		
	}while(versuch != maxversuch && deinezahl != computerzahl);
	

	


//getchar();
	return 0;
}
