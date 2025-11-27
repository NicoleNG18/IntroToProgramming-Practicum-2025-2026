
void clear(int *arr, int size) {
  for(int i = 0; i < size; i ++) {
    arr[i] = 0;
  }
}

long inputArraySizeInRange(long a, long b) {
  long n;

  do {
    std::cout << "Enter array count in range [" << a << ", "<< b << "]: ";
    std::cin >> n;
  }while(n < a || n > b);

  return n;
}

//overloading nz pozwolen li e
void fillArrayChar(char* arr, int c) {
  for(int i = 0; i < c; i ++) {
    std::cin >> arr[i];
  }
}

void fillArrayInt(int* arr, int c) {
  for(int i = 0; i < c; i ++) {
    std::cin >> arr[i];
  }
}

//Returns array length
int intInputArrayInRange(int* arr, int a, int b) {
  int n = inputArraySizeInRange(a, b);
  fillArrayInt(arr, n);
  return n;
}

void printArray(int* arr, int c) {
  std::cout << "[";
  for(int i = 0; i < c; i ++) {
    std::cout << " " << arr[i];
  }
  std::cout << " ]" << std::endl;
}
