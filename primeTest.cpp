/*
Won Choi - 2015
Tests integer primality
Using std:: instead of namespace
*/

#include <iostream>
#include <cstdlib>
#include <cmath> //math lib

bool isPrime(int);
void tester();

int main()
{
    tester();
    return 0;
}

bool isPrime(int value) //returns boolean condition of primality
{
	if (value < 1 || int (sqrt(value)) == sqrt(double (value))) //check >1, if root
		return false;
	else if (value % 2 == 0) //check 2, if even
		return false;
	else{
		for (int i = 3; i < value / 3; i += 2){
			if (value % i == 0){
				return false;
				break; //break if divisor found
			}
		}
		return true;
	}
}

void tester()
{
    std::string SENTINEL = "";

    do{
        system("CLS"); //console clear

        int primeInt = 0;

        std::cout<< "PRIME TESTER\n" << "Please enter an integer: ";
        std::cin>> primeInt;

        if(isPrime(primeInt))
            std::cout<< "Your integer was a prime number." << std::endl;
        else
            std::cout<< "Your integer was not a prime number." << std::endl;

        std::cout<< "Would you like to input another value? y/n: " << std::endl;
        std::cin>> SENTINEL; //sentinel check

        while(SENTINEL != "y" && SENTINEL != "n"){ //check loop
            std::cout<< "Please enter a valid input. y/n: " << std::endl;
            std::cin>> SENTINEL;
        }
    } while(SENTINEL == "y");
}
