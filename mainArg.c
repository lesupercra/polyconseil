#include "tri_alpha.c"
#include <stdlib.h>
#include <string.h>

int    main(int argc, char * argv[]) {
  char *result;

  result = tri_alpha(argv[1]);
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
}
