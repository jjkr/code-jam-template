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
