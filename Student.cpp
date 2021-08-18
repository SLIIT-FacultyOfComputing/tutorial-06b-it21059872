#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sId, char sName[]) {
  studentId = sId;
  strcpy(name,sName);
  
}

// Display StudentId and Name
void Student::display() {
  
  cout << "Student Id : " << studentId << endl;
  cout << "Student Name: " << name << endl;
  
}
