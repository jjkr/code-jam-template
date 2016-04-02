#include "run.hpp"
#include <fstream>
#include <iostream>

int main()
{
    std::fstream fs;
    run(std::cin, std::cout, fs);
}

