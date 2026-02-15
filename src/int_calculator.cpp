#include <sstream> // Hint to how you should build the message.

#include "int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{
    int resultat = a + b;

    // her bruger vi loggeren til at logge beskeden i stedet for at bruge std::cout direkte

    logger->log("taking the sum of: " + std::to_string(a) + " and " + std::to_string(b) + " which is " + std::to_string(resultat));

    return resultat;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{

    int resultat = a * b;
    // her bruger vi loggeren til at logge beskeden i stedet for at bruge std::cout direkte
    
    logger->log("taking the product of: " + std::to_string(a) + " and " + std::to_string(b) + " which is " + std::to_string(resultat));
    return resultat;
}