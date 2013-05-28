#ifndef sparc_HEADER_H
#define sparc_HEADER_H 1
#define sparc_IN_HEADER 1

#line 6 "decoders/binutils/sparc/sparc_scanner.hh"

#line 8 "decoders/binutils/sparc/sparc_scanner.hh"

#define  YY_INT_ALIGNED long int

/* A lexical scanner generated by flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 35
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* end standard C headers. */

/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/* C99 says to define __STDC_LIMIT_MACROS before including stdint.h,
 * if you want the limit (max/min) macros for int types. 
 */
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif /* ! C99 */

#endif /* ! FLEXINT_H */

#ifdef __cplusplus

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

/* C99 requires __STDC__ to be defined as 1. */
#if defined (__STDC__)

#define YY_USE_CONST

#endif	/* defined (__STDC__) */
#endif	/* ! __cplusplus */

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif

/* Size of default input buffer. */
#ifndef YY_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k.
 * Moreover, YY_BUF_SIZE is 2*YY_READ_BUF_SIZE in the general case.
 * Ditto for the __ia64__ case accordingly.
 */
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif /* __ia64__ */
#endif

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

extern int sparc_leng;

extern FILE *sparc_in, *sparc_out;

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */
    
	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

void sparc_restart (FILE *input_file  );
void sparc__switch_to_buffer (YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE sparc__create_buffer (FILE *file,int size  );
void sparc__delete_buffer (YY_BUFFER_STATE b  );
void sparc__flush_buffer (YY_BUFFER_STATE b  );
void sparc_push_buffer_state (YY_BUFFER_STATE new_buffer  );
void sparc_pop_buffer_state (void );

YY_BUFFER_STATE sparc__scan_buffer (char *base,yy_size_t size  );
YY_BUFFER_STATE sparc__scan_string (yyconst char *yy_str  );
YY_BUFFER_STATE sparc__scan_bytes (yyconst char *bytes,int len  );

void *sparc_alloc (yy_size_t  );
void *sparc_realloc (void *,yy_size_t  );
void sparc_free (void *  );

/* Begin user sect3 */

#define sparc_wrap(n) 1
#define YY_SKIP_YYWRAP

extern int sparc_lineno;

extern char *sparc_text;
#define yytext_ptr sparc_text
static yyconst flex_int32_t yy_nxt[][128] =
    {
    {
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,

        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
        0,    0,    0,    0,    0,    0,    0,    0
    },

    {
        3,    4,    4,    4,    4,    4,    4,    4,    4,    5,
        6,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    5,    4,    4,    4,    7,    8,    4,    4,
        9,   10,   11,   12,   13,   14,    4,    4,   15,   16,
       16,   16,   16,   16,   16,   16,   16,   16,   17,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,

        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,   16,   16,   16,
       16,   16,   16,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4
    },

    {
        3,    4,    4,    4,    4,    4,    4,    4,    4,    5,
        6,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    5,    4,    4,    4,    7,    8,    4,    4,

        9,   10,   11,   12,   13,   14,    4,    4,   15,   16,
       16,   16,   16,   16,   16,   16,   16,   16,   17,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,   16,   16,   16,
       16,   16,   16,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4
    },

    {
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,

       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,

       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3,
       -3,   -3,   -3,   -3,   -3,   -3,   -3,   -3
    },

    {
        3,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,

       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4,
       -4,   -4,   -4,   -4,   -4,   -4,   -4,   -4
    },

    {
        3,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   18,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   18,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,

       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,
       -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
    },

    {
        3,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       19,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,

       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,
       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6,

       -6,   -6,   -6,   -6,   -6,   -6,   -6,   -6
    },

    {
        3,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,

       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7,
       -7,   -7,   -7,   -7,   -7,   -7,   -7,   -7
    },

    {
        3,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,

       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,   -8,
       -8,   -8,   -8,   -8,   -8,   -8,   -8,   20,   20,   20,
       20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
       20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
       20,   20,   20,   -8,   -8,   -8,   -8,   -8
    },

    {
        3,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,

       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   21,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9,
       -9,   -9,   -9,   -9,   -9,   -9,   -9,   -9

    },

    {
        3,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,

      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
      -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10
    },

    {
        3,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,

      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,
      -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11
    },

    {
        3,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,

      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12,
      -12,  -12,  -12,  -12,  -12,  -12,  -12,  -12
    },

    {
        3,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,

      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,

      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13,
      -13,  -13,  -13,  -13,  -13,  -13,  -13,  -13
    },

    {
        3,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,

      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14,
      -14,  -14,  -14,  -14,  -14,  -14,  -14,  -14
    },

    {
        3,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,   22,   22,

       22,   22,   22,   22,   22,   22,   22,   22,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,   22,   22,   22,
       22,   22,   22,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
      -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,  -15,
       23,  -15,  -15,  -15,  -15,  -15,  -15,  -15
    },

    {
        3,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,

      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,   22,   22,
       22,   22,   22,   22,   22,   22,   22,   22,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,   22,   22,   22,
       22,   22,   22,  -16,  -16,  -16,  -16,  -16,  -16,  -16,
      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16,

      -16,  -16,  -16,  -16,  -16,  -16,  -16,  -16
    },

    {
        3,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,

      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17,
      -17,  -17,  -17,  -17,  -17,  -17,  -17,  -17
    },

    {
        3,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,   18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,   18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,

      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18,
      -18,  -18,  -18,  -18,  -18,  -18,  -18,  -18
    },

    {
        3,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
       19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,

      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19,
      -19,  -19,  -19,  -19,  -19,  -19,  -19,  -19

    },

    {
        3,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,   24,   24,
       24,   24,   24,   24,   24,   24,   24,   24,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,  -20,
      -20,  -20,  -20,  -20,  -20,  -20,  -20,   24,   24,   24,

       24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
       24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
       24,   24,   24,  -20,  -20,  -20,  -20,  -20
    },

    {
        3,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,

      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,   25,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21,
      -21,  -21,  -21,  -21,  -21,  -21,  -21,  -21
    },

    {
        3,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,

      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,   22,   22,
       22,   22,   22,   22,   22,   22,   22,   22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,   22,   22,   22,
       22,   22,   22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22,
      -22,  -22,  -22,  -22,  -22,  -22,  -22,  -22
    },

    {
        3,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,

      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,   22,   22,
       22,   22,   22,   22,   22,   22,   22,   22,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,   22,   22,   22,
       22,   22,   22,  -23,  -23,  -23,  -23,  -23,  -23,  -23,

      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23,
      -23,  -23,  -23,  -23,  -23,  -23,  -23,  -23
    },

    {
        3,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,   24,   24,
       24,   24,   24,   24,   24,   24,   24,   24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,

      -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,  -24,
      -24,  -24,  -24,  -24,  -24,  -24,  -24,   24,   24,   24,
       24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
       24,   24,   24,   24,   24,   24,   24,   24,   24,   24,
       24,   24,   24,  -24,  -24,  -24,  -24,  -24
    },

    {
        3,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,

      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
       26,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25,
      -25,  -25,  -25,  -25,  -25,  -25,  -25,  -25
    },

    {
        3,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,

      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,   27,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,
      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26,

      -26,  -26,  -26,  -26,  -26,  -26,  -26,  -26
    },

    {
        3,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,

      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27,
      -27,  -27,  -27,  -27,  -27,  -27,  -27,  -27
    },

    } ;

#ifdef YY_HEADER_EXPORT_START_CONDITIONS
#define INITIAL 0

#endif

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */
#include <unistd.h>
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

/* Accessor methods to globals.
   These are made visible to non-reentrant scanners for convenience. */

int sparc_lex_destroy (void );

int sparc_get_debug (void );

void sparc_set_debug (int debug_flag  );

YY_EXTRA_TYPE sparc_get_extra (void );

void sparc_set_extra (YY_EXTRA_TYPE user_defined  );

FILE *sparc_get_in (void );

void sparc_set_in  (FILE * in_str  );

FILE *sparc_get_out (void );

void sparc_set_out  (FILE * out_str  );

int sparc_get_leng (void );

char *sparc_get_text (void );

int sparc_get_lineno (void );

void sparc_set_lineno (int line_number  );

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int sparc_wrap (void );
#else
extern int sparc_wrap (void );
#endif
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * );
#endif

#ifndef YY_NO_INPUT

#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k */
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif /* __ia64__ */
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int sparc_lex (void);

#define YY_DECL int sparc_lex (void)
#endif /* !YY_DECL */

/* yy_get_previous_state - get the state just before the EOB char was reached */

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yy_set_bol
#undef yy_new_buffer
#undef yy_set_interactive
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif

#line 156 "./decoders/binutils/sparc/sparc_scanner.ll"


#line 821 "decoders/binutils/sparc/sparc_scanner.hh"
#undef sparc_IN_HEADER
#endif /* sparc_HEADER_H */
