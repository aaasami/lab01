#include "Student.h"
#include <sstream>

Student::Student(int perm, 
		 std::string lastName, 
		 std::string firstAndMiddleNames)
     :perm(perm),lastName(lastName),firstAndMiddleNames(firstAndMiddleNames) {

}

int Student::getPerm() const { 
  return this->perm;
}

std::string Student::getLastName() const { 
  return this->lastName;
}

std::string Student::getFirstAndMiddleNames() const { 
  return this->firstAndMiddleNames;
}

std::string Student::getFullName() const { 
  return this->firstAndMiddleNames + " " + this->lastName;
}

std::string Student::toString() const { 
  std::ostringstream oss;
  
  oss << "[" 
      << this->getPerm() << ","
      << this->getLastName() << ","
      << this->getFirstAndMiddleNames() << "]";
  return oss.str();


} 

