//
// Created by citteny on 11/26/18.
//

#ifndef TRAGIL2_PLANEEXT_H
#define TRAGIL2_PLANEEXT_H

#include "interface.h"

class PlaneExt : public Plane {
  string ID;
  int modelNum;
  map<Jobs ,int> neededCrew;
  int firstClassCapacity;
  int economyClassCapacity;

 public:
  PlaneExt(int modelNum,map<Jobs ,int>  &crewNeeded,int firstClassCap,int secClassCap);

  virtual string getID();

  virtual int getModelNumber();
  virtual map<Jobs, int> getCrewNeeded();
  virtual int getMaxFirstClass();
  virtual int getMaxEconomyClass();
  virtual ~PlaneExt() {}

};

#endif //TRAGIL2_PLANEEXT_H
