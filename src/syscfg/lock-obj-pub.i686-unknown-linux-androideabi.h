## lock-obj-pub.i686-unknown-linux-androideabi.h
## File created by gen-lock-obj.sh - DO NOT EDIT
## To be included by mkheader into gpg-error.h

typedef struct
{
  long _vers;
  union {
    volatile char _priv[4];
    long _x_align;
    long *_xp_align;
  } u;
} gpgrt_lock_t;

#define GPGRT_LOCK_INITIALIZER {1,{{0,0,0,0}}}
##
## Local Variables:
## mode: c
## buffer-read-only: t
## End:
##
