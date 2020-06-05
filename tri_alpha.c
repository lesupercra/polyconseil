#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char      *tri_alpha(char * string) {
  size_t  i;
  size_t  length = 0;
  char    *result;
  int     maxLength = 0;
  int     actualLength = 1;
  int     resultStartingPos = 0;

  length = strlen(string);
  result = malloc(sizeof(string) + sizeof(char));
  for (i = 0; i < length; i++)
    {
      if (string[i] <= string[i + 1] && i != length - 1)
	{
	  actualLength++;
	}
      else
	{
	  if (actualLength > maxLength)
	    {
	      maxLength = actualLength;
	      resultStartingPos = i - actualLength + 1;
	    }
	  actualLength = 1;
	}
    }
  result = strncpy(result, &string[resultStartingPos], maxLength);
  result[maxLength] = '\0';
  return (result);
}
