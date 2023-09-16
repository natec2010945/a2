#ifndef NIUCSCI340ASSIGN2_ALGOS_H
#define NIUCSCI340ASSIGN2_ALGOS_H


#include <iomanip>
#include <iostream>
#include <string>
#include "assign2-algos.decl.h"

// Implement your algorithms for assignment 2 in this file.
using namespace std;

template <typename ITERATOR>
int range_sum(ITERATOR begin, ITERATOR end) {
  int sum = 0;
  for (auto z = begin; z != end; ++z){
    sum += *z;
    //lets just see what z is?
    }
  return sum;

}

template <typename ITERATOR>
double range_avg(ITERATOR begin, ITERATOR end) {
  int sum = 0;
  int counter = 0;
  double avg = 0;
  for (auto z = begin; z != end; ++z){
    sum += *z;
    counter +=1;
    //lets just see what z is?
    }
    avg = sum / counter;
  return avg;
  // XXX This has not yet been implemented. Replace this comment with code.
  //return ITERATOR.begin();
}

template <typename ITERATOR>
auto range_maxval(ITERATOR begin, ITERATOR end) {
  int max = 0;
  for (auto z = begin; z != end; ++z){
    if (*z > max){
      max = *z;
    }
    //lets just see what z is?
    }
  return  max;
}

template <typename ITERATOR>
auto range_minval(ITERATOR begin, ITERATOR end) {
  int min = 99999999;
  for (auto z = begin; z != end; ++z){
    if (*z < min){
      min = *z;
    }
    }
  return  min;
  // XXX This has not yet been implemented. Replace this comment with code.
  //#return -1;
  //return ITERATOR.begin();
}

template <typename ITERATOR>
int range_count(ITERATOR begin, ITERATOR end) {
  int counter = 0;
  for (auto z = begin; z != end; ++z){
    counter +=1;
    }
  return counter;

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
