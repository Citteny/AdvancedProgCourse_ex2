//
// Created by citteny on 11/26/18.
//

#include "FlightExt.h"

string FlightExt::getID() {
  return this->ID;
}
int FlightExt::getModelNumber() {
  return this->modelNum;
}
list<Reservation *> FlightExt::getReservations() {
  return this->reservations;
}
Date FlightExt::getDate() {
  return this->dateFlight;
}
list<Employee *> FlightExt::getAssignedCrew() {
  return this->crew;
}
string FlightExt::getSource() {
  return this->sourceLocation;
}
string FlightExt::getDestination() {
  return this->destLoaction;
}
FlightExt::FlightExt(string flightID,
                     int planeModNum,
                     list<Reservation *> res,
                     list<Employee *> crew,
                     string flightSource,
                     string flightDest,
                     Date date) : dateFlight(date) {
  this->ID = flightID;
  this->modelNum = planeModNum;
  this->reservations = res;
  this->crew = crew;
  this->sourceLocation = flightSource;
  this->destLoaction = flightDest;

}
