#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#include "header.h"

int main() {
  char ex[100] ="ls -a -l";
  char ** args = parse_args(ex);
  execvp(args[0], args);
  return 0;
}
