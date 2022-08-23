#include <cstdio>

int main()
{
  int sum = 0, val = 1;
  while (val <= 10)
  {
    sum += val;
    ++val;
  }
  std::printf("Sum of 1 to 10 inclusive is %d\n", sum);
  return 0;
}
