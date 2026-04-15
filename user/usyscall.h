#ifndef _USYSCALL_H_
#define _USYSCALL_H_

#define PGSIZE 4096
#define MAXVA (1L << 38)

#define TRAMPOLINE (MAXVA - PGSIZE)
#define TRAPFRAME  (TRAMPOLINE - PGSIZE)
#define USYSCALL   (TRAPFRAME - PGSIZE)

struct usyscall {
  int pid;
};

#endif