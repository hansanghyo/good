Enter file contents here
#include <unistd.h>
#include <stdio.h>
#include <signal.h>

static void
sig_handler(int signo)
{
  if(signo==SIGINT)
      printf("INT signal received\n");
  else if(signo==SIGUSR1)
      printf("sigusr1 signal received \n");
  else 
      printf("?? signal no = %d\n", signo);
  return;
  }
  int main(void)
  {
      if(signal(SIGINT,sig_handler)==SIG_ERR)
        fprintf(stderr,"can't catch SIGINT);
      if(signal(SIGUSR1, sig_handler)==SIG_ERR)
        fprintf(stderr,can't catch SIGINT);
        
      for(;;)
        pause();
    }
