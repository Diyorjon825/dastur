void main() {
  var time = DateTime.now();
  for (int i = 0; i < 46; i++) {
    print('$i -> ${fib(i)}');
  }
  print(DateTime.now().difference(time).inMilliseconds);
}

fib(int i) {
  if (i < 2) return i;
  return fib(i - 1) + fib(i - 2);
}
