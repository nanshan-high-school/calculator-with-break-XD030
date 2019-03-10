#include <iostream>
using namespace std;
int main() {
  int num = 0, num2 = 0, i = 0;
  string a;
  while(true)
  {
    cout << "請輸入數字";
    cin >> a;
    if((int)a[i] == '+')
    {
      num2 += num;
      continue;
    }
    else if((int)a[i] == '-')
    {
      num2 -= num;
      continue;
    }
    else if((int)a[i] == '*')
    {
      num2 *= num;
      continue;
    }
    else if((int)a[i] == '/')
    {
      num2 /= num;
      continue;
    }
    if((int)a[i] == '=')
    {
    cout << "加總是:" << num2;
    break;
    }
  }
}
