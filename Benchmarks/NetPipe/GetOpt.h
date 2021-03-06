/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */
#ifndef GETOPT_H
#define GETOPT_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define LPTSTR char *
#define LPCTSTR char *
#define _tcsicmp strcmp
#define _ttoi atoi
#define _tcstod(a,b) atof(a)
#define stricmp strcmp
#define bool int
#define true 1
#define false 0

bool GetOpt(int *argc, char ***argv, char * flag);
bool GetOptInt(int *argc, char ***argv, char * flag, int *n);
bool GetOptLong(int *argc, char ***argv, char * flag, long *n);
bool GetOptDouble(int *argc, char ***argv, char * flag, double *d);
bool GetOptString(int *argc, char ***argv, char * flag, char *str);

#endif
