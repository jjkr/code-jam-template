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



    auto c = rd();
    auto f = rd();
    auto x = rd();

    if (c >= x)
    {
        cout << x / 2.0;
        return;
    }

    auto rate = 2.0;

    auto time = 0.0;
    while (true)
    {
        auto timeNoFarm = x / rate;
        auto nextFarm = c / rate;
        rate += f;
        auto timeWithFarm = nextFarm + x / rate;

        if (timeNoFarm < timeWithFarm)
        {
            cout << time + timeNoFarm;
            return;
        }
        time += nextFarm;
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
        logger << endl << "--------------------------------------------------------------" << endl;
        out << endl;
    }
}
