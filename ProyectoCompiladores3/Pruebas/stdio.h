typedef long unsigned int size_t;

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



typedef int __loff_t;
typedef char *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
struct _IO_FILE;



typedef struct FILE;

typedef struct __FILE;
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;

typedef struct
{
  int __pos;
  char* __state;
} _G_fpos_t;
typedef struct
{
  int __pos;
  char* __state;
} _G_fpos64_t;
typedef char* __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  char* _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  char *_lock;
  char* _offset;



  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  int __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};



typedef struct
{
  int __pos;
  char* __state;
} _G_fpos_t;
typedef struct
{
  int __pos;
  char* __state;
} _G_fpos64_t;
typedef int __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  char* _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  char *_lock;
  char * _offset;



  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  int __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef int __io_read_fn (void *__cookie, char *__buf, int __nbytes);


typedef int __io_write_fn (void *__cookie, const char *__buf,
     int __n);







typedef int __io_seek_fn (void *__cookie, char *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (char*);
extern int __uflow (char *);
extern int __overflow (char *, int);
extern int _IO_getc (char *__fp);
extern int _IO_putc (int __c, char *__fp);
extern int _IO_feof (char *__fp);
extern int _IO_ferror (char *__fp);

extern int _IO_peekc_locked (char *__fp);





extern void _IO_flockfile (char *);
extern void _IO_funlockfile (char *);
extern int _IO_ftrylockfile (char *);
extern int _IO_vfscanf (char * , const char * , int *);
extern int _IO_vfprintf (char *, const char *);
extern int _IO_padn (char *, int *);
extern int _IO_sgetn (char *, void *);

extern int _IO_seekoff (char *, int);
extern int _IO_seekpos (char *, int);

extern void _IO_free_backup_area (char *);





typedef char* va_list;
typedef int off_t;
typedef int ssize_t;







typedef char* fpos_t;


extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename);

extern int rename (const char *__old, const char *__new);




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new);





typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef int __io_read_fn (void *__cookie, char *__buf, int __nbytes);







typedef int __io_write_fn (void *__cookie, const char *__buf, int __n);


typedef int __io_seek_fn (void *__cookie, char *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (char *);
extern int __uflow (char *);
extern int __overflow (char *, int);
extern int _IO_getc (char *__fp);
extern int _IO_putc (int __c, char *__fp);
extern int _IO_feof (char *__fp);
extern int _IO_ferror (char *__fp);

extern int _IO_peekc_locked (char *__fp);





extern void _IO_flockfile (char *);
extern void _IO_funlockfile (char *);
extern int _IO_ftrylockfile (char *);
extern int _IO_vfscanf (char * , const char * , int *);
extern int _IO_vfprintf (char *, const char *);
extern int _IO_padn (char *, int);
extern int _IO_sgetn (char *, void *);

extern char _IO_seekoff (char *, char, int, int);
extern char _IO_seekpos (char *, char, int);

extern void _IO_free_backup_area (char *);





typedef int va_list;
typedef char* off_t;
typedef int ssize_t;







typedef char* fpos_t;


extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename);

extern int rename (const char *__old, const char *__new);




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new);








extern char *tmpfile (void) ;
extern char *tmpnam (char *__s);





extern char *tmpnam_r (char *__s);
extern char *tempnam (const char *__dir, const char *__pfx);


extern int fclose (char *__stream);

extern int fflush (char *__stream);

extern int fflush_unlocked (char *__stream);


extern char *fopen (const char * __filename,
      const char * __modes) ;




extern char *freopen (const char * __filename,
        const char * __modes,
        char * __stream) ;
extern char *fdopen (int __fd, const char *__modes);
extern char *fmemopen (void *__s, int __len, const char *__modes);




extern char *open_memstream (char **__bufloc, int *__sizeloc);






extern void setbuf (char * __stream, char * __buf);



extern int setvbuf (char * __stream, char * __buf,
      int __modes, int __n);





extern void setbuffer (char * __stream, char * __buf,
         int __size);


extern void setlinebuf (char *__stream) ;



