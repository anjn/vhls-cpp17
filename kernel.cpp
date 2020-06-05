#include <tuple>

decltype(auto) calc(float a, float x, float b) {
  return std::make_tuple(a*x, b);
}

void func(float* y, float* x, float a, float b, int n) {
  for (int i = 0; i < n; i++) {
    auto [y0, y1] = calc(a, x[i], b);
    y[i] = y0 + y1;
  }
}

