#ifndef __interaction_strength_H__
#define __interaction_strength_H__

#include <lapacke.h>
#include "alloc_array.h"

int get_interaction_strength(double *amps,
			     const double *q0,
			     const double *q1s,
			     const double *q2s,
			     const Array1D *weights,
			     const double *fc2,
			     const double *fc3,
			     const double *masses,
			     const Array1D *p2s,
			     const Array1D *s2p,
			     const Array2D *multi,
			     const ShortestVecs *svecs,
			     const double cutoff_frequency,
			     const int is_symmetrize_fc3_q,
			     const int r2q_TI_index,
			     const double symprec);
int get_triplet_interaction_strength(double *amps,
				     const double *fc3,
				     const double *q_vecs,
				     const lapack_complex_double* eigvecs,
				     const double *freqs,
				     const double *masses,
				     const Array1D *p2s,
				     const Array1D *s2p,
				     const Array2D *multi,
				     const ShortestVecs *svecs,
				     const Array1D *band_indices,
				     const double cutoff_frequency,
				     const int is_symmetrize_fc3_q,
				     const int r2q_TI_index,
				     const double symprec);
int get_fc3_realspace(lapack_complex_double* fc3_real,
		      const ShortestVecs * svecs,
		      const Array2D * multi,
		      const double* q_triplet,
		      const Array1D * s2p,
		      const lapack_complex_double* fc3_rec,
		      const double symprec);
int get_fc3_reciprocal(lapack_complex_double* fc3_q,
		       const ShortestVecs * svecs,
		       const Array2D * multi,
		       const DArray2D * q,
		       const Array1D * p2s,
		       const Array1D * s2p,
		       const double* fc3,
		       const int r2q_TI_index,
		       const double symprec);
int get_fc3_sum_in_supercell(lapack_complex_double fc3_q[3][3][3],
			     const int i1,
			     const int i2,
			     const int i3,
			     const ShortestVecs * svecs,
			     const Array2D * multi,
			     const DArray2D * q,
			     const Array1D * s2p,
			     const Array1D * p2s,
			     const double* fc3,
			     const int r2q_TI_index,
			     const double symprec);
double get_sum_in_primivie(const lapack_complex_double *fc3,
			   const lapack_complex_double *e1,
			   const lapack_complex_double *e2,
			   const lapack_complex_double *e3,
			   const int num_atom,
			   const double *m);

#endif
