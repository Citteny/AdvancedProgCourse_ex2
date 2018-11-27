//
// Created by citteny on 11/27/18.
//

#include <iostream>
#include "interface.h"

Date::Date(string date) {

}

string checkDate(string date) {
  string temp = "YYYY-MM-DD";
  string errorMessage = "\nInvalid Date!\n Use Frormat: YYYY-MM-DD \n";

  if (date.length() != temp.length()) {
    cout << errorMessage;
    return nullptr;
  }

  int year = stoi(date.substr(0, 3));
  int month = stoi(date.substr(5, 6));
  int day = stoi(date.substr(8, 9));




  
}
bool Date::operator<(const Date &d) const {
  return false;
}
bool Date::operator>(const Date &d) const {
  return false;
}
bool Date::operator==(const Date &d) const {
  return false;
}
