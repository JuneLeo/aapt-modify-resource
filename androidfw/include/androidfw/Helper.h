#ifndef __Helper_h
#define __Helper_h

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <map>

using namespace std;

class Helper
{
  size_t packageId;
 public:
  static Helper* getInstance()
  {
    static Helper instance;
    return &instance;
  }
  size_t getPackageId();
  void setPackageId(size_t _packageId);
 protected:
  struct Object_Creator
  {
    Object_Creator()
    {
      Helper::getInstance();
    }
  };
  static Object_Creator _object_creator;
  Helper() {
    packageId=0x7f;
  }
  ~Helper() {
  }
};
#endif
