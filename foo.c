#include <stdio.h>
struct emp {
  char* name;
  int age;
};
void structprnt(struct emp *f){
  printf("Name=%s\tAge=%d\n",f->name,f->age);
}
