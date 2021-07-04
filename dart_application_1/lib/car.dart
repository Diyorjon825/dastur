enum Colors { Red, Yellow, Black }
void main() {
  var engine1 = Engine1();
  var engine2 = Engine2();
  var car1 = Car("BMW", 2009, Colors.Black, engine1);
  var car2 = Car("Vaz2106", 1986, Colors.Red, engine2);
  print(engine2);
  print(engine1);
  print(car1);
  print(car2);
}

class Car {
  int year;
  String name;
  Colors color;
  var engine = InterfaceEngine();
  Car(this.name, this.year, this.color, this.engine);
  @override
  String toString() {
    return "$name $year $color $engine";
  }
}

class InterfaceEngine {
  void start() {}
  void stop() {}
}

class Engine1 implements InterfaceEngine {
  void start() {
    print("start engine");
  }

  void stop() {
    print("stop engine");
  }

  @override
  String toString() {
    return "This is class of Engine0 implemented from InterfaceEngine";
  }
}

class Engine2 implements InterfaceEngine {
  void start() {
    print("start engine");
  }

  void stop() {
    print("stop engine");
  }

  @override
  String toString() {
    return "This is class of Engine1 implemented from InterfaceEngine";
  }
}
