#include "nv_core.h"
#include "nv_ip_gray.h"

void nv_gray(nv_matrix_t *gray, const nv_matrix_t *bgr)
{
	nv_gray_cpu(gray, bgr);
}


