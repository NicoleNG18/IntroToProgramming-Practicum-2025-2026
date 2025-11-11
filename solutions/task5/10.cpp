#include<iostream>

#define SQRT_ITERATIONS 5

//Newton approximation
double approximateSqrt(int n) {

  if(n < 0) {
    std::cout << "Not defined in R" << std::endl;
    return -1;
  }
  
  if(n == 0) return 0.0;

  //  Initial guess
  double o = 1.0;

  if(n >= 1) {
    o = n / (2.0);
  }

  //Approximate
  for(int i = 0; i < SQRT_ITERATIONS; i ++ ){
    o = .5f * (o + n / o);
  }

  //std::cout << "n: " << n << " sqrt: " << o << std::endl;
  return o;
}

int sqDist(
  int x1,
  int y1,
  int x2,
  int y2
) {
  return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

double dist(
  int x1,
  int y1,
  int x2,
  int y2
) {
  return approximateSqrt(sqDist(x1, y1, x2, y2));
}

double calcPerimeter(
  int x1,
  int y1,
  int x2,
  int y2,
  int x3,
  int y3
) {
  double p = 0;
  p += dist(x1, y1, x2, y2);
  p += dist(x1, y1, x3, y3);
  p += dist(x2, y2, x3, y3);
  return p;
}

int main(void) {
  std::cout << calcPerimeter(0, 0, 3, 0, 0, 4) << std::endl;
  std::cout << calcPerimeter(1, 1, 4, 5, 6, 2) << std::endl;
  return 0;
}
