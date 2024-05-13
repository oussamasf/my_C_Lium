#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char *string;
  int i, total_length = 0;

  for (i = 1; i < argc; i++)
  {
    total_length += strlen(argv[i]);
    if (i < argc - 1)
    {
      total_length++;
    }
  }

  string = malloc(total_length + 1);
  if (string == NULL)
  {
    printf("Failed to allocate memory\n");
    return 1;
  }

  string[0] = '\0';

  for (i = 1; i < argc; i++)
  {
    strcat(string, argv[i]);
    if (i < argc - 1)
    {
      strcat(string, " ");
    }
  }

  printf("You entered: %s\n", string);

  // free(string);

  return 0;
}
