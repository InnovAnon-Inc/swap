#ifndef _SWAP_H_
#define _SWAP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h>

#include <glitter.h>

typedef struct {
   void *restrict data;
   size_t esz;
   size_t n;
} array_t;

void *index_array (array_t const *restrict array, size_t i)
__attribute__ ((leaf, nonnull (1), pure, returns_nonnull, warn_unused_result)) ;

void init_array (array_t *restrict array,
	void *restrict data, size_t esz, size_t n)
__attribute__ ((leaf, nonnull (1, 2), nothrow)) ;

int alloc_array (array_t *restrict array,
	size_t esz, size_t n)
__attribute__ ((nonnull (1), nothrow, warn_unused_result)) ;

int realloc_array (array_t *restrict array, size_t n)
__attribute__ ((nonnull (1), nothrow, warn_unused_result)) ;

void get_array (array_t const *restrict array, size_t i,
   void *restrict e)
__attribute__ ((nonnull (1, 3), nothrow)) ;

void gets_array (array_t const *restrict array, size_t i,
   void *restrict e, size_t n)
__attribute__ ((nonnull (1, 3), nothrow)) ;

void set_array (array_t const *restrict array, size_t i,
	void const *restrict e)
__attribute__ ((nonnull (1, 3), nothrow)) ;

void sets_array (array_t const *restrict array, size_t i,
	void const *restrict e, size_t n)
__attribute__ ((nonnull (1, 3), nothrow)) ;

void free_array (array_t const *restrict array)
__attribute__ ((leaf, nonnull (1), nothrow)) ;

void cp_array (array_t const *restrict array, size_t i, size_t j)
__attribute__ ((nonnull (1), nothrow)) ;

/* src and dest should not overlap */
void cps_array (array_t const *restrict array,
	size_t i, size_t j, size_t n)
__attribute__ ((nonnull (1), nothrow)) ;

void mvs_array (array_t const *restrict array,
	size_t i, size_t j, size_t n)
__attribute__ ((nonnull (1), nothrow)) ;

/* http://www.cs.utsa.edu/~wagner/CS2213/swap/swap.html */

void swap_array (array_t const *restrict array,
	size_t i, size_t j, void *restrict tmp)
__attribute__ ((nonnull (1, 4), nothrow)) ;

void swaps_array (array_t const *restrict array,
	size_t i, size_t j, size_t n, void *restrict tmp)
__attribute__ ((nonnull (1, 5), nothrow)) ;

/* src and dest should not overlap ? */
void swap_array2 (array_t const *restrict array,
	size_t i, size_t j)
__attribute__ ((nonnull (1), nothrow)) ;

/* src and dest should not overlap ? */
void swaps_array2 (array_t const *restrict array,
	size_t i, size_t j, size_t n)
__attribute__ ((nonnull (1), nothrow)) ;

#ifdef __cplusplus
}
#endif

#endif /* _SWAP_H_ */