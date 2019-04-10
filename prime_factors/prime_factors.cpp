#include <iostream>
#include <vector>

using namespace std;

std::vector < int >
  prime_factors(int n) {
    vector < int > output;
    if (n == 0) {
      exit(0);
    }
    if (n == 1) {
      return output;
    }

    for (int i = 2; i <= n; i++) {
      while (!(n % i)) {
        n = n / i;
        output.push_back(i);
        if (n == 1)
          return output;

      }
    }

  }

int
main() {
  vector < int > a = prime_factors(901255);
  for (auto x: a) {
    cout << x << " ";
  }

  return 0;
}
