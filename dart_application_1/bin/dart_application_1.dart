void main() {
  print(almostIncreasingSequence([3, 6, 5, 8, 10, 20, 15]));
}

bool almostIncreasingSequence(List<int> sequence) {
  bool c = false;
  for (int i = 0; i < sequence.length; i++) {
    List a =[];
    a.addAll(sequence);
    a.removeAt(i);
    var s = 0;
    for (int j = 1; j < a.length; j++) {
      if (a[j - 1] < a[j]) {
        s++;
      }
    }
    if (s == a.length-1) {
      c = true;
      break;
    }
  }
  return c;
}
