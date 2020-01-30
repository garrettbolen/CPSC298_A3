/*
Garrett Bolen
2324654
Assignment 3
Problem 1
*/

#include "pet.h"

Pet::Pet(){
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0.0;
}

Pet::Pet(string n, unsigned int a, string t, double w){
  m_name = n;
  m_age = a;
  m_type = t;
  m_weight = w;
}

string Pet::getName(){
  return m_name;
}

unsigned int Pet::getAge(){
  return m_age;
}

string Pet::getType(){
  return m_type;
}

double Pet::getWeight(){
  return m_weight;
}

void Pet::setName(string n){
  m_name = n;
}
void Pet::setAge(unsigned int a){
  m_age = a;
}
void Pet::setType(string t){
  m_type = t;
}
void Pet::setWeight(double w){
  m_weight = w;
}
