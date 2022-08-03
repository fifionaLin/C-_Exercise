/*解碼，將輸入的字串，改為對應鍵盤左邊第二個字元*/

#include <iostream>
#include <cstring>
#include <cstdio>             //字符計算

using namespace std;

int main(){
    string a;
    char c,s[]="`1234567890-="   //建立鍵盤表
        "qwertyuiop[]\\"             //表示\用跳脫字元\所以有兩條
        "asdfghjkl;'zxcvbnm,./";

    getline(cin,a);         //輸入整行包含空白
    for(int i=0;i<a.length();i++){
        c = tolower(a[i]);             //將英文大寫都轉換為小寫
        char *p=strchr(s,c);        //利用strchr函式找出對應表中的位置
        if (p!=0)
            cout<<*(p-2);             //依題目格式往左兩格
        else
            cout<<c;                  //若不再表中，則照原樣輸出(空白、符號)
    }
    cout<<endl;
    return 0;
}
