#include <iostream>
#include "exceptions.h"

void try_big_alloc() {
  try {
    const long big = 1022222222222222LL;
    long* ptr = new long[big];
  } catch(std::bad_alloc& err) {
    std::cout << "\n\n Bad Allocation---" << err.what() << "\n\n\n";

  }
}

void try_int_alloc() {
  try {
    throw 30;
  } catch(int) {
    std::cout << "int caught" << std::endl;
  }
}