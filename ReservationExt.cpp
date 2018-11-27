//
// Created by citteny on 11/27/18.
//

#include "ReservationExt.h"

string ReservationExt::getID() {
  return this->ID;
}
Customer *ReservationExt::getCustomer() {
  return this->costomer;
}
Classes ReservationExt::getClass() {
  return this->resClass;
}
Flight *ReservationExt::getFlight() {
  return this->flight;

}
int ReservationExt::getMaxBaggage() {
  return this->maxBaggage;
}
ReservationExt::ReservationExt(string &ID, Customer *costomer, Classes &resClass, int maxBaggage, const Flight &flight) {
  this->ID = ID;
  this->costomer = costomer;
  this->resClass = resClass;
  this->maxBaggage = maxBaggage;
  this->flight = flight;
}
