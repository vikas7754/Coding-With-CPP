// Palindrome string

#include <iostream>
using namespace std;
int main(){
    int flag = 0;
    string s;
    cout << "Enter String: ";
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1]){
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        cout << s << " is a Palindrome String." << endl;
    }
    else{
        cout << s << " is not a Palindrome String." << endl;
    }
    return 0;
}