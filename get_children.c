#include "types.h"
#include "stat.h"
#include "user.h"

char buf[16];

int
main(int argc, char *argv[])
{
  int res;
  if (fork()!=0){
    if(fork()!=0){  
        res = get_children(getpid());
        printf(1, "children: %d\n", res);
        wait();
    }
    wait();
  }
  exit();
}
