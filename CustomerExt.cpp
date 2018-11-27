//
// Created by citteny on 11/27/18.
//

#include "CustomerExt.h"

CustomerExt::CustomerExt(string &ID, string &fullName, int priority, list<Reservation *> &res) {

  this->ID = ID;
  this->fullName = fullName;
  this->priority = priority;
  this->res = res;
}
string CustomerExt::getID() {
  return this->ID;
}
string CustomerExt::getFullName() {
  return this->fullName;
}
int CustomerExt::getPriority() {
  return this->priority;
}
list<Reservation *> CustomerExt::getReservations() {
  return this->res;
}
