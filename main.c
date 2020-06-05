#include "tri_alpha.c"
#include <stdlib.h>
#include <string.h>

int    main(int argc, char * argv[]) {
  char *result;

  result = tri_alpha("azcbobobegghakl");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("abcbcd");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("okdrbtqat");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("wmkjpjcvngmczm");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("owflwswxdafpk");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("ouirtbbqtcuvocpgl");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("kxyrtmgprxulhpwpsxl");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("mihvhqpvuuhyw");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("baisljlraylxnit");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("abcdefghijklmnopqrstuvwxyz");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("gqycanhnpdquago");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("bkcnnjvgorx");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("vlgsikhllqizthfkqthqloy");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("zyxwvutsrqponmlkjihgfedcba");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  result = tri_alpha("ocsrbpzwhamrvzy");
  write(1, result, strlen(result));
  write(1, "\n", 1);
  free(result);
  return (0);
}
