#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;

double conversaoFar(double temperatura, int opcao){
	double resultado;
	// opção 1 é para converter de celsius para fahrenheit
	// opção 2 é para converter de kelvin para fahrenheit
	switch(opcao){
		case 1:		
			resultado = temperatura * 9 / 5 + 32; // celsius para fahrenheit
			return resultado;
		break;
		case 2:
			resultado = (temperatura - 273) * 9 / 5 + 32; // kelvin para fahrenheit
			return resultado;
		break;
	}
	
}

double conversaoCel(double temperatura, int opcao){
	double resultado;
	// opção 1 é para converter de fahrenheit para celsius
	// opção 2 é para converter de kelvin para celsius
	switch(opcao){
		case 1:		
			resultado = (temperatura - 32) / 9 * 5; // Calculo fahrenheit para celsius
			return resultado;
		break;
		case 2:
			resultado = temperatura - 273; // Calculo em kelvin para celsius
			return resultado;
		break;
	}
	
}

double conversaoKel(double temperatura, int opcao){
	double resultado;
	// opção 1 é para converter de fahrenheit para kelvin
	// opção 2 é para converter de celsius para kelvin
	switch(opcao){
		case 1:		
			resultado = (temperatura - 32) / 9 * 5 + 273; // Converte kelvin em far
			return resultado;
		break;
		case 2:
			resultado = temperatura + 273; // Converte kelvin em celsius
			return resultado;
		break;
	}
	
}

int main(){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	double temperatura;
	
	int resposta, op;
	
	string valores[3];
	
	valores[0] = "Celsius";
	valores[1] = "Fahrenheit";
	valores[2] = "Kelvin";
	
	
	do{
		
		for(int i = 0; i < 3 ; i++){
			cout << "Digite (" << i + 1 << ") Converter para " << valores[i] << "\n\n" << endl ;
		}
		
		cin >> resposta;
		cout << "\n\n";
		
		switch(resposta){
			case 1:
				cout << "Digite 1 para converter celsius para Fahrenheit \n\n" << endl;
				cout << "Digite 2 para converter kelvin para Fahrenheit \n\n" << endl;
				cin >> op;
				
				switch(op){
					case 1:
						cout << "Digite o valor em celsius: \n\n" << endl;
						cin >> temperatura;
						cout << "O resultado em Fahrenheit é: " << conversaoFar(temperatura, 1) << endl;
					break;
				}
				
			break;
	
		}
		
	}while(resposta != 0);
	
	
	system("pause");
	return 0;
}
