/*題意:一個數學函式f(n)

  將該字串所有數字相加得新數字

  重複直到只剩下一個數字稱為g(n)*/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){

    string s;
    while(cin>>s && s!="0"){
        while(s.length()>1){
            int sum = 0;
            for(int i=0;i<s.length();i++){
                sum = sum + s[i] - '0';
            }
            s = to_string(sum);
        }
        cout<<s<<endl;
    }


    return 0;
}
