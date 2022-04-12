#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#define totalChar 256
int nextStateCalc(char *pat, int M, int state, int x) {
   if (state < M && x == pat[state])
      return state+1;
   int ns, i;
   for (ns = state; ns > 0; ns--) {
      if (pat[ns-1] == x) {
         for (i = 0; i < ns-1; i++)
            if (pat[i] != pat[state-ns+1+i])
               break;
         if (i == ns-1)
            return ns;
      }
   }
   return 0;
}
void TFcalc(char *pat, int M, int TF[][totalChar]) {
   int state, x;
   for (state = 0; state <= M; ++state)
      for (x = 0; x < totalChar; ++x)
         TF[state][x] = nextStateCalc(pat, M, state, x);
}
void occurences(char *pat, char *txt) {
   int M = strlen(pat);
   int N = strlen(txt);
   int TF[M+1][totalChar];
   TFcalc(pat, M, TF);
   int i, state=0;
   for (i = 0; i < N; i++){
      state = TF[state][txt[i]];
      if (state == M)
         printf ("The given pattern was found at the index: %d \n",i-M+1);
   }
}

int main() {
   char *txt = "PRDITASHSAASERTWQPRDITASHSAPRDIQWERTY";
   char *pat = "PRDI";
   occurences(pat, txt);
   return 0;
}