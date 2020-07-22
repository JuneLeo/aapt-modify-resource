#include <androidfw/Helper.h>

#include <iostream>
#include <string>
using namespace std;
// 改动点，单例设置packageid
Helper::Object_Creator Helper::_object_creator;


size_t Helper::getPackageId(){
  return packageId;
}
void Helper::setPackageId(size_t  _packageId){
  packageId=_packageId;
}
