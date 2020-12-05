#include <stdio.h>
#define MAX_STR_LEN 256
int main(void)
{
  char perm[] = "qjczieaungsdfxmphybklortvw";
  char msg[MAX_STR_LEN+1];
  fgets(msg, MAX_STR_LEN, stdin);

  int i = 0;
  while (msg[i] != '\0') {
    if (msg[i] >= 'a' && msg[i] <= 'z') {
      msg[i] = perm[msg[i] - 'a'];
    } else if (msg[i] >= 'A' && msg[i] <= 'Z') {
      char lower_case = msg[i] + ('a' - 'A');
      char lower_case_converted = perm[lower_case - 'a'];
      msg[i] = lower_case_converted - ('a' - 'A');
    }
    i++;
  }
  puts(msg);
  return 0;
}