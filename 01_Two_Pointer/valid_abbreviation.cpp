#include<iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidAbbreviation(string word, string abbr){
    int i=0,
        j=0;

    while(i < word.length() && j < abbr.length()){
        char w_c = word[i];
        char a_c = abbr[j];

        if(isdigit(a_c)){
            if(a_c == '0'){
                return false;
            }

            int curr = 0;

            while(j < abbr.length() && isdigit(abbr[j])){
                curr = curr * 10 + (abbr[j] - '0');
                j++;
            }
            i = i + curr;
        }else{
            if(w_c != a_c){
                return false;
            }
            i++;j++;
        }
    }
    return i == word.length() && j == abbr.length();
}

int main(){
    string word = "Implementation";
    // string abbr = "I12n";
    string abbr = "I012n";
    cout<<(isValidAbbreviation(word, abbr) ? "True" : "False"); 
    return 0;
}