/*
 * DO NOT EDIT
 *
 * generated by calcerr.tbl via Makefile
 */

#include <stdio.h>
#include "calcerr.h"

#include "have_const.h"

/*
 * names of calc error values
 */
CONST char *error_table[E__COUNT+2] = {
	"No error",
    "Division by zero",
    "Indeterminate (0/0)",
    "Bad arguments for +",
    "Bad arguments for binary -",
    "Bad arguments for *",
    "Bad arguments for /",
    "Bad argument for unary -",
    "Bad argument for squaring",
    "Bad argument for inverse",
    "Bad argument for ++",
    "Bad argument for --",
    "Bad argument for int",
    "Bad argument for frac",
    "Bad argument for conj",
    "Bad first argument for appr",
    "Bad second argument for appr",
    "Bad third argument for appr",
    "Bad first argument for round",
    "Bad second argument for round",
    "Bad third argument for round",
    "Bad first argument for bround",
    "Bad second argument for bround",
    "Bad third argument for bround",
    "Bad first argument for sqrt",
    "Bad second argument for sqrt",
    "Bad third argument for sqrt",
    "Bad first argument for root",
    "Bad second argument for root",
    "Bad third argument for root",
    "Bad argument for norm",
    "Bad first argument for << or >>",
    "Bad second argument for << or >>",
    "Bad first argument for scale",
    "Bad second argument for scale",
    "Bad first argument for ^",
    "Bad second argument for ^",
    "Bad first argument for power",
    "Bad second argument for power",
    "Bad third argument for power",
    "Bad first argument for quo or //",
    "Bad second argument for quo or //",
    "Bad third argument for quo",
    "Bad first argument for mod or %",
    "Bad second argument for mod or %",
    "Bad third argument for mod",
    "Bad argument for sgn",
    "Bad first argument for abs",
    "Bad second argument for abs",
    "Scan error in argument for eval",
    "Non-simple type for str",
    "Non-real epsilon for exp",
    "Bad first argument for exp",
    "Non-file first argument for fputc",
    "Bad second argument for fputc",
    "File not open for writing for fputc",
    "Non-file first argument for fgetc",
    "File not open for reading for fgetc",
    "Non-string arguments for fopen",
    "Unrecognized mode for fopen",
    "Non-file first argument for freopen",
    "Non-string or unrecognized mode for freopen",
    "Non-string third argument for freopen",
    "Non-file argument for fclose",
    "Non-file argument for fflush",
    "Non-file first argument for fputs",
    "Non-string argument after first for fputs",
    "File not open for writing for fputs",
    "Non-file argument for fgets",
    "File not open for reading for fgets",
    "Non-file first argument for fputstr",
    "Non-string argument after first for fputstr",
    "File not open for writing for fputstr",
    "Non-file first argument for fgetstr",
    "File not open for reading for fgetstr",
    "Non-file  argument for fgetline",
    "File not open for reading for fgetline",
    "Non-file argument for fgetfield",
    "File not open for reading for fgetfield",
    "Non-file argument for rewind",
    "Non-integer argument for files",
    "Non-string fmt argument for fprint",
    "Stdout not open for writing to ???",
    "Non-file first argument for fprintf",
    "Non-string second (fmt) argument for fprintf",
    "File not open for writing for fprintf",
    "Non-string first (fmt) argument for strprintf",
    "Error in attempting strprintf ???",
    "Non-file first argument for fscan",
    "File not open for reading for fscan",
    "Non-string first argument for strscan",
    "Non-file first argument for fscanf",
    "Non-string second (fmt) argument for fscanf",
    "Non-lvalue argument after second for fscanf",
    "File not open for reading or other error for fscanf",
    "Non-string first argument for strscanf",
    "Non-string second (fmt) argument for strscanf",
    "Non-lvalue argument after second for strscanf",
    "Some error in attempting strscanf ???",
    "Non-string first (fmt) argument for scanf",
    "Non-lvalue argument after first for scanf",
    "Some error in attempting scanf ???",
    "Non-file argument for ftell",
    "File not open or other error for ftell",
    "Non-file first argument for fseek",
    "Non-integer or negative second argument for fseek",
    "File not open or other error for fseek",
    "Non-file argument for fsize",
    "File not open or other error for fsize",
    "Non-file argument for feof",
    "File not open or other error for feof",
    "Non-file argument for ferror",
    "File not open or other error for ferror",
    "Non-file argument for ungetc",
    "File not open for reading for ungetc",
    "Bad second argument or other error for ungetc",
    "Exponent too big in scanning",
    "E_ISATTY1 is no longer used",
    "E_ISATTY2 is no longer used",
    "Non-string first argument for access",
    "Bad second argument for access",
    "Bad first argument for search",
    "Bad second argument for search",
    "Bad third argument for search",
    "Bad fourth argument for search",
    "Cannot find fsize or fpos for search",
    "File not readable for search",
    "Bad first argument for rsearch",
    "Bad second argument for rsearch",
    "Bad third argument for rsearch",
    "Bad fourth argument for rsearch",
    "Cannot find fsize or fpos for rsearch",
    "File not readable for rsearch",
    "Too many open files",
    "Attempt to rewind a file that is not open",
    "Bad argument type for strerror",
    "Index out of range for strerror",
    "Bad epsilon for cos",
    "Bad first argument for cos",
    "Bad epsilon for sin",
    "Bad first argument for sin",
    "Non-string argument for eval",
    "Bad epsilon for arg",
    "Bad first argument for arg",
    "Non-real argument for polar",
    "Bad epsilon for polar",
    "Non-integral argument for fcnt",
    "Non-variable first argument for matfill",
    "Non-matrix first argument-value for matfill",
    "Non-matrix argument for matdim",
    "Non-matrix argument for matsum",
    "E_ISIDENT is no longer used",
    "Non-matrix argument for mattrans",
    "Non-two-dimensional matrix for mattrans",
    "Non-matrix argument for det",
    "Matrix for det not of dimension 2",
    "Non-square matrix for det",
    "Non-matrix first argument for matmin",
    "Non-positive-integer second argument for matmin",
    "Second argument for matmin exceeds dimension",
    "Non-matrix first argument for matmin",
    "Second argument for matmax not positive integer",
    "Second argument for matmax exceeds dimension",
    "Non-matrix argument for cp",
    "Non-one-dimensional matrix for cp",
    "Matrix size not 3 for cp",
    "Non-matrix argument for dp",
    "Non-one-dimensional matrix for dp",
    "Different-size matrices for dp",
    "Non-string argument for strlen",
    "Non-string argument for strcat",
    "Non-string first argument for strcat",
    "Non-non-negative integer second argument for strcat",
    "Bad argument for char",
    "Non-string argument for ord",
    "Non-list-variable first argument for insert",
    "Non-integral second argument for insert",
    "Non-list-variable first argument for push",
    "Non-list-variable first argument for append",
    "Non-list-variable first argument for delete",
    "Non-integral second argument for delete",
    "Non-list-variable argument for pop",
    "Non-list-variable argument for remove",
    "Bad epsilon argument for ln",
    "Non-numeric first argument for ln",
    "Non-integer argument for error",
    "Argument outside range for error",
    "Attempt to eval at maximum input depth",
    "Unable to open string for reading",
    "First argument for rm is not a non-empty string",
    "Unable to remove a file",
    "Operation allowed because calc mode disallows read operations",
    "Operation allowed because calc mode disallows write operations",
    "Operation allowed because calc mode disallows exec operations",
    "Unordered arguments for min",
    "Unordered arguments for max",
    "Unordered items for minimum of list",
    "Unordered items for maximum of list",
    "Size undefined for argument type",
    "Calc must be run with a -C argument to use custom function",
    "Calc was built with custom functions disabled",
    "Custom function unknown, try: show custom",
    "Non-integral length for block",
    "Negative or too-large length for block",
    "Non-integral chunksize for block",
    "Negative or too-large chunksize for block",
    "Named block does not exist for blkfree",
    "Non-integral id specification for blkfree",
    "Block with specified id does not exist",
    "Block already freed",
    "No-realloc protection prevents blkfree",
    "Non-integer argument for blocks",
    "Non-allocated index number for blocks",
    "Non-integer or negative source index for copy",
    "Source index too large for copy",
    "E_COPY3 is no longer used",
    "Non-integer or negative number for copy",
    "Number too large for copy",
    "Non-integer or negative destination index for copy",
    "Destination index too large for copy",
    "Freed block source for copy",
    "Unsuitable source type for copy",
    "Freed block destinction for copy",
    "Unsuitable destination type for copy",
    "Incompatible source and destination for copy",
    "No-copy-from source variable",
    "No-copy-to destination variable",
    "No-copy-from source named block",
    "No-copy-to destination named block",
    "No-relocate destination for copy",
    "File not open for copy",
    "fseek or fsize failure for copy",
    "fwrite error for copy",
    "fread error for copy",
    "Non-variable first argument for protect",
    "Bad second argument for protect",
    "Bad third argument for protect",
    "No-copy-to destination for matfill",
    "No-assign-from source for matfill",
    "Non-matrix argument for mattrace",
    "Non-two-dimensional argument for mattrace",
    "Non-square argument for mattrace",
    "Bad epsilon for tan",
    "Bad argument for tan",
    "Bad epsilon for cot",
    "Bad argument for cot",
    "Bad epsilon for sec",
    "Bad argument for sec",
    "Bad epsilon for csc",
    "Bad argument for csc",
    "Bad epsilon for sinh",
    "Bad argument for sinh",
    "Bad epsilon for cosh",
    "Bad argument for cosh",
    "Bad epsilon for tanh",
    "Bad argument for tanh",
    "Bad epsilon for coth",
    "Bad argument for coth",
    "Bad epsilon for sech",
    "Bad argument for sech",
    "Bad epsilon for csch",
    "Bad argument for csch",
    "Bad epsilon for asin",
    "Bad argument for asin",
    "Bad epsilon for acos",
    "Bad argument for acos",
    "Bad epsilon for atan",
    "Bad argument for atan",
    "Bad epsilon for acot",
    "Bad argument for acot",
    "Bad epsilon for asec",
    "Bad argument for asec",
    "Bad epsilon for acsc",
    "Bad argument for acsc",
    "Bad epsilon for asin",
    "Bad argument for asinh",
    "Bad epsilon for acosh",
    "Bad argument for acosh",
    "Bad epsilon for atanh",
    "Bad argument for atanh",
    "Bad epsilon for acoth",
    "Bad argument for acoth",
    "Bad epsilon for asech",
    "Bad argument for asech",
    "Bad epsilon for acsch",
    "Bad argument for acsch",
    "Bad epsilon for gd",
    "Bad argument for gd",
    "Bad epsilon for agd",
    "Bad argument for agd",
    "Log of zero or infinity",
    "String addition failure",
    "String multiplication failure",
    "String reversal failure",
    "String subtraction failure",
    "Bad argument type for bit",
    "Index too large for bit",
    "Non-integer second argument for setbit",
    "Out-of-range index for setbit",
    "Non-string first argument for setbit",
    "Bad argument for or",
    "Bad argument for and",
    "Allocation failure for string or",
    "Allocation failure for string and",
    "Bad argument for xorvalue",
    "Bad argument for comp",
    "Allocation failure for string diff",
    "Allocation failure for string comp",
    "Bad first argument for segment",
    "Bad second argument for segment",
    "Bad third argument for segment",
    "Failure for string segment",
    "Bad argument type for highbit",
    "Non-integer argument for highbit",
    "Bad argument type for lowbit",
    "Non-integer argument for lowbit",
    "Bad argument type for unary hash op",
    "Bad argument type for binary hash op",
    "Bad first argument for head",
    "Bad second argument for head",
    "Failure for strhead",
    "Bad first argument for tail",
    "Bad second argument for tail",
    "Failure for strtail",
    "Failure for strshift",
    "Non-string argument for strcmp",
    "Bad argument type for strncmp",
    "Varying types of argument for xor",
    "Bad argument type for xor",
    "Bad argument type for strcpy",
    "Bad argument type for strncpy",
    "Bad argument type for unary backslash",
    "Bad argument type for setminus",
    "Bad first argument type for indices",
    "Bad second argument for indices",
    "Too-large re(argument) for exp",
    "Too-large re(argument) for sinh",
    "Too-large re(argument) for cosh",
    "Too-large im(argument) for sin",
    "Too-large im(argument) for cos",
    "Infinite or too-large result for gd",
    "Infinite or too-large result for agd",
    "Too-large value for power",
    "Too-large value for root",
    "Non-real first arg for digit",
    "Non-integral second arg for digit",
    "Bad third arg for digit",
    "Bad first argument for places",
    "Bad second argument for places",
    "Bad first argument for digits",
    "Bad second argument for digits",
    "Bad first argument for ilog",
    "Bad second argument for ilog",
    "Bad argument for ilog10",
    "Bad argument for ilog2",
    "Non-integer second arg for comb",
    "Too-large second arg for comb",
    "Bad argument for catalan",
    "Bad argument for bern",
    "Bad argument for euler",
    "Bad argument for sleep",
    "calc_tty failure",
    "No-copy-to destination for octet assign",
    "No-copy-from source for octet assign",
    "No-change destination for octet assign",
    "Non-variable destination for assign",
    "No-assign-to destination for assign",
    "No-assign-from source for assign",
    "No-change destination for assign",
    "No-type-change destination for assign",
    "No-error-value destination for assign",
    "No-copy argument for octet swap",
    "No-assign-to-or-from argument for swap",
    "Non-lvalue argument for swap",
    "Non-lvalue argument 3 or 4 for quomod",
    "Non-real-number arg 1 or 2 or bad arg 5 for quomod",
    "No-assign-to argument 3 or 4 for quomod",
    "No-copy-to or no-change argument for octet preinc",
    "Non-variable argument for preinc",
    "No-assign-to or no-change argument for preinc",
    "No-copy-to or no-change argument for octet predec",
    "Non-variable argument for predec",
    "No-assign-to or no-change argument for predec",
    "No-copy-to or no-change argument for octet postinc",
    "Non-variable argument for postinc",
    "No-assign-to or no-change argument for postinc",
    "No-copy-to or no-change argument for octet postdec",
    "Non-variable argument for postdec",
    "No-assign-to or no-change argument for postdec",
    "Error-type structure for initialization",
    "No-copy-to structure for initialization",
    "Too many initializer values",
    "Attempt to initialize freed named block",
    "Bad structure type for initialization",
    "No-assign-to element for initialization",
    "No-change element for initialization",
    "No-type-change element for initialization",
    "No-error-value element for initialization",
    "No-assign-or-copy-from source for initialization",
    "No-relocate for list insert",
    "No-relocate for list delete",
    "No-relocate for list push",
    "No-relocate for list append",
    "No-relocate for list pop",
    "No-relocate for list remove",
    "Non-variable first argument for modify",
    "Non-string second argument for modify",
    "No-change first argument for modify",
    "Undefined function for modify",
    "Unacceptable type first argument for modify",
    "Non-string arguments for fpathopen",
    "Unrecognized mode for fpathopen",
    "Bad epsilon argument for log",
    "Non-numeric first argument for log",
    "Non-file argument for fgetfile",
    "File argument for fgetfile not open for reading",
    "Unable to set file position in fgetfile",
    "Non-representable type for estr",
    "Non-string argument for strcasecmp",
    "Bad argument type for strncasecmp",
    "Bad argument for isupper",
    "Bad argument for islower",
    "Bad argument for isalnum",
    "Bad argument for isalpha",
    "Bad argument for isascii",
    "Bad argument for iscntrl",
    "Bad argument for isdigit",
    "Bad argument for isgraph",
    "Bad argument for isprint",
    "Bad argument for ispunct",
    "Bad argument for isspace",
    "Bad argument for isxdigit",
	NULL
};
