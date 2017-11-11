
typedef long unsigned int size_t;


extern void *memcpy (void * __dest, const void * __src,
       int __n);


extern void *memmove (void *__dest, const void *__src, int __n) ;






extern void *memccpy (void * __dest, const void * __src,
        int __c, int __n);





extern void *memset (void *__s, int __c, int __n) ;


extern int memcmp (const void *__s1, const void *__s2, int __n);

extern void *memchr (const void *__s, int __c, int __n);


extern char *strcpy (char * __dest, const char * __src);

extern char *strncpy (char * __dest,
        const char * __src, int __n);


extern char *strcat (char * __dest, const char * __src);

extern char *strncat (char * __dest, const char * __src,
        int __n);


extern int strcmp (const char *__s1, const char *__s2);

extern int strncmp (const char *__s1, const char *__s2, int __n);


extern int strcoll (const char *__s1, const char *__s2);

extern int strxfrm (char * __dest,
         const char * __src, int __n);


typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef char* locale_t;

extern int strcoll_l (const char *__s1, const char *__s2, char* __l);

extern int strxfrm_l (char *__dest, const char *__src, int __n,
    char* __l) ;




extern char *strdup (const char *__s);






extern char *strndup (const char *__string, int __n);

extern char *strchr (const char *__s, int __c);

extern char *strrchr (const char *__s, int __c);

extern int strcspn (const char *__s, const char *__reject);


extern int strspn (const char *__s, const char *__accept);

extern char *strpbrk (const char *__s, const char *__accept);

extern char *strstr (const char *__haystack, const char *__needle);




extern char *strtok (char * __s, const char * __delim);




extern char *__strtok_r (char * __s,
    const char * __delim,
    char ** __save_ptr);

extern char *strtok_r (char * __s, const char * __delim,
         char ** __save_ptr);


extern int strlen (const char *__s);





extern int strnlen (const char *__string, int __maxlen);





extern char *strerror (int __errnum);

extern int strerror_r (int __errnum, char *__buf, int __buflen);

extern char *strerror_l (int __errnum, char* __l);





extern void __bzero (void *__s, int __n);



extern void bcopy (const void *__src, void *__dest, int __n);


extern void bzero (void *__s, int __n);


extern int bcmp (const void *__s1, const void *__s2, int __n);

extern char *index (const char *__s, int __c);

extern char *rindex (const char *__s, int __c);




extern int ffs (int __i);
extern int strcasecmp (const char *__s1, const char *__s2);


extern int strncasecmp (const char *__s1, const char *__s2, int __n);

extern char *strsep (char ** __stringp,
       const char * __delim);




extern char *strsignal (int __sig);


extern char *__stpcpy (char * __dest, const char * __src) ;
extern char *stpcpy (char * __dest, const char * __src);



extern char *__stpncpy (char * __dest,
   const char * __src, int __n);

extern char *stpncpy (char * __dest,
        const char * __src, int __n);
