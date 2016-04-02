#include <algorithm>
#include <bitset>
#include <deque>
#include <functional>
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string.h>

using namespace std;

namespace
{
    class TestCase
    {
    public:
        TestCase(istream& is, ostream& os, ostream& log) : in(is), out(os), log(log) {}
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
        ostream& log;
    };

    void TestCase::solve()
    {
        // MAGIC goes here






    }
}

void run(istream& in, ostream& out, ostream& log)
{
    log << "running..." << endl;
    int num_cases;
    in >> num_cases;
    log << num_cases << " cases" << endl;
    out << fixed << setprecision(7);
    for (auto i = 0; i < num_cases; ++i)
    {
        cout << "Case #" << i + 1 << ": ";
        TestCase(in, out, log).solve();
        cout << endl;
    }
}

