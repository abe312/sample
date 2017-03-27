#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RAII_VARIABLE(vartype, varname, initval, dtor) void _dtor_ ##varname(vartype *v) {dtor(*v);} vartype varname __attribute__ (( cleanup(_dtor_) ##varname))) = (initval)

void main(){
  RAII_VARIABLE(char *, name, (char *)malloc(32), free);
  strcpy(name,"RAII rxample");
  printf("%s\n", name);
  
}
