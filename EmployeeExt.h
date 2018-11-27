//
// Created by citteny on 11/26/18.
//

#ifndef TRAGIL2_EMPLOYEEEXT_H
#define TRAGIL2_EMPLOYEEEXT_H

#include "interface.h"

class EmployeeExt : public Employee {
  string ID;
  int seniority;
  int birthYear;
  Employee *boss;
  Jobs title;

 public:
  EmployeeExt(int seniority,int birthYear,Employee *employer,Jobs &jobTitle);

  virtual string getID();

  virtual int getSeniority();
  virtual int getBirthYear();
  virtual Employee *getEmployer();
  virtual Jobs getTitle();
  virtual ~EmployeeExt() {}
};

#endif //TRAGIL2_EMPLOYEEEXT_H
