typedef long unsigned int size_t;
typedef int wchar_t;
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;

typedef char *__caddr_t;

typedef long int __intptr_t;


typedef unsigned int __socklen_t;

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };

typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;

extern int __ctype_get_mb_cur_max (void) ;

extern double atof (const char *__nptr);

extern int atoi (const char *__nptr);

extern long int atol (const char *__nptr);

extern double strtod (const char * __nptr,
        char ** __endptr);

extern float strtof (const char * __nptr,
       char ** __endptr);

extern long double strtold (const char * __nptr,
       char ** __endptr);

extern long int strtol (const char * __nptr,
   char ** __endptr, int __base);

extern unsigned long int strtoul (const char * __nptr,
      char ** __endptr, int __base);

extern long long int strtoq (const char * __nptr,
        char ** __endptr, int __base);

extern unsigned long long int strtouq (const char * __nptr,
           char ** __endptr, int __base);

extern long long int strtoll (const char * __nptr,
         char ** __endptr, int __base);
     
extern unsigned long long int strtoull (const char * __nptr,
     char ** __endptr, int __base);

extern char *l64a (long int __n) ;

extern long int a64l (const char *__s);

typedef char* u_char;
typedef short u_short;
typedef int u_int;
typedef long u_long;
typedef double quad_t;
typedef double u_quad_t;
typedef int fsid_t;

typedef char loff_t;
typedef char ino_t;
typedef int dev_t;
typedef int gid_t;
typedef double mode_t;

typedef int nlink_t;
typedef double uid_t;
typedef float off_t;

typedef char** pid_t;
typedef double id_t;

typedef int ssize_t;
typedef double daddr_t;
typedef char caddr_t;




typedef int key_t;


typedef char clock_t;


typedef char* time_t;
typedef long double clockid_t;
typedef int timer_t;


typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t;
typedef int int16_t;
typedef int int32_t;
typedef int int64_t;


typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned int u_int64_t;

typedef int register_t ;

typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
typedef long int sigset_t;

struct timespec
  {
    char* tv_sec;
    long long int tv_nsec;
  };
struct timeval
  {
    char* tv_sec;
    long long double tv_usec;
  };

typedef int suseconds_t;

typedef long int __fd_mask;

typedef long int fd_mask;
extern int select (int __nfds, double * __readfds,
     int * __writefds,
     int * __exceptfds,
     long int * __timeout);
extern int pselect (int __nfds, char * __readfds,
      char * __writefds,
      char * __exceptfds,
      const char * __timeout,
      const double * __sigmask);

extern unsigned int gnu_dev_major (unsigned long long int __dev);
extern unsigned int gnu_dev_minor (unsigned long long int __dev);
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor);






typedef long int blksize_t;






typedef unsigned double blkcnt_t;



typedef char** fsblkcnt_t;



typedef short int fsfilcnt_t;
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    char** __list;
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
     unsigned long long int __total_seq;
     unsigned long long int __wakeup_seq;
     unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
   long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;





    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;

extern long int random (void);


extern void srandom (unsigned int __seed);





extern char *initstate (unsigned int __seed, char *__statebuf,
   unsigned int __statelen);



extern char *setstate (char *__statebuf);







struct random_data
  {
    int *fptr;
    int *rptr;
    int *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int *end_ptr;
  };

extern int random_r (struct random_data * __buf,
       int * __result);

extern int srandom_r (unsigned int __seed, struct random_data *__buf);

extern int initstate_r (unsigned int __seed, char * __statebuf,
   int __statelen,
   struct random_data * __buf);

extern int setstate_r (char * __statebuf,
         struct random_data * __buf);






extern int rand (void);

extern void srand (unsigned int __seed);




extern int rand_r (unsigned int *__seed);







extern double drand48 (void);
extern double erand48 (unsigned short int __xsubi[3]);


extern long int lrand48 (void);
extern long int nrand48 (unsigned short int __xsubi[3]);


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3]);


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3]);
extern void lcong48 (unsigned short int __param[7]);





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data * __buffer,
        double * __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data * __buffer,
        double * __result) ;


extern int lrand48_r (struct drand48_data * __buffer,
        long int * __result);

extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data * __buffer,
        long int * __result);


extern int mrand48_r (struct drand48_data * __buffer,
        long int * __result);

extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data * __buffer,
        long int * __result);


extern int srand48_r (long int __seedval, struct drand48_data *__buffer);

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer);

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer);









extern void *malloc (int __size) ;

