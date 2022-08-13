#ifndef XLIB_X_HEADER_H
#define XLIB_X_HEADER_H

//
// it is always good practice to enclose your header definitions inside such macros.
// 
// what is it?
//		it is called include guard. 
// 
// what it does actually?
//		it prevents compiler from including the same file multiple times.
// 
// how it does guard?
//		it is highly possible that the same file will be included by multiple .cpp / .h files
// in a code base. thus the compiler will read the file multiple times. at each read it will
// chech if the identifier is defined or not [ifndef - if not defined]. if it is not defined
// it will continue to read the file further, and the idenfier gets defined in the next statement 
// where we actually define this identifier. this macro should be closed with a #endif macro. the
// scope of #ifxxx ends at the first #endif the compiler encounters. yes, #if macro can be nested 
// and the rules are similar to if statements (ofcourse c/cpp doesnt have a endif statement, but
// you get the idea!).
// 
//		as described above lets see what happens in multiple reads.
//		first read:		compiler finds that XLIB_X_HEADER_H is not defined and defines it when 
// it continues
//		further reads:	compiler figures out that the macro XLIB_X_HEADER_H is defined earlier 
// and leaves the file.
// 
//		UNIQUE: the only requirement is that, the identifier should be unique.
//

#include "header/xlibFunctionality.h"

//
//		it is good to have a single header at the top level of your library. the external 
// applications should only include this file to access your library. so include all necessary files 
// in this main header.
//

#endif // !XLIB_X_HEADER_H

