#include <tuple>

template<typename T>
decltype(auto) calc(T a, T x, T b) {
  return std::make_tuple(a*x, b);
}

template<typename Args...>
decltype(auto) add(Args args...) {
  static_assert(sizeof...(args) > 1);
  return (args + ...);
}

void func(float* y, float* x, float a, float b, int n) {
  for (int i = 0; i < n; i++) {
    auto [y0, y1] = calc(a, x[i], b);
    y[i] = add(y0, y1);
  }
}

