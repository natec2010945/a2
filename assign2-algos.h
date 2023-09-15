#ifndef NIUCSCI340ASSIGN2_ALGOS_H
#define NIUCSCI340ASSIGN2_ALGOS_H

#warning These programs will not work properly until you have implemented the template functions in assign2-algos.h. Once you have, remove this #warning line from the file. In the beginning, there will likely be more warnings and errors after this because of the missing implementations.

#include <iomanip>
#include <iostream>
#include <string>
#include "assign2-algos.decl.h"

// Implement your algorithms for assignment 2 in this file.


template <typename ITERATOR>
int range_sum(ITERATOR begin, ITERATOR end) {
  // XXX This has not yet been implemented. Replace this comment with code.
  return -1;
}

template <typename ITERATOR>
double range_avg(ITERATOR begin, ITERATOR end) {
  // XXX This has not yet been implemented. Replace this comment with code.
  return -1;
}

template <typename ITERATOR>
int range_maxval(ITERATOR begin, ITERATOR end) {
  // XXX This has not yet been implemented. Replace this comment with code.
  return -1;
}

template <typename ITERATOR>
int range_minval(ITERATOR begin, ITERATOR end) {
  // XXX This has not yet been implemented. Replace this comment with code.
  return -1;
}

template <typename ITERATOR>
int range_count(ITERATOR begin, ITERATOR end) {
  return -1;
  // XXX This has not yet been implemented. Replace this comment with code.
}

template <typename ITERATOR>
void print_range(std::ostream & ost, ITERATOR begin, ITERATOR end, const std::string &pre, const std::string &sep, const std::string &post, int width) {
  // XXX This has not yet been implemented. Replace this comment with code.
}

template<typename ITERATOR, typename RANDOM_ACCESS>
void histogram(ITERATOR begin, ITERATOR end, RANDOM_ACCESS & nums, int N, int divisor) {
  // XXX This has not yet been implemented. Replace this comment with code.
}


template <typename ITERATOR, typename T>
iter_token_info<ITERATOR> get_next_token_strict(ITERATOR begin, ITERATOR end, T delim) {
  // XXX This has not yet been implemented. Replace this comment with code.
}

template <typename ITERATOR, typename T>
iter_token_info<ITERATOR> get_next_token_greedy(ITERATOR begin, ITERATOR end, T delim) {
  // XXX This has not yet been implemented. Replace this comment with code.
}


#endif /*NIUCSCI340ASSIGN2_ALGOS_H*/