extern int fprintf (char * __stream,
      const char * __format, ...);




extern int printf (const char * __format, ...);

extern int sprintf (char * __s,
      const char * __format, ...);





extern int vfprintf (char * __s, const char * __format, char* __arg);




extern int vprintf (const char * __format, char* __arg);

extern int vsprintf (char * __s, const char * __format, char* __arg);





extern int snprintf (char * __s, int __maxlen,
       const char * __format, ...);

extern int vsnprintf (char * __s, int __maxlen,
        const char * __format, char* __arg);

extern int vdprintf (int __fd, const char * __fmt,char* __arg);
extern int dprintf (int __fd, const char * __fmt, ...);








extern int fscanf (char * __stream,
     const char * __format, ...) ;




extern int scanf (const char * __format, ...) ;

extern int sscanf (const char * __s,
     const char * __format, ...) ;

extern int fscanf (char * __stream, const char * __format, ...) ;
extern int scanf (const char * __format, ...) ;
extern int sscanf (const char * __s, const char * __format, ...) ;



extern int vfscanf (char * __s, const char * __format) ;





extern int vscanf (const char * __format,  char* __arg);


extern int vsscanf (const char * __s,
      const char * __format, char* __arg);

extern int vfscanf (char * __s, const char * __format);
extern int vscanf (const char * __format, char* __arg) ;
extern int vsscanf (const char * __s, const char * __format, char* __arg);

extern int fgetc (char *__stream);
extern int getc (char *__stream);

extern int getchar (void);

extern int getc_unlocked (char *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (char *__stream);



extern int fputc (int __c, char *__stream);
extern int putc (int __c, char *__stream);

extern int putchar (int __c);
extern int fputc_unlocked (int __c, char *__stream);







extern int putc_unlocked (int __c, char *__stream);
extern int putchar_unlocked (int __c);






extern int getw (char *__stream);


extern int putw (int __w, char *__stream);

extern int fgetc (char *__stream);
extern int getc (char *__stream);

extern int getchar (void);

extern int getc_unlocked (char *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (char *__stream);



extern int fputc (int __c, char *__stream);
extern int putc (int __c, char *__stream);

extern int putchar (int __c);
extern int fputc_unlocked (int __c, char *__stream);







extern int putc_unlocked (int __c, char *__stream);
extern int putchar_unlocked (int __c);






extern int getw (char *__stream);


extern int putw (int __w, char *__stream);








extern char *fgets (char * __s, int __n, char * __stream);

extern int fputs (const char * __s, char * __stream);

extern int puts (const char *__s);

extern int ungetc (int __c, char *__stream);


extern int fread (void * __ptr, int __size,
       int __n, char * __stream) ;




extern int fwrite (const void * __ptr, int __size,
        int __n, char * __s);

extern int fread_unlocked (void * __ptr, int __size,
         int __n, char * __stream) ;
extern int fwrite_unlocked (const void * __ptr, int __size,
          int __n, char * __stream);








extern int fseek (char *__stream, long int __off, int __whence);




extern long int ftell (char *__stream) ;




extern void rewind (char *__stream);

extern int fseeko (char *__stream, char* __off, int __whence);




extern char* ftello (char *__stream) ;





extern int fgetpos (char * __stream, char * __pos);




extern int fsetpos (char *__stream, const char *__pos);


extern void clearerr (char *__stream) ;

extern int feof (char *__stream) ;

extern int ferror (char *__stream) ;




extern void clearerr_unlocked (char *__stream) ;           
extern int feof_unlocked (char *__stream) ;
extern int ferror_unlocked (char *__stream) ;

extern void perror (const char *__s);

extern int sys_nerr;
extern const char *const sys_errlist[];

extern int fileno (char *__stream) ;




extern int fileno_unlocked (char *__stream) ;
extern char *popen (const char *__command, const char *__modes) ;





extern int pclose (char *__stream);





extern char *ctermid (char *__s) ;
extern void flockfile (char *__stream) ;



extern int ftrylockfile (char *__stream) ;


extern void funlockfile (char *__stream) ;
