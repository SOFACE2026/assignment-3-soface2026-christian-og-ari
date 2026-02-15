#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    // her gør vi så den fungerer for alle datatyper
    T sum(T a, T b)
    {
        T resultat = a + b;
        // her bruger vi loggeren til at logge beskeden i stedet for at bruge std::cout direkte
        std::stringstream ss;
        ss << "taking the sum of: " << a << " and " << b << " which is " << resultat;
        logger->log(ss.str());
        return resultat;

    }

    //
    T multiply(T a, T b)
    {
        T resultat = a * b;
        // her bruger vi loggeren til at logge beskeden i stedet for at bruge std::cout direkte
        std::stringstream ss;
        ss << "taking the product of: " << a << " and " << b << " which is " << resultat;
        logger->log(ss.str());
        return resultat;
    }

private:
    Logger *logger;
};