#include "numeric/numeric.hpp"
#include <iostream>

int main(){
  int result = numeric::add_one(1);
  std::cout << "1 + 1 = " << result << std::endl;
}