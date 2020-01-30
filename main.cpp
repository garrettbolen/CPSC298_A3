/*
Garrett Bolen
2324654
Assignment 3
Problem 1
*/

#include "pet.h"

int main(int argc, char const *argv[]) {
  Pet *p = new Pet();
  Pet *p2 = new Pet("Bailey", 11, "Dog", 15.2);

  p -> setName("Kona");
  p -> setAge(1);
  p -> setType("Dog");
  p -> setWeight(3.2);

  cout << "My name is: " << p -> getName() << endl;
  cout << "My age is: " << p -> getAge() << endl;
  cout << "My type is: " << p -> getType() << endl;
  cout << "My weight is: " << p -> getWeight() << endl;


  cout << "My name is: " << p2 -> getName() << endl;
  cout << "My age is: " << p2 -> getAge() << endl;
  cout << "My type is: " << p2 -> getType() << endl;
  cout << "My weight is: " << p2 -> getWeight() << endl;

  delete p;
  delete p2;

  return 0;
}
