#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct emp {
  char* name;
  int age;
};

int main(){
  void structprnt(struct emp *f);
  struct emp* makestruct(char* n, int a);
  struct emp employee;
  employee.name="greg";
  employee.age=44;
  structprnt(&employee);
  struct emp* normalperson=makestruct("jim",2147483647);
  structprnt(normalperson);
  free(normalperson);
  srand(time(NULL));
  struct emp* imp=makestruct("randy",rand());
  structprnt(imp);
  free(imp);
  return 0;
}
