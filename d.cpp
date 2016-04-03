#include <string.h>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
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
    TestCase(istream& is, ostream& os, ostream& dbg)
        : in(is), out(os), debug(dbg)
    {
    }
    void solve();

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
    ostream& debug;
};

void TestCase::solve()
{
    // MAGIC goes here







}
}

void run(istream& in, ostream& out, ostream& dbg)
{
    dbg << "running..." << endl;
    int numCases;
    in >> numCases;
    dbg << numCases << " cases" << endl;
    out << fixed << setprecision(7);
    for (auto i = 0; i < numCases; ++i)
    {
        cout << "Case #" << i + 1 << ": ";
        TestCase(in, out, dbg).solve();
        cout << endl;
    }
}
