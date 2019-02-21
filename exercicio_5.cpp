#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;


double caixaVolume(double comprimento, double largura, double altura){
	return comprimento * largura * altura;
}


int main(){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	double comprimento, largura, altura, resultado;
	
	cout << "Digite o comprimento da caixa: " << endl;
		cin >> comprimento;
	cout << "Digite a largura da caixa: " << endl;
		cin >> largura;
	cout << "Digite a altura da caixa: " << endl;
		cin >> altura;
	
	resultado = caixaVolume(comprimento, largura, altura);
	
	cout << "O volume da caixa é: " << resultado << endl;
	
	system("pause");
	return 0;
}	