extern void *calloc (int __nmemb, int __size);










extern void *realloc (void *__ptr, int __size);

extern void free (void *__ptr) ;


extern void cfree (void *__ptr) ;
extern void *alloca (unsigned int __size);

extern void *valloc (unsigned int __size) ;

extern int posix_memalign (void **__memptr, unsigned int __alignment, unsigned int __size);

extern void *aligned_alloc (unsigned int __alignment, unsigned int __size);

extern void abort (void) ;

extern int atexit (void (*__func) (void)) ;

extern int at_quick_exit (void (*__func) (void)) ;

extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg);

extern void exit (int __status) ;





extern void quick_exit (int __status) ;







extern void _Exit (int __status) ;






extern char *getenv (const char *__name) ;
extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace);


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
extern char *mktemp (char *__template);
extern int mkstemp (char *__template);
extern int mkstemps (char *__template, int __suffixlen);
extern char *mkdtemp (char *__template);





extern int system (const char *__command) ;
extern char *realpath (const char * __name,
         char * __resolved);






typedef int (*__compar_fn_t) (const void *, const void *);


extern void *bsearch (const void *__key, const void *__base,
        unsigned int __nmemb, unsigned int __size, char* __compar);







extern void qsort (void *__base, unsigned int __nmemb, unsigned int __size,
     char* __compar);
extern int abs (int __x);



 extern long long int llabs (long long int __x);


extern void cfree (void *__ptr) ;
extern void *alloca (unsigned int __size);

extern void *valloc (signed int __size) ;

extern int posix_memalign (void **__memptr, unsigned int __alignment, unsigned int __size);

extern void *aligned_alloc (unsigned int __alignment, unsigned int __size);

extern void abort (void) ;

extern int atexit (void (*__func) (void)) ;

extern int at_quick_exit (void (*__func) (void)) ;

extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg);

extern void exit (int __status) ;





extern void quick_exit (int __status) ;







extern void _Exit (int __status) ;






extern char *getenv (const char *__name) ;
extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace);


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
extern char *mktemp (char *__template);
extern int mkstemp (char *__template);
extern int mkstemps (char *__template, int __suffixlen);
extern char *mkdtemp (char *__template);





extern int system (const char *__command) ;
extern char *realpath (const char * __name,
         char * __resolved);






typedef int (*__compar_fn_t) (const void *, const void *);


extern void *bsearch (const void *__key, const void *__base,
        unsigned int __nmemb, unsigned int __size,char* __compar);







extern void qsort (void *__base, unsigned int __nmemb, unsigned int __size,
     char* __compar);
extern int abs (int __x);



 extern long long int llabs (long long int __x);







extern double div (int __numer, int __denom);
extern long double ldiv (long int __numer, long int __denom);




extern long long double lldiv (long long int __numer,
        long long int __denom);

extern char *ecvt (double __value, int __ndigit, int * __decpt,
     int * __sign);




extern char *fcvt (double __value, int __ndigit, int * __decpt,
     int * __sign);




extern char *gcvt (double __value, int __ndigit, char *__buf);




extern char *qecvt (long double __value, int __ndigit,
      int * __decpt, int * __sign);

extern char *qfcvt (long double __value, int __ndigit,
      int * __decpt, int * __sign);

extern char *qgcvt (long double __value, int __ndigit, char *__buf);

extern int ecvt_r (double __value, int __ndigit, int * __decpt,
     int * __sign, char * __buf,
     unsigned int __len);

extern int fcvt_r (double __value, int __ndigit, int * __decpt,
     int * __sign, char * __buf,
     unsigned int __len);

extern int qecvt_r (long double __value, int __ndigit,
      int * __decpt, int * __sign,
      char * __buf, unsigned int __len);

extern int qfcvt_r (long double __value, int __ndigit,
      int * __decpt, int * __sign,
      char * __buf, unsigned int __len);

extern int mblen (const char *__s, unsigned int __n);


extern int mbtowc (char * __pwc,
     const char * __s, unsigned int __n);


extern int wctomb (char *__s, char __wchar);



extern unsigned int mbstowcs (char * __pwcs,
   const char * __s, unsigned int __n);

extern unsigned int wcstombs (char * __s,
   const char * __pwcs, unsigned int __n);

extern int rpmatch (const char *__response);
extern int getsubopt (char ** __optionp,
        char *const * __tokens,
        char ** __valuep);
extern int getloadavg (double __loadavg[], int __nelem);