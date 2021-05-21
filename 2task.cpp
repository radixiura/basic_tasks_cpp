//Privedenie chisla vo 2uu i 3uu stepen'

#include <iostream>

using namespace std;

struct T_Pair
{
  int a;
  int b;
};

T_Pair return_pait(int x)
{
  T_Pair result;

  result.a = x*x;
  result.b = x*x*x;

  return result;
}

int main()
{
  int x;
  cin >> x;

  T_Pair pair_ = return_pait(x);
  cout << pair_.a << ' ' << pair_.b << '\n';

  return 0;
}
