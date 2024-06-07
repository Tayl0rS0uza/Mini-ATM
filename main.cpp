#include "ATM.hpp"
#include <iostream>
#include <conio.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int choice = 0;
	int enterPIN;		
	long int enterNum_conta;
	double valor;

	system("cls");

	atm usuario1;
	usuario1.setATM(987654321, "Taylor", 333, 200000.0, "31999887331");

	do{
		system("cls");

		cout << endl << "-------- Bem vindo ao sistema ATM --------" << endl;
		cout << endl << "Numero da conta: ";	 
		cin >> enterNum_conta;
		cout << endl << "PIN: ";				
		cin >> enterPIN;

		if ((enterNum_conta == usuario1.getNum_conta()) && (enterPIN == usuario1.getPIN())) {
			
			do{
				int saldo = 0;
				string antigoTel, novoTel;

				system("cls");
				cout << endl << "-------- Bem vindo ao sistema ATM --------" << endl;
				cout << endl << "Escolha a opcao: ";
				cout << endl << "1. Consultar saldo";
				cout << endl << "2. Saque";
				cout << endl << "3. Dados de usuario";
				cout << endl << "4. Atualizar telefone";
				cout << endl << "5. Sair" << endl;
				cin >> choice;						

				switch (choice)						
				{
				case 1:								
					cout << endl << "Seu saldo bancario e de: " << usuario1.getSaldo(); 
					_getch();
					break;

				case 2:	
					cout << endl << "Insira o valor:";		
					cin >> valor;
					usuario1.saque(valor);			
					break;

				case 3:										
					cout << endl << endl << "Dados de usuario: ";
					cout << endl << "-> Numero da conta: " << usuario1.getNum_conta();
					cout << endl << "-> Nome: " << usuario1.getNome();
					cout << endl << "-> Saldo: " << usuario1.getSaldo();
					cout << endl << "-> Telefone: " << usuario1.getTelefone();
					_getch();
					break;

				case 4:								  
					cout << endl << "Numero antigo: ";
					cin >> antigoTel;							
					cout << endl << "Novo numero: ";
					cin >> novoTel;							
					usuario1.setTelefone(antigoTel, novoTel);
					_getch();	
					break;

				case 5:
					exit(0);						

				default:							
					cout << endl << "Entre com dados validos!!";
				} 

			} while (1);														
		}

		else
		{
			cout << endl << "Dados de usuario invalidos!";
			_getch();
		}

	} while (1);															

	return 0;
}

