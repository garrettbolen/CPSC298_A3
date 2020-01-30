/*
Garrett Bolen
2324654
Assignment 3
Problem 1
*/

#include <iostream>
#include <string>

using namespace std;

class Pet{
  public:
    Pet();
    Pet(string name, unsigned int age, string type, double weight);

    string getName();
    unsigned int getAge();
    string getType();
    double getWeight();

    void setName(string n);
    void setAge(unsigned int a);
    void setType(string t);
    void setWeight(double w);

  private:
    string m_name;
    unsigned int m_age;
    string m_type;
    double m_weight;
};
