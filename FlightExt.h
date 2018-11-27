//
// Created by citteny on 11/26/18.
//

#ifndef TRAGIL2_FLIGHT_H
#define TRAGIL2_FLIGHT_H

#include "interface.h"
class FlightExt : public Flight {
  string ID;
  int modelNum;
  list<Reservation *> reservations;
  list<Employee *> crew;
  Date dateFlight;
  string sourceLocation;
  string destLoaction;

 public:

  FlightExt(string flightID,
            int planeModNum,
            list<Reservation *> res,
            list<Employee *> crew,
            string flightSource,
            string flightDest,
            Date date);

  virtual string getID();
  virtual int getModelNumber();
  virtual list<Reservation *> getReservations();
  virtual list<Employee *> getAssignedCrew();
  virtual Date getDate();
  virtual string getSource();
  virtual string getDestination();
  virtual ~FlightExt() {}

};

#endif //TRAGIL2_FLIGHT_H
