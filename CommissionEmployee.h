#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // classe string padrão C++
using std::string;

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &,
        double = 0.0, double = 0.0);

    void setFirstName(const string &);
    string getFirstName() const;

    void setLastName(const string &);
    string getLastName() const;

    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber() const;
    
    void setGrossSales( double ); // configura a quantidade de vendas brutas
    double getGrossSales() const; // retorna a quantidade de vendas brutas
 
    void setCommissionRate( double ); // configura a taxa de comissão
    double getCommissionRate() const; // retorna a taxa de comissão
 
    double earnings() const; // calcula os rendimentos
    void print() const; // imprime o objeto CommissionEmployee
protected: 

    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double commissionRate;
};

#endif
