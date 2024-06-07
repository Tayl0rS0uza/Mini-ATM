#ifndef ATM_HPP
#define ATM_HPP

#include <string>

class atm									
{
    private:										
        long int num_conta;
        std::string nome;
        int PIN;
        double saldo;
        std::string telefone;

    public:
        void setATM(long int num_conta_a, std::string nome_a, int PIN_a, double saldo_a, std::string telefone_a);
        long int getNum_conta();
        std::string getNome();
        int getPIN();
        double getSaldo();
        std::string getTelefone();
        void setTelefone(std::string antigoTel, std::string novoTel);
        void saque(int valor);

};

#endif;