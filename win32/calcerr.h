/*
 * DO NOT EDIT
 *
 * generated by calcerr.tbl via Makefile
 */


#if !defined(__CALCERR_H__)
#define __CALCERR_H__


#define E__BASE 10000	/* calc errors start above here */

#define E_1OVER0	10001	/* Division by zero */
#define E_0OVER0	10002	/* Indeterminate (0/0) */
#define E_ADD		10003	/* Bad arguments for + */
#define E_SUB		10004	/* Bad arguments for binary - */
#define E_MUL		10005	/* Bad arguments for * */
#define E_DIV		10006	/* Bad arguments for / */
#define E_NEG		10007	/* Bad argument for unary - */
#define E_SQUARE	10008	/* Bad argument for squaring */
#define E_INV		10009	/* Bad argument for inverse */
#define E_INCV		10010	/* Bad argument for ++ */
#define E_DECV		10011	/* Bad argument for -- */
#define E_INT		10012	/* Bad argument for int */
#define E_FRAC		10013	/* Bad argument for frac */
#define E_CONJ		10014	/* Bad argument for conj */
#define E_APPR		10015	/* Bad first argument for appr */
#define E_APPR2		10016	/* Bad second argument for appr */
#define E_APPR3		10017	/* Bad third argument for appr */
#define E_ROUND		10018	/* Bad first argument for round */
#define E_ROUND2	10019	/* Bad second argument for round */
#define E_ROUND3	10020	/* Bad third argument for round */
#define E_BROUND	10021	/* Bad first argument for bround */
#define E_BROUND2	10022	/* Bad second argument for bround */
#define E_BROUND3	10023	/* Bad third argument for bround */
#define E_SQRT		10024	/* Bad first argument for sqrt */
#define E_SQRT2		10025	/* Bad second argument for sqrt */
#define E_SQRT3		10026	/* Bad third argument for sqrt */
#define E_ROOT		10027	/* Bad first argument for root */
#define E_ROOT2		10028	/* Bad second argument for root */
#define E_ROOT3		10029	/* Bad third argument for root */
#define E_NORM		10030	/* Bad argument for norm */
#define E_SHIFT		10031	/* Bad first argument for << or >> */
#define E_SHIFT2	10032	/* Bad second argument for << or >> */
#define E_SCALE		10033	/* Bad first argument for scale */
#define E_SCALE2	10034	/* Bad second argument for scale */
#define E_POWI		10035	/* Bad first argument for ^ */
#define E_POWI2		10036	/* Bad second argument for ^ */
#define E_POWER		10037	/* Bad first argument for power */
#define E_POWER2	10038	/* Bad second argument for power */
#define E_POWER3	10039	/* Bad third argument for power */
#define E_QUO		10040	/* Bad first argument for quo or // */
#define E_QUO2		10041	/* Bad second argument for quo or // */
#define E_QUO3		10042	/* Bad third argument for quo */
#define E_MOD		10043	/* Bad first argument for mod or % */
#define E_MOD2		10044	/* Bad second argument for mod or % */
#define E_MOD3		10045	/* Bad third argument for mod */
#define E_SGN		10046	/* Bad argument for sgn */
#define E_ABS		10047	/* Bad first argument for abs */
#define E_ABS2		10048	/* Bad second argument for abs */
#define E_EVAL		10049	/* Scan error in argument for eval */
#define E_STR		10050	/* Non-simple type for str */
#define E_EXP1		10051	/* Non-real epsilon for exp */
#define E_EXP2		10052	/* Bad first argument for exp */
#define E_FPUTC1	10053	/* Non-file first argument for fputc */
#define E_FPUTC2	10054	/* Bad second argument for fputc */
#define E_FPUTC3	10055	/* File not open for writing for fputc */
#define E_FGETC1	10056	/* Non-file first argument for fgetc */
#define E_FGETC2	10057	/* File not open for reading for fgetc */
#define E_FOPEN1	10058	/* Non-string arguments for fopen */
#define E_FOPEN2	10059	/* Unrecognized mode for fopen */
#define E_FREOPEN1	10060	/* Non-file first argument for freopen */
#define E_FREOPEN2	10061	/* Non-string or unrecognized mode for freopen */
#define E_FREOPEN3	10062	/* Non-string third argument for freopen */
#define E_FCLOSE1	10063	/* Non-file argument for fclose */
#define E_FFLUSH	10064	/* Non-file argument for fflush */
#define E_FPUTS1	10065	/* Non-file first argument for fputs */
#define E_FPUTS2	10066	/* Non-string argument after first for fputs */
#define E_FPUTS3	10067	/* File not open for writing for fputs */
#define E_FGETS1	10068	/* Non-file argument for fgets */
#define E_FGETS2	10069	/* File not open for reading for fgets */
#define E_FPUTSTR1	10070	/* Non-file first argument for fputstr */
#define E_FPUTSTR2	10071	/* Non-string argument after first for fputstr */
#define E_FPUTSTR3	10072	/* File not open for writing for fputstr */
#define E_FGETSTR1	10073	/* Non-file first argument for fgetstr */
#define E_FGETSTR2	10074	/* File not open for reading for fgetstr */
#define E_FGETLINE1	10075	/* Non-file argument for fgetline */
#define E_FGETLINE2	10076	/* File not open for reading for fgetline */
#define E_FGETFIELD1	10077	/* Non-file argument for fgetfield */
#define E_FGETFIELD2	10078	/* File not open for reading for fgetfield */
#define E_REWIND1	10079	/* Non-file argument for rewind */
#define E_FILES		10080	/* Non-integer argument for files */
#define E_PRINTF1	10081	/* Non-string fmt argument for fprint */
#define E_PRINTF2	10082	/* Stdout not open for writing to ??? */
#define E_FPRINTF1	10083	/* Non-file first argument for fprintf */
#define E_FPRINTF2	10084	/* Non-string second (fmt) argument for fprintf */
#define E_FPRINTF3	10085	/* File not open for writing for fprintf */
#define E_STRPRINTF1	10086	/* Non-string first (fmt) argument for strprintf */
#define E_STRPRINTF2	10087	/* Error in attempting strprintf ??? */
#define E_FSCAN1	10088	/* Non-file first argument for fscan */
#define E_FSCAN2	10089	/* File not open for reading for fscan */
#define E_STRSCAN	10090	/* Non-string first argument for strscan */
#define E_FSCANF1	10091	/* Non-file first argument for fscanf */
#define E_FSCANF2	10092	/* Non-string second (fmt) argument for fscanf */
#define E_FSCANF3	10093	/* Non-lvalue argument after second for fscanf */
#define E_FSCANF4	10094	/* File not open for reading or other error for fscanf */
#define E_STRSCANF1	10095	/* Non-string first argument for strscanf */
#define E_STRSCANF2	10096	/* Non-string second (fmt) argument for strscanf */
#define E_STRSCANF3	10097	/* Non-lvalue argument after second for strscanf */
#define E_STRSCANF4	10098	/* Some error in attempting strscanf ??? */
#define E_SCANF1	10099	/* Non-string first (fmt) argument for scanf */
#define E_SCANF2	10100	/* Non-lvalue argument after first for scanf */
#define E_SCANF3	10101	/* Some error in attempting scanf ??? */
#define E_FTELL1	10102	/* Non-file argument for ftell */
#define E_FTELL2	10103	/* File not open or other error for ftell */
#define E_FSEEK1	10104	/* Non-file first argument for fseek */
#define E_FSEEK2	10105	/* Non-integer or negative second argument for fseek */
#define E_FSEEK3	10106	/* File not open or other error for fseek */
#define E_FSIZE1	10107	/* Non-file argument for fsize */
#define E_FSIZE2	10108	/* File not open or other error for fsize */
#define E_FEOF1		10109	/* Non-file argument for feof */
#define E_FEOF2		10110	/* File not open or other error for feof */
#define E_FERROR1	10111	/* Non-file argument for ferror */
#define E_FERROR2	10112	/* File not open or other error for ferror */
#define E_UNGETC1	10113	/* Non-file argument for ungetc */
#define E_UNGETC2	10114	/* File not open for reading for ungetc */
#define E_UNGETC3	10115	/* Bad second argument or other error for ungetc */
#define E_BIGEXP	10116	/* Exponent too big in scanning */
#define E_ISATTY1	10117	/* E_ISATTY1 is no longer used */
#define E_ISATTY2	10118	/* E_ISATTY2 is no longer used */
#define E_ACCESS1	10119	/* Non-string first argument for access */
#define E_ACCESS2	10120	/* Bad second argument for access */
#define E_SEARCH1	10121	/* Bad first argument for search */
#define E_SEARCH2	10122	/* Bad second argument for search */
#define E_SEARCH3	10123	/* Bad third argument for search */
#define E_SEARCH4	10124	/* Bad fourth argument for search */
#define E_SEARCH5	10125	/* Cannot find fsize or fpos for search */
#define E_SEARCH6	10126	/* File not readable for search */
#define E_RSEARCH1	10127	/* Bad first argument for rsearch */
#define E_RSEARCH2	10128	/* Bad second argument for rsearch */
#define E_RSEARCH3	10129	/* Bad third argument for rsearch */
#define E_RSEARCH4	10130	/* Bad fourth argument for rsearch */
#define E_RSEARCH5	10131	/* Cannot find fsize or fpos for rsearch */
#define E_RSEARCH6	10132	/* File not readable for rsearch */
#define E_MANYOPEN	10133	/* Too many open files */
#define E_REWIND2	10134	/* Attempt to rewind a file that is not open */
#define E_STRERROR1	10135	/* Bad argument type for strerror */
#define E_STRERROR2	10136	/* Index out of range for strerror */
#define E_COS1		10137	/* Bad epsilon for cos */
#define E_COS2		10138	/* Bad first argument for cos */
#define E_SIN1		10139	/* Bad epsilon for sin */
#define E_SIN2		10140	/* Bad first argument for sin */
#define E_EVAL2		10141	/* Non-string argument for eval */
#define E_ARG1		10142	/* Bad epsilon for arg */
#define E_ARG2		10143	/* Bad first argument for arg */
#define E_POLAR1	10144	/* Non-real argument for polar */
#define E_POLAR2	10145	/* Bad epsilon for polar */
#define E_FCNT		10146	/* Non-integral argument for fcnt */
#define E_MATFILL1	10147	/* Non-variable first argument for matfill */
#define E_MATFILL2	10148	/* Non-matrix first argument-value for matfill */
#define E_MATDIM	10149	/* Non-matrix argument for matdim */
#define E_MATSUM	10150	/* Non-matrix argument for matsum */
#define E_ISIDENT	10151	/* E_ISIDENT is no longer used */
#define E_MATTRANS1	10152	/* Non-matrix argument for mattrans */
#define E_MATTRANS2	10153	/* Non-two-dimensional matrix for mattrans */
#define E_DET1		10154	/* Non-matrix argument for det */
#define E_DET2		10155	/* Matrix for det not of dimension 2 */
#define E_DET3		10156	/* Non-square matrix for det */
#define E_MATMIN1	10157	/* Non-matrix first argument for matmin */
#define E_MATMIN2	10158	/* Non-positive-integer second argument for matmin */
#define E_MATMIN3	10159	/* Second argument for matmin exceeds dimension */
#define E_MATMAX1	10160	/* Non-matrix first argument for matmin */
#define E_MATMAX2	10161	/* Second argument for matmax not positive integer */
#define E_MATMAX3	10162	/* Second argument for matmax exceeds dimension */
#define E_CP1		10163	/* Non-matrix argument for cp */
#define E_CP2		10164	/* Non-one-dimensional matrix for cp */
#define E_CP3		10165	/* Matrix size not 3 for cp */
#define E_DP1		10166	/* Non-matrix argument for dp */
#define E_DP2		10167	/* Non-one-dimensional matrix for dp */
#define E_DP3		10168	/* Different-size matrices for dp */
#define E_STRLEN	10169	/* Non-string argument for strlen */
#define E_STRCAT	10170	/* Non-string argument for strcat */
#define E_SUBSTR1	10171	/* Non-string first argument for strcat */
#define E_SUBSTR2	10172	/* Non-non-negative integer second argument for strcat */
#define E_CHAR		10173	/* Bad argument for char */
#define E_ORD		10174	/* Non-string argument for ord */
#define E_INSERT1	10175	/* Non-list-variable first argument for insert */
#define E_INSERT2	10176	/* Non-integral second argument for insert */
#define E_PUSH		10177	/* Non-list-variable first argument for push */
#define E_APPEND	10178	/* Non-list-variable first argument for append */
#define E_DELETE1	10179	/* Non-list-variable first argument for delete */
#define E_DELETE2	10180	/* Non-integral second argument for delete */
#define E_POP		10181	/* Non-list-variable argument for pop */
#define E_REMOVE	10182	/* Non-list-variable argument for remove */
#define E_LN1		10183	/* Bad epsilon argument for ln */
#define E_LN2		10184	/* Non-numeric first argument for ln */
#define E_ERROR1	10185	/* Non-integer argument for error */
#define E_ERROR2	10186	/* Argument outside range for error */
#define E_EVAL3		10187	/* Attempt to eval at maximum input depth */
#define E_EVAL4		10188	/* Unable to open string for reading */
#define E_RM1		10189	/* First argument for rm is not a non-empty string */
#define E_RM2		10190	/* Unable to remove a file */
#define E_RDPERM	10191	/* Operation allowed because calc mode disallows read operations */
#define E_WRPERM	10192	/* Operation allowed because calc mode disallows write operations */
#define E_EXPERM	10193	/* Operation allowed because calc mode disallows exec operations */
#define E_MIN		10194	/* Unordered arguments for min */
#define E_MAX		10195	/* Unordered arguments for max */
#define E_LISTMIN	10196	/* Unordered items for minimum of list */
#define E_LISTMAX	10197	/* Unordered items for maximum of list */
#define E_SIZE		10198	/* Size undefined for argument type */
#define E_NO_C_ARG	10199	/* Calc must be run with a -C argument to use custom function */
#define E_NO_CUSTOM	10200	/* Calc was built with custom functions disabled */
#define E_UNK_CUSTOM	10201	/* Custom function unknown, try: show custom */
#define E_BLK1		10202	/* Non-integral length for block */
#define E_BLK2		10203	/* Negative or too-large length for block */
#define E_BLK3		10204	/* Non-integral chunksize for block */
#define E_BLK4		10205	/* Negative or too-large chunksize for block */
#define E_BLKFREE1	10206	/* Named block does not exist for blkfree */
#define E_BLKFREE2	10207	/* Non-integral id specification for blkfree */
#define E_BLKFREE3	10208	/* Block with specified id does not exist */
#define E_BLKFREE4	10209	/* Block already freed */
#define E_BLKFREE5	10210	/* No-realloc protection prevents blkfree */
#define E_BLOCKS1	10211	/* Non-integer argument for blocks */
#define E_BLOCKS2	10212	/* Non-allocated index number for blocks */
#define E_COPY1		10213	/* Non-integer or negative source index for copy */
#define E_COPY2		10214	/* Source index too large for copy */
#define E_COPY3		10215	/* E_COPY3 is no longer used */
#define E_COPY4		10216	/* Non-integer or negative number for copy */
#define E_COPY5		10217	/* Number too large for copy */
#define E_COPY6		10218	/* Non-integer or negative destination index for copy */
#define E_COPY7		10219	/* Destination index too large for copy */
#define E_COPY8		10220	/* Freed block source for copy */
#define E_COPY9		10221	/* Unsuitable source type for copy */
#define E_COPY10	10222	/* Freed block destinction for copy */
#define E_COPY11	10223	/* Unsuitable destination type for copy */
#define E_COPY12	10224	/* Incompatible source and destination for copy */
#define E_COPY13	10225	/* No-copy-from source variable */
#define E_COPY14	10226	/* No-copy-to destination variable */
#define E_COPY15	10227	/* No-copy-from source named block */
#define E_COPY16	10228	/* No-copy-to destination named block */
#define E_COPY17	10229	/* No-relocate destination for copy */
#define E_COPYF1	10230	/* File not open for copy */
#define E_COPYF2	10231	/* fseek or fsize failure for copy */
#define E_COPYF3	10232	/* fwrite error for copy */
#define E_COPYF4	10233	/* fread error for copy */
#define E_PROTECT1	10234	/* Non-variable first argument for protect */
#define E_PROTECT2	10235	/* Bad second argument for protect */
#define E_PROTECT3	10236	/* Bad third argument for protect */
#define E_MATFILL3	10237	/* No-copy-to destination for matfill */
#define E_MATFILL4	10238	/* No-assign-from source for matfill */
#define E_MATTRACE1	10239	/* Non-matrix argument for mattrace */
#define E_MATTRACE2	10240	/* Non-two-dimensional argument for mattrace */
#define E_MATTRACE3	10241	/* Non-square argument for mattrace */
#define E_TAN1		10242	/* Bad epsilon for tan */
#define E_TAN2		10243	/* Bad argument for tan */
#define E_COT1		10244	/* Bad epsilon for cot */
#define E_COT2		10245	/* Bad argument for cot */
#define E_SEC1		10246	/* Bad epsilon for sec */
#define E_SEC2		10247	/* Bad argument for sec */
#define E_CSC1		10248	/* Bad epsilon for csc */
#define E_CSC2		10249	/* Bad argument for csc */
#define E_SINH1		10250	/* Bad epsilon for sinh */
#define E_SINH2		10251	/* Bad argument for sinh */
#define E_COSH1		10252	/* Bad epsilon for cosh */
#define E_COSH2		10253	/* Bad argument for cosh */
#define E_TANH1		10254	/* Bad epsilon for tanh */
#define E_TANH2		10255	/* Bad argument for tanh */
#define E_COTH1		10256	/* Bad epsilon for coth */
#define E_COTH2		10257	/* Bad argument for coth */
#define E_SECH1		10258	/* Bad epsilon for sech */
#define E_SECH2		10259	/* Bad argument for sech */
#define E_CSCH1		10260	/* Bad epsilon for csch */
#define E_CSCH2		10261	/* Bad argument for csch */
#define E_ASIN1		10262	/* Bad epsilon for asin */
#define E_ASIN2		10263	/* Bad argument for asin */
#define E_ACOS1		10264	/* Bad epsilon for acos */
#define E_ACOS2		10265	/* Bad argument for acos */
#define E_ATAN1		10266	/* Bad epsilon for atan */
#define E_ATAN2		10267	/* Bad argument for atan */
#define E_ACOT1		10268	/* Bad epsilon for acot */
#define E_ACOT2		10269	/* Bad argument for acot */
#define E_ASEC1		10270	/* Bad epsilon for asec */
#define E_ASEC2		10271	/* Bad argument for asec */
#define E_ACSC1		10272	/* Bad epsilon for acsc */
#define E_ACSC2		10273	/* Bad argument for acsc */
#define E_ASINH1	10274	/* Bad epsilon for asin */
#define E_ASINH2	10275	/* Bad argument for asinh */
#define E_ACOSH1	10276	/* Bad epsilon for acosh */
#define E_ACOSH2	10277	/* Bad argument for acosh */
#define E_ATANH1	10278	/* Bad epsilon for atanh */
#define E_ATANH2	10279	/* Bad argument for atanh */
#define E_ACOTH1	10280	/* Bad epsilon for acoth */
#define E_ACOTH2	10281	/* Bad argument for acoth */
#define E_ASECH1	10282	/* Bad epsilon for asech */
#define E_ASECH2	10283	/* Bad argument for asech */
#define E_ACSCH1	10284	/* Bad epsilon for acsch */
#define E_ACSCH2	10285	/* Bad argument for acsch */
#define E_GD1		10286	/* Bad epsilon for gd */
#define E_GD2		10287	/* Bad argument for gd */
#define E_AGD1		10288	/* Bad epsilon for agd */
#define E_AGD2		10289	/* Bad argument for agd */
#define E_LOGINF	10290	/* Log of zero or infinity */
#define E_STRADD	10291	/* String addition failure */
#define E_STRMUL	10292	/* String multiplication failure */
#define E_STRNEG	10293	/* String reversal failure */
#define E_STRSUB	10294	/* String subtraction failure */
#define E_BIT1		10295	/* Bad argument type for bit */
#define E_BIT2		10296	/* Index too large for bit */
#define E_SETBIT1	10297	/* Non-integer second argument for setbit */
#define E_SETBIT2	10298	/* Out-of-range index for setbit */
#define E_SETBIT3	10299	/* Non-string first argument for setbit */
#define E_OR		10300	/* Bad argument for or */
#define E_AND		10301	/* Bad argument for and */
#define E_STROR		10302	/* Allocation failure for string or */
#define E_STRAND	10303	/* Allocation failure for string and */
#define E_XOR		10304	/* Bad argument for xorvalue */
#define E_COMP		10305	/* Bad argument for comp */
#define E_STRDIFF	10306	/* Allocation failure for string diff */
#define E_STRCOMP	10307	/* Allocation failure for string comp */
#define E_SEG1		10308	/* Bad first argument for segment */
#define E_SEG2		10309	/* Bad second argument for segment */
#define E_SEG3		10310	/* Bad third argument for segment */
#define E_STRSEG	10311	/* Failure for string segment */
#define E_HIGHBIT1	10312	/* Bad argument type for highbit */
#define E_HIGHBIT2	10313	/* Non-integer argument for highbit */
#define E_LOWBIT1	10314	/* Bad argument type for lowbit */
#define E_LOWBIT2	10315	/* Non-integer argument for lowbit */
#define E_CONTENT	10316	/* Bad argument type for unary hash op */
#define E_HASHOP	10317	/* Bad argument type for binary hash op */
#define E_HEAD1		10318	/* Bad first argument for head */
#define E_HEAD2		10319	/* Bad second argument for head */
#define E_STRHEAD	10320	/* Failure for strhead */
#define E_TAIL1		10321	/* Bad first argument for tail */
#define E_TAIL2		10322	/* Bad second argument for tail */
#define E_STRTAIL	10323	/* Failure for strtail */
#define E_STRSHIFT	10324	/* Failure for strshift */
#define E_STRCMP	10325	/* Non-string argument for strcmp */
#define E_STRNCMP	10326	/* Bad argument type for strncmp */
#define E_XOR1		10327	/* Varying types of argument for xor */
#define E_XOR2		10328	/* Bad argument type for xor */
#define E_STRCPY	10329	/* Bad argument type for strcpy */
#define E_STRNCPY	10330	/* Bad argument type for strncpy */
#define E_BACKSLASH	10331	/* Bad argument type for unary backslash */
#define E_SETMINUS	10332	/* Bad argument type for setminus */
#define E_INDICES1	10333	/* Bad first argument type for indices */
#define E_INDICES2	10334	/* Bad second argument for indices */
#define E_EXP3		10335	/* Too-large re(argument) for exp */
#define E_SINH3		10336	/* Too-large re(argument) for sinh */
#define E_COSH3		10337	/* Too-large re(argument) for cosh */
#define E_SIN3		10338	/* Too-large im(argument) for sin */
#define E_COS3		10339	/* Too-large im(argument) for cos */
#define E_GD3		10340	/* Infinite or too-large result for gd */
#define E_AGD3		10341	/* Infinite or too-large result for agd */
#define E_POWER4	10342	/* Too-large value for power */
#define E_ROOT4		10343	/* Too-large value for root */
#define E_DGT1		10344	/* Non-real first arg for digit */
#define E_DGT2		10345	/* Non-integral second arg for digit */
#define E_DGT3		10346	/* Bad third arg for digit */
#define E_PLCS1		10347	/* Bad first argument for places */
#define E_PLCS2		10348	/* Bad second argument for places */
#define E_DGTS1		10349	/* Bad first argument for digits */
#define E_DGTS2		10350	/* Bad second argument for digits */
#define E_ILOG		10351	/* Bad first argument for ilog */
#define E_ILOGB		10352	/* Bad second argument for ilog */
#define E_ILOG10	10353	/* Bad argument for ilog10 */
#define E_ILOG2		10354	/* Bad argument for ilog2 */
#define E_COMB1		10355	/* Non-integer second arg for comb */
#define E_COMB2		10356	/* Too-large second arg for comb */
#define E_CTLN		10357	/* Bad argument for catalan */
#define E_BERN		10358	/* Bad argument for bern */
#define E_EULER		10359	/* Bad argument for euler */
#define E_SLEEP		10360	/* Bad argument for sleep */
#define E_TTY		10361	/* calc_tty failure */
#define E_ASSIGN1	10362	/* No-copy-to destination for octet assign */
#define E_ASSIGN2	10363	/* No-copy-from source for octet assign */
#define E_ASSIGN3	10364	/* No-change destination for octet assign */
#define E_ASSIGN4	10365	/* Non-variable destination for assign */
#define E_ASSIGN5	10366	/* No-assign-to destination for assign */
#define E_ASSIGN6	10367	/* No-assign-from source for assign */
#define E_ASSIGN7	10368	/* No-change destination for assign */
#define E_ASSIGN8	10369	/* No-type-change destination for assign */
#define E_ASSIGN9	10370	/* No-error-value destination for assign */
#define E_SWAP1		10371	/* No-copy argument for octet swap */
#define E_SWAP2		10372	/* No-assign-to-or-from argument for swap */
#define E_SWAP3		10373	/* Non-lvalue argument for swap */
#define E_QUOMOD1	10374	/* Non-lvalue argument 3 or 4 for quomod */
#define E_QUOMOD2	10375	/* Non-real-number arg 1 or 2 or bad arg 5 for quomod */
#define E_QUOMOD3	10376	/* No-assign-to argument 3 or 4 for quomod */
#define E_PREINC1	10377	/* No-copy-to or no-change argument for octet preinc */
#define E_PREINC2	10378	/* Non-variable argument for preinc */
#define E_PREINC3	10379	/* No-assign-to or no-change argument for preinc */
#define E_PREDEC1	10380	/* No-copy-to or no-change argument for octet predec */
#define E_PREDEC2	10381	/* Non-variable argument for predec */
#define E_PREDEC3	10382	/* No-assign-to or no-change argument for predec */
#define E_POSTINC1	10383	/* No-copy-to or no-change argument for octet postinc */
#define E_POSTINC2	10384	/* Non-variable argument for postinc */
#define E_POSTINC3	10385	/* No-assign-to or no-change argument for postinc */
#define E_POSTDEC1	10386	/* No-copy-to or no-change argument for octet postdec */
#define E_POSTDEC2	10387	/* Non-variable argument for postdec */
#define E_POSTDEC3	10388	/* No-assign-to or no-change argument for postdec */
#define E_INIT1		10389	/* Error-type structure for initialization */
#define E_INIT2		10390	/* No-copy-to structure for initialization */
#define E_INIT3		10391	/* Too many initializer values */
#define E_INIT4		10392	/* Attempt to initialize freed named block */
#define E_INIT5		10393	/* Bad structure type for initialization */
#define E_INIT6		10394	/* No-assign-to element for initialization */
#define E_INIT7		10395	/* No-change element for initialization */
#define E_INIT8		10396	/* No-type-change element for initialization */
#define E_INIT9		10397	/* No-error-value element for initialization */
#define E_INIT10	10398	/* No-assign-or-copy-from source for initialization */
#define E_LIST1		10399	/* No-relocate for list insert */
#define E_LIST2		10400	/* No-relocate for list delete */
#define E_LIST3		10401	/* No-relocate for list push */
#define E_LIST4		10402	/* No-relocate for list append */
#define E_LIST5		10403	/* No-relocate for list pop */
#define E_LIST6		10404	/* No-relocate for list remove */
#define E_MODIFY1	10405	/* Non-variable first argument for modify */
#define E_MODIFY2	10406	/* Non-string second argument for modify */
#define E_MODIFY3	10407	/* No-change first argument for modify */
#define E_MODIFY4	10408	/* Undefined function for modify */
#define E_MODIFY5	10409	/* Unacceptable type first argument for modify */
#define E_FPATHOPEN1	10410	/* Non-string arguments for fpathopen */
#define E_FPATHOPEN2	10411	/* Unrecognized mode for fpathopen */
#define E_LOG1		10412	/* Bad epsilon argument for log */
#define E_LOG2		10413	/* Non-numeric first argument for log */
#define E_FGETFILE1	10414	/* Non-file argument for fgetfile */
#define E_FGETFILE2	10415	/* File argument for fgetfile not open for reading */
#define E_FGETFILE3	10416	/* Unable to set file position in fgetfile */
#define E_ESTR		10417	/* Non-representable type for estr */
#define E_STRCASECMP	10418	/* Non-string argument for strcasecmp */
#define E_STRNCASECMP	10419	/* Bad argument type for strncasecmp */
#define E_ISUPPER	10420	/* Bad argument for isupper */
#define E_ISLOWER	10421	/* Bad argument for islower */
#define E_ISALNUM	10422	/* Bad argument for isalnum */
#define E_ISALPHA	10423	/* Bad argument for isalpha */
#define E_ISASCII	10424	/* Bad argument for isascii */
#define E_ISCNTRL	10425	/* Bad argument for iscntrl */
#define E_ISDIGIT	10426	/* Bad argument for isdigit */
#define E_ISGRAPH	10427	/* Bad argument for isgraph */
#define E_ISPRINT	10428	/* Bad argument for isprint */
#define E_ISPUNCT	10429	/* Bad argument for ispunct */
#define E_ISSPACE	10430	/* Bad argument for isspace */
#define E_ISXDIGIT	10431	/* Bad argument for isxdigit */

#define E__HIGHEST	10431	/* highest calc error */
#define E__COUNT		431	/* number of calc errors */
#define E_USERDEF	20000	/* base of user defined errors */

/* names of calc error values */


#endif /* !__CALCERR_H__ */
