//
// Created by citteny on 11/26/18.
//

#include "EmployeeExt.h"
EmployeeExt::EmployeeExt(int seniority, int birthYear, Employee *employer, Jobs &jobTitle) {
  this->seniority = seniority;
  this->birthYear = birthYear;
  this->boss = employer;
  this->title = jobTitle;
  this->ID = generateID()

}
int EmployeeExt::getSeniority() {
  return this->seniority;

}
int EmployeeExt::getBirthYear() {
  return this->birthYear;
}
Employee *EmployeeExt::getEmployer() {
  return this->boss;
}
Jobs EmployeeExt::getTitle() {
  return this->title;
}
string EmployeeExt::getID() {
  return this->ID;
}
