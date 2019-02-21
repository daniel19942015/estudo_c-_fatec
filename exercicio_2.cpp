#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;


double volumeObjeto(double raio, double altura){
	double volume = 0;
	volume = M_PI * pow(raio, 2) * altura;
	return volume;
}


int main(){
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	double raio, altura;
	
		cout  << "Digite a altura do objeto \n" << endl;
			cin >> altura;
		cout  << "Digite o raio do objeto\n" << endl;
			cin >> raio;
			
			cout << "\n" << endl;	
			cout << volumeObjeto(raio, altura) << endl;
	
	
	system("pause");
	return 0;
}	
