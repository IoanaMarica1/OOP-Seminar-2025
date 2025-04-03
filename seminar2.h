//
// Created by Asus on 3/20/2025.
//
#include<string>
#include <iostream>
#include<cmath>

#ifndef SEMINAR2_H
#define SEMINAR2_H

class BankAccount {
private:
    std::string name;
    std::string iban;
    double balance;
public:
    BankAccount(std::string iban,std::string name) {
        this->iban = iban;
        this->name = name;
        balance = 0.0;

        std::cout << "Bank account object created: " << iban << std::endl;
    }
    BankAccount(std::string iban, double balance,std::string name):
    BankAccount(iban, name){
        this->balance = balance;
    }
    bool deposit(double amount) {
        if (amount < 0) {
            return false;
        }

        balance+=amount;
        return true;
    }

    ~BankAccount() {
        std::cout << "Bank account object destroyed: " << iban << std::endl;
    }
    std::string get_iban() {
        return iban;
    }

    double get_balance() {
        return balance;
    }



};






#endif //SEMINAR2_H
