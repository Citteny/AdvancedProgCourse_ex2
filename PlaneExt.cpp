//
// Created by citteny on 11/26/18.
//

#include "PlaneExt.h"
PlaneExt::PlaneExt(int modelNum, map<Jobs, int> &crewNeeded, int firstClassCap, int secClassCap) {
  this->modelNum = modelNum;
  this->neededCrew = crewNeeded;
  this->firstClassCapacity = firstClassCap;
  this->economyClassCapacity = secClassCap;
  this->ID = generateID()

}
string PlaneExt::getID() {
  return this->ID;
}
int PlaneExt::getModelNumber() {
  return this->modelNum;

}
map<Jobs, int> PlaneExt::getCrewNeeded() {
  return this->neededCrew;
}
int PlaneExt::getMaxFirstClass() {
  return this->firstClassCapacity;
}
int PlaneExt::getMaxEconomyClass() {
  return this->economyClassCapacity;
}
