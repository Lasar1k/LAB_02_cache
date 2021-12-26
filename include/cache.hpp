// Copyright 2021 Lasar1k alf.ivan2002@gmail.com

#ifndef INCLUDE_CACHE_HPP_
#define INCLUDE_CACHE_HPP_

#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>
#include <stdexcept>
#include <vector>

struct Stat {
  int experimentNumber_front;
  int experimentNumber_reverse;
  int experimentNumber_random;
  int bufferSize;
  double duration_front;
  double duration_reverse;
  double duration_random;
};

class Cachech {
 private:
  unsigned int seed;
  int read_value;
  int sizes[5];
  int* arr;
  void create_array(int num_size);

 public:
  Stat statistics[5];
  Cachech();
  void front_diagnostics(int num_size);
  void reverse_diagnostics(int num_size);
  void random_diagnostics(int num_size);
  void formatting_output();
  void full_diagnostics();
    ~Cachech();
};

#endif  // INCLUDE_CACHE_HPP_
