//
// Created by citteny on 11/27/18.
//

#ifndef TRAGIL2_RESERVATIONEXT_H
#define TRAGIL2_RESERVATIONEXT_H

#include "interface.h"
class ReservationExt : public Customer {
  string ID;
  Customer *costomer;
  Flight flight;
  Classes resClass;
  int maxBaggage;

 public:
  ReservationExt(string &ID, Customer *costomer, Classes &resClass, int maxBaggage, const Flight &flight);
  virtual string getID();
  virtual Customer *getCustomer();
  virtual Flight *getFlight();
  virtual Classes getClass();
  virtual int getMaxBaggage();
  virtual ~ReservationExt() {}

};

#endif //TRAGIL2_RESERVATIONEXT_H
