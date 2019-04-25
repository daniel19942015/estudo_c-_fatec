#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float altura(float alturaPrograma){
	return alturaPrograma;
}

float base(float basePrograma){
	return basePrograma;
}

float calcularArea(float base, float altura){
	return (base * altura) / 2; 
}

int main(int argc, char** argv) {
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	
	int tecla = 0;
	
	
	while(tecla != 4){
	
		cout << "Digite 1 para calcular a area/n";
	
	}
	
	
	
	system("pause");
	return 0;
}
