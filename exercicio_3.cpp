#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;


double distancia(double velocidade, double tempo){
	double resultado;
	return resultado = velocidade / tempo;
}


int main(){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	double qtdLitros, velocidade, tempo;
	
	cout << "Digite a velocidade do veículo: " << endl;
		cin >> velocidade;
	cout << "Digite o tempo gasto: " << endl;
		cin >> tempo;
	
	qtdLitros = distancia(velocidade, tempo) / 12;
	
	cout << " Quantidade de litros gasta foi: " << qtdLitros << endl;
	
	system("pause");
	return 0;
}	
