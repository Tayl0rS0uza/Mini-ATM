#include "ATM.hpp"
#include <iostream>
#include <conio.h>

using std::string;
using std::cout;
using std::endl;

void atm::setATM(long int num_conta_a, string nome_a, int PIN_a, double saldo_a, string telefone_a){

    num_conta = num_conta_a;	 
	nome = nome_a;
	PIN = PIN_a;
	saldo = saldo_a;
	telefone = telefone_a;
}

long int atm::getNum_conta(){
    return num_conta;
}

string atm::getNome(){
    return nome;
}

int atm::getPIN(){
    return PIN;
}

double atm::getSaldo(){
    return saldo;
}

string atm::getTelefone(){
    return telefone;
}

void atm::setTelefone(string antigoTel, string novoTel){

    if (antigoTel == telefone){						
			telefone = novoTel;						
			cout << endl << "Numero de telefone alterado com sucesso!";
			_getch();																							
	} else {								
        cout << endl << "Numero de telefone antigo invalido!";
        _getch();			 
    }
}

void atm::saque(int valor){

    if (valor > 0 && valor <= saldo){
        saldo -= valor;		
        cout << endl << "Saque de: " << valor << " realizado com sucesso";
        cout << endl << "Saldo na conta :" << saldo;
        _getch();				
    } else if (valor < 0){
        cout << endl << "Valor invlalido!";
        _getch();			
    } else if (valor > saldo){
        cout << endl << "Saldo na conta insuficiente!";
        cout << endl << "Saldo disponivel na conta: " << saldo;
        _getch();			
    }            
}
