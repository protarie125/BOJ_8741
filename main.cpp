#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll k;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> k;
  for (auto i = 0; i < k; ++i) {
    cout << 1;
  }
  for (auto i = 1; i < k; ++i) {
    cout << 0;
  }

  return 0;
}