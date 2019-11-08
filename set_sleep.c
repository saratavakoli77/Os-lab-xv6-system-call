#include "types.h"
#include "stat.h"
// #include "user.h"
#include "defs.h"
#include "date.h"


int
main(int argc, char *argv[])
{
  if(argc <= 1){
    cprintf("cnd: not enough argument\n");
    exit();
  }
//   int number = atoi(argv[1]);
  struct rtcdate time;
  cmostime(&time);

  cprintf("year = %d\n", time.year);


  exit();
}
