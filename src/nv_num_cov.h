#ifndef __NV_NUM_COV_H
#define __NV_NUM_COV_H

#ifdef __cplusplus
extern "C" {
#endif

// Variance-covariance matrix
typedef struct {
	int n;
	int data_m;
	nv_matrix_t *u;        // mean
	nv_matrix_t *s;        // 
	nv_matrix_t *cov;      // covariance matrix
	nv_matrix_t *eigen_vec; // Eigenvector
	nv_matrix_t *eigen_val; // Eigenvalue (Descending order)
} nv_cov_t;

nv_cov_t *nv_cov_alloc(int n);
void nv_cov(nv_matrix_t *cov,
	nv_matrix_t *u,
	nv_matrix_t *s,
	const nv_matrix_t *data);
void nv_cov_eigen(nv_cov_t *cov, const nv_matrix_t *data);
void nv_cov_free(nv_cov_t **cov);

#ifdef __cplusplus
}
#endif


#endif
