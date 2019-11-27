#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

char ** parse_args(char * line) {
  char ** args[6];
  char * curr = line;
  char * s;
  int i = 0;
  while (curr != NULL){
    s = strsep(&curr, " ");
    args[i] = s;
    i++;
  }
  args[i] = NULL;
  return args;
}
