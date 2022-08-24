#include <iostream>
#include <cstdio>

inline const char *const BoolToString(bool b)
{
  return b ? "true" : "false";
}

int main()
{
  int sum = 0, val = 1;
  while (val <= 10)
  {
    sum += val;
    ++val;
  }
  std::printf("Sum of 1 to 10 inclusive is %d\n", sum);

  int *p1 = &sum, *p2 = p1;
  std::printf("*p1 equals *p2 is %s\n", BoolToString(p1 == p2));

  // 打印指针地址
  // std::printf("*p1 addrs is:%d, *p2 addrs is:$%d\n", p1, p2);

  p2++; // 指针指向下一个地址
  // std::printf("*p1 addrs is:%d, *(p2++) addrs is:$%d\n", p1, p2);

  // 指针指向下一个地址是否相等
  std::printf("*p1 equals *(p2 + 1) is %s\n", BoolToString(p1 == p2));
  // 指针指向下一个地址值是否相等
  std::printf("*p1 value is %d, *(p2 + 1) value is %d\n", *p1, *p2);
  return 0;
}
