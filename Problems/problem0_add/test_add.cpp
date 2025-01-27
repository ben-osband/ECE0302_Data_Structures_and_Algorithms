#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "add.hpp"

#include <cmath>

// force template expansion
template class Add<int>;

TEST_CASE("Test add", "[Add]")
{

  Add<int> a;
  REQUIRE(a.call(1, 2) == 3);

  Add<long> b;
  long n = 100000000;
  long m = 100000000;
  REQUIRE(b.call(n, m) == 200000000);

  Add<double> c;
  double n = 3 - sqrt(2);
  double m = 4 + sqrt(2);
  REQUIRE(c.call(n, m) - 7 < 0.001);

  Add<char> d;
  REQUIRE(d.call('2', '3') == 101);

  Add<std::string> e;
  REQUIRE(e.call("2", "3") == 101);

  Add<bool> f;
  REQUIRE(f.call(true, true) == 2);

  // The part of Add that remains untested is its constructor
  // No, there is no operator overloading because we're calling the same function simply for different data types
}
