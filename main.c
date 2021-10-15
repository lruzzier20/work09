#include <stdio.h>
#include <stdlib.h>

struct emp {
  char* name;
  int age;
};

int main(){
  void structprnt(struct emp *f);
  struct emp employee;
  employee.name="greg";
  employee.age=44;
  structprnt(&employee);
  return 0;
}
