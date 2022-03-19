// T: abceabcdabceabcd
// P: abcd

// T: abcabaabc
// P: ab$ab

void checkMatch(string testString,string patString, int testLen, int patLen){
}

#include <iostream>
using namespace std;

int main(){
    string testString ="abcdabcdabcdabcd";
    string patString ="abcd";
    int pass=0;
    int testLen = testString.length();
    int patLen = patString.length();
    int position = patLen;
    for(int i=0; i < patLen; i++){
        for(int j=0; j< patLen;j++){
            if( testString [i] == patString [j]){
                pass++;
            }
        }
    }
    return 0;
}