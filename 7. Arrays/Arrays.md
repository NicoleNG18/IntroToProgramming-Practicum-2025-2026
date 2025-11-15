Масиви
------------------------

1. Операции върху **ЦЕЛИ** масиви **НЕ** се извършват директно; елементите се обхождат един по един с цикъл, като върху всеки се прилагат необходимите действия.

```cpp
    int a[4], b[4] = {1, 3, 5};
    a = b;  // недопустима операция
```

2. Принтиране

```cpp
void printArray(int arr[],size_t size)
{
  for(size_t i = 0;i < size;i++)
  {
     std::cout << arr[i] << " ";
  }
    std::cout<< std::endl;
}
```

3. Въвеждане

```cpp
void getArray(int arr[],size_t size)
{
  for(size_t i = 0;i < size;i++)
  {
     std::cin >> arr[i];
  }
}
```

4. Примерна програма, която се въвежда масив от потребителя, принтира елементите и сумата им. След това всичките му елементи се умножават по себе си и се принтират новополучените им стойности и новата сума.

```cpp
#include <iostream>

const size_t ARRAY_MAX_SIZE = 256;

// освен масива във функции подаваме и размерът му
void getArray(int arr[],size_t size)
{
  for(size_t i = 0;i < size;i++)
  {
     std::cin >> arr[i];
  }
}

void printArray(int arr[],size_t size)
{
  for(size_t i = 0;i < size;i++)
  {
     std::cout << arr[i] << " ";
  }
    std::cout<< std::endl;
}

void multiplyArrElements(int arr[],size_t size)
{
  for(size_t i = 0;i < size;i++)
  {
     arr[i]*= arr[i];
  }
}

int getElementsSum(int arr[],size_t size)
{
  int sum = 0;
  
  for(size_t i = 0;i < size;i++)
  {
     sum += arr[i];
  }
  
  return sum;
}

int main()
{
 // !!!  - беззнаков целочислен тип
 size_t sizeOfArray;

 // валидация 
 do
 {
     std::cout << "Enter array size: " << std::endl;
     std::cin >> sizeOfArray;
 } while(sizeOfArray < 1 || sizeOfArray > 256);

 // тук стои или константа, или хардкодната стойност - примерно: int arr[5]
 int arr[ARRAY_MAX_SIZE];
 
 std::cout << "Enter " << sizeOfArray << " elements: " << std::endl;
 getArray(arr,sizeOfArray);
 
 std::cout << "Elements before multiplying: " << std::endl;
 printArray(arr,sizeOfArray);
 
 std::cout << "Elements sum before multiplying: " << std::endl;
 int firstSum = getElementsSum(arr,sizeOfArray);
 std::cout << firstSum << std::endl;
 
 multiplyArrElements(arr,sizeOfArray);
 
 std::cout << "Elements after multiplying: " << std::endl;
 printArray(arr,sizeOfArray);
 
 std::cout << "Elements sum after multiplying: " << std::endl;
 int secondSum = getElementsSum(arr,sizeOfArray);
 std::cout << secondSum << std::endl;
}
```

5. Примерна програма със символен низ (char масив)

```cpp
#include <iostream>

const size_t ARRAY_MAX_SIZE = 128;

void makeUppercase(char str[])
{
     for (int i = 0; str[i] != '\0'; i++) 
     {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

size_t getCharrArrLength(char str[])
{
    size_t length = 0;
    while (str[length] != '\0')
       length++;
    
    return length;
}

int main() {
  // слагаме плюс 1 заради терминиращата нула - '\0'
  char str[ARRAY_MAX_SIZE + 1];
  
  std::cout << "Enter word: ";
  // чете до въвеждане на спейс
  std::cin >> str;
    
  makeUppercase(str);
   
  std::cout << "Uppercase: " << str <<  std::endl;

  std::cout << "Length: " << getCharrArrLength(str) <<  std::endl;
}
```





