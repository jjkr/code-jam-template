#include "run.hpp"
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    ifstream inputFile(argv[1]);
    run(inputFile, cout, cout);
}

