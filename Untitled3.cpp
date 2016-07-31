#include <iostream>
#include <string>
#include <cstdlib>
using namespace std; 
char minc = '0', maxc = '9';
void nextpalindrome(std::string &s)
{
  int len = s.length();
  for (int n = (len+1)/2; n > 0; n--) {
    if (s[n-1] < maxc) { 
      s[len-n] = s[n-1] = s[n-1]+1;
      return;
    } else {
      s[len-n] = s[n-1] = minc;
    }
  }
  s[0]++;
  s.push_back(s[0]);
}
 
int main()
{
  int n;
  cin>>n;
  string s = "0";
  for (int i = 1; i <n; i++) {
    nextpalindrome(s);
  }
  cout << s << "\n";
  return 0;
}
