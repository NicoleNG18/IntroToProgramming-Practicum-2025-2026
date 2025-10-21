#include<iostream>

int main(void) {
  //Suppose that if (0,0) is in black and sq_dim = 10, then (10, 10) is also black
  
  unsigned long long sq_dim, x, y;

  std::cin >> sq_dim >> x >> y;

  bool yParity = (y % (sq_dim * 2)) > sq_dim; 
  bool xParity = (x % (sq_dim * 2)) > sq_dim; 

  // Can be done with !xParity != !yParity,
  // since clearly this is an xor operation
  // w x y
  // 0 0 0
  // 0 1 1
  // 1 0 1
  // 1 1 0
  // but is rather ugly
  bool white = xParity ? !yParity : yParity;

  std::cout << (white ? "white" : "black") << std::endl;
}
