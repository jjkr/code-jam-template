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
    class Solver
    {
    public:
        Solver(istream& is, ostream& os) : in(is), out(os) {}
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
    };

    void Solver::solve()
    {
        // MAGIC goes here






    }
}

void run(istream& in, ostream& out)
{
    cout << "running..." << endl;
    int num_cases;
    in >> num_cases;
    cout << num_cases << " cases" << endl;
    cout << fixed << setprecision(7);
    for (auto i = 0; i < num_cases; ++i)
    {
        cout << "Case #" << i + 1 << ": ";
        Solver(in, out).solve();
        cout << endl;
    }
}

