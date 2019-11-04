#include "types.h"
#include "stat.h"
#include "user.h"

char buf[16];

void
cnd(int num)
{
  int res = count_num_of_digits(num);
  printf(1, "result is: %d\n", res);
}

int
main(int argc, char *argv[])
{
  if(argc <= 1){
    printf(1, "cnd: not enough argument\n");
    exit();
  }

  cnd(atoi(argv[1]));
  exit();
}
