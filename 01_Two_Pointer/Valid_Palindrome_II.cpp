#include<iostream>
#include<string>
using namespace std;

bool palindromeHelper(int i, int j, string s){
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        i++; j--;
    }
    return true;
}
bool isPalindrome(string s){
    int i = 0, j = s.length()-1;
    
    while(i < j){
        if(s[i] != s[j]){
            return palindromeHelper(i+1, j, s) || palindromeHelper(i, j-1, s);
        }else{
            i++; j--;
        }
    }
    return true;
}

int main(){
    // string s = "abbxa";
    string s = "abcda";
    cout<<isPalindrome(s)<<endl;
    return 0;
}