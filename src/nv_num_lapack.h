#ifndef __NV_NUM_LAPACK_H
#define __NV_NUM_LAPACK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "f2c.h"
#include "clapack/clapack.h"

// ilaenv
integer ilaenv_(integer *, char *, char *, integer *, integer *, 
	integer *, integer *);

#ifdef __cplusplus
}
#endif
#endif
