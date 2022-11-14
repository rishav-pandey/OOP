#include <bits/stdc++.h>
using namespace std;
 
// Function to store binary Representation
void binary_conversion(string &s, int m) {
  while (m) {
    int tmp = m % 2;
    s += tmp + '0';
    m = m / 2;
  }
  reverse(s.begin(), s.end());
  cout<<"BINARY REPRESENTATION: "<<s<<endl;
}
 
// Function to find ith character
int find_character(int n, int m, int i) {
 
  string s;
 
  // Function to change decimal to binary
  binary_conversion(s, m);
 
  string s1 = "";
  for (int x = 0; x < n; x++) {
    for (int y = 0; y < s.length(); y++) {
      if (s[y] == '1')
        s1 += "10";
      else
        s1 += "01";     
    }
    // Assign s1 string in s string
    s = s1;
    s1 = "";
  }
  cout<<"AFTER ITERATION REPRESENTATION: "<<s<<endl;
  cout<<"CHARACTER AT POSITION "<<i<<" IS: "<<s[i] - '0';
  return 0;
}
 
// Driver Function
int main() {
  int m , n, i;
  cout<<"ENTER DECIMAL: ";
  cin>>m;
  cout<<"ENTER NO. OF ITERARTIONS: ";
  cin>>n;
  cout<<"ENTER THE POSITION AT WHICH YOU WANT THE CHARACTER: ";
  cin>>i;
  find_character(n, m, i);
  return 0;
}
mmmmbbbbbbbbbbbbbbbbbbbbbb                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 -