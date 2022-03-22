#include <bits/stdc++.h>
using namespace std;
int search(string pat, string txt)
{
 int M = pat.size();
 int N = txt.size();
 int i = 0;
 while (i <= N - M)
 {
 int j;
 for (j = 0; j < M; j++)
 if (txt[i + j] != pat[j])
 break;
 if (j == M)
 {
 return i;
 i = i + M;
 }
 else if (j == 0)
 i = i + 1;
 else
 i = i + j; // slide the pattern by j
 }
 return 0;
}
int main()
{
 string txt = "ABCEABCDABCEABCD";
 cout << "check for regex BC$ABCD where $ can be any character" << endl;
 string pat1 = "BC";
 string pat2 = "ABCD";
 int i1 = search(pat1, txt);
  int i2 = search(pat2, txt)+ pat2.length()-1;
 if (i1 < i2)
 {
 cout << "Pattern found at index " << i1 << " to " << i2;
 }
 return 0;
}