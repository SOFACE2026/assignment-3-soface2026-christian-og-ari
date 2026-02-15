#include "file_logger.hpp"
#include <fstream>
#include <iostream>

// her åbner vi files i konstruktoren
FileLogger::FileLogger(std::string filename)
{
    logfile.open(filename);
}

// her skriver beskeden til filen efterfulgt af en ny linje
void FileLogger::log(std::string msg)
{
    if (logfile.is_open()) {
        logfile << msg << std::endl;
    }
}

// her lukker vi filen i destruktoren
FileLogger::~FileLogger()
{
    if (logfile.is_open()) {
        logfile.close();
    }
}