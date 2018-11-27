//
// Created by citteny on 11/27/18.
//

#ifndef TRAGIL2_CUSTOMEREXT_H
#define TRAGIL2_CUSTOMEREXT_H

#include "interface.h"

class CustomerExt : public Customer {

  string ID;
  string fullName;
  int priority;
  list<Reservation *> res;

 public:
  CustomerExt(string &ID,string &fullName,int priority,list<Reservation*> &res);
  virtual string getID();
  virtual string getFullName();
  virtual int getPriority();
  virtual list<Reservation *> getReservations();
  virtual ~CustomerExt()() {

  };

#endif //TRAGIL2_CUSTOMEREXT_H
