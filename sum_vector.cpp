#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
#include <stdlib.h>


void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_vector problem_setup, N=%lld \n", N);

   // seed the random function with current time for more consistently random outputs
   srand48(time(nullptr));

   // fill the array A[] with random values from 0 to N - 1
   for(int64_t i = 0; i < N; i++){
      A[i] = lrand48() % N;
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_vector perform_sum, N=%lld \n", N);

   int64_t indx = A[0];
   int64_t sum = 0;


   for(int64_t i = 0; i < N; i++){
      sum += A[indx];
      indx = A[indx];
   }

   return sum;
}

