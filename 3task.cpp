#include <iostream>
#include <cstdio>
#include <ctime>
int main() 
{
  using namespace std;
  printf("Жопа\n");
  printf("Введи время задержки в секундах: ");
  float secs;
  cin >> secs;
  clock_t delay = secs * CLOCKS_PER_SEC;
  cout << "starting\a\n";
  clock_t start = clock();
  while (clock() - start < delay )
    ;
  cout << "done \a\n";
  return 0;
}
