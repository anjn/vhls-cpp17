template<int N, typename T>
auto pow(T x) {
  if constexpr (N == 1) {
    return x;
  } else {
    return x * pow<N-1>(x);
  }
}

void func(float* y, float* x, float a, float b, int n) {
  for (int i = 0; i < n; i++) {
    y[i] = a * pow<3>(x[i]) + b;
  }
}
