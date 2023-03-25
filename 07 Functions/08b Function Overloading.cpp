#include <iostream>
#include <string.h>

float min(float x, float y){
    return (x < y) ? x : y;
}

float min(float x, float y, float z){
    return x < y ? (x < z ? x : z) : (y < z ? y : z);
}

int main() {
  float f = min(4.45F, 1.23f);
  float f2 = min(4.45f, 1.23f, 0.19f);

  std::cout << f << std::endl;
  std::cout << f2 << std::endl;
}