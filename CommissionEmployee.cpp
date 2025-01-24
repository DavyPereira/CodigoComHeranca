#include <iostream>
using std::cout;

#include "CommissionEmployee.h" // definição da classe CommissionEmployee

// construtor
CommissionEmployee::CommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate )
{
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
} // fim do construtor CommissionEmployee

// configura o nome
void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
} // fim da função setFirstName

// retorna o nome
string CommissionEmployee::getFirstName() const
{
    return firstName;
}

void CommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}

string CommissionEmployee::getLastName() const
{
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
}

void CommissionEmployee::print() const
{
    cout << "commission employee:" << firstName << ' ' << lastName
        << "\nsocial security number:" << socialSecurityNumber
        << "\ngross sales:" << grossSales
        << "\ncommission rate:" << commissionRate;
}