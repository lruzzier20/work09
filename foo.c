#include <stdio.h>
struct emp {
  char* name;
  int age;
};
void structprnt(struct emp *f){
  printf("Name=%s\tAge=%d\n",f->name,f->age);
}
struct emp* makestruct(char* n, int a){
  struct emp* s=malloc(sizeof(struct emp));
  s->name=n;
  s->age=a;
  return s;
}
