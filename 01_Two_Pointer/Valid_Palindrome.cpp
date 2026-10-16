#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isAlnum(char ch){
    if(tolower(ch) >= '0' && tolower(ch)<='9' || tolower(ch) >='a' && tolower(ch) <= 'z'){
        return true;
    }
    return false;
}

bool validPalindrome(string s){
    int i = 0,
        j = s.length()-1;
    
        while (i<j){
            if(!isAlnum(s[i])){
                i++;
                continue;
            }
            if(!isAlnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
}

int main(){
    // string str = "A man, a plan, a canal: Panama";
    string str = "A man, a plan, a canal: Panam";
    cout<<(validPalindrome(str)? "true": "false")<<endl;
    return 0;
}
