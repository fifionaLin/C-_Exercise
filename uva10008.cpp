/*題意，將輸入的字串，字母由多到少，由A到Z排列*/

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>   //單位元組字元處理

using namespace std;

int main(){
    int n;
    string s;
    int count[256]={},len=0;
    char c;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            len++;                     //每輸入一個字元，長度增加1
            count[toupper(s[i])]++;    //將字母統一為大寫
        }
    }
    while (--len){                     //先扣掉1，以免輸出出現0次的字元
        for (c='A';c<='Z';c++){          //排序
            if(count[c]==len)              //會先輸出出現最多次的字元
                cout<<c<<" "<<len<<endl;
        }
    }
    return 0;
}
