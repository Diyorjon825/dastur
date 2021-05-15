void main() {
  Diyor diyor = new Diyor(8, 25);
  diyor.printMe();
}

class Diyor {
  var a, b;
  Diyor(var a, var b) {
    this.a = a;
    this.b = b;
  }
  void printMe() {
    print('$a+$b=${a + b}');
  }
}
