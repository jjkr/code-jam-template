#include <string.h>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

namespace
{
class TestCase
{
public:
    TestCase(istream& is, ostream& os, ostream& logger)
        : in(is), out(os), logger(logger)
    {
    }
    void run();

private:
    template <typename T>
    auto read()
    {
        T i;
        in >> i;
        return i;
    }
    auto ri() { return read<int>(); };
    auto rd() { return read<double>(); };
    auto rs() { return read<string>(); };
    istream& in;
    ostream& out;
    ostream& logger;
};

void TestCase::run()
{
    // MAGIC goes here

    vector<int> possibles(4);

    auto row1 = ri();
    for (int i = 1; i < row1; ++i)
    {
        ri();
        ri();
        ri();
        ri();
    }

    for (auto i = 0; i < 4; ++i)
    {
        possibles[i] = ri();
    }

    for (auto i = 0; i < 4-row1; ++i)
    {
        ri();
        ri();
        ri();
        ri();
    }


    auto row2 = ri();
    vector<int> answers;
    for (int i = 1; i < row2; ++i)
    {
        ri();
        ri();
        ri();
        ri();
    }

    for (auto i = 0; i < 4; ++i)
    {
        auto x = ri();
        auto found = find(possibles.cbegin(), possibles.cend(), x);
        if(found != possibles.cend())
        {
            answers.push_back(*found);
        }
    }

    for (auto i = 0; i < 4-row2; ++i)
    {
        ri();
        ri();
        ri();
        ri();
    }

    switch(answers.size())
    {
        case 0:
            out << "Volunteer cheated!";
            break;
        case 1:
            out << answers[0];
            break;
        default:
            out << "Bad magician!";
            break;
    }


}
}

void run(istream& in, ostream& out, ostream& logger)
{
    int numCases;
    in >> numCases;
    logger << "running " << numCases << " cases" << endl;
    out << fixed << setprecision(7);
    for (auto i = 0; i < numCases; ++i)
    {
        out << "Case #" << i + 1 << ": ";
        TestCase(in, out, logger).run();
        out << endl;
    }
}
