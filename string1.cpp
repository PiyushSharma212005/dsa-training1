#include<iostream>
using namespace std;
bool ispalindrome(string s){
    int start = 0;
    int end = s.length()-1;
    while(start<end){
       if(s[start]!=s[end]){
        return false;
       }
       start++;
       end--;
    }
    return true;

}
int main(){
    string str;
    cout<<" enter the string ";
    cin>>str;
    if(ispalindrome(str)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}