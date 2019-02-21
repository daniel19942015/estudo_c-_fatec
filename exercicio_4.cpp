#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;

double prestacao(double valor, double taxa, double tempo){
	return valor + (valor * taxa/100) * tempo;
}


int main(){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	double taxa, valor, tempo, resultado;
	
	cout << "Digite o valor da prestação: " << endl;
		cin >> valor;
	cout << "Digite a taxa a ser cobrada: " << endl;
		cin >> taxa;
	cout << "Digite o tempo: " << endl;
		cin >> tempo;
	
	resultado = prestacao(valor, taxa, tempo);
	
	cout << "O valor da prestacao é: " << resultado << endl;	
	
	system("pause");
	return 0;
}	
