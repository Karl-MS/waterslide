/*
No copyright is claimed in the United States under Title 17, U.S. Code.
All Other Rights Reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// error_print.h
// supplementary header file needed by a couple of the utilities 
// (extracted from waterslide.h)
#ifndef _TOOL_PRINT_H
#define _TOOL_PRINT_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "cppwrap.h"

#ifdef __cplusplus
CPP_OPEN
#endif // __cplusplus

// macros for printing help...
#if defined(__GNUC__) && __GNUC__ < 3
#ifdef PROC_NAME
#define tool_print(str, ...) fprintf(stderr, "%s " str "\n", PROC_NAME, ##__VA_ARGS__)
#define tool_print(str) fprintf(stderr, "%s " str "\n", PROC_NAME)
#elif defined(TOOL_NAME)
#define tool_print(str, ...) fprintf(stderr, "%s " str "\n", TOOL_NAME, ##__VA_ARGS__)
#define tool_print(str) fprintf(stderr, "%s " str "\n", TOOL_NAME)
#else
#define tool_print(str, ...) fprintf(stderr, str "\n", ##__VA_ARGS__)
#define tool_print(str) fprintf(stderr, str "\n")
#endif // PROC_NAME

#else
#ifdef PROC_NAME
#define tool_print(str, ...) fprintf(stderr, "%s " str "\n", PROC_NAME, ##__VA_ARGS__)
#elif defined(TOOL_NAME)
#define tool_print(str, ...) fprintf(stderr, "%s " str "\n", TOOL_NAME, ##__VA_ARGS__)
#else
#define tool_print(str, ...) fprintf(stderr, str "\n", ##__VA_ARGS__)
#endif // PROC_NAME

#endif // __GNUC__ && __GNUC__ < 3

#ifdef __cplusplus
CPP_CLOSE
#endif // __cplusplus

#endif // _TOOL_PRINT_H
