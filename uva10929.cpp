/*整數的 奇數位相加 減 偶數位相加 若為0或11的倍數，則該數為11的倍數

  數入的數字可能會是00開頭，所以必須輸入字串變數來儲存變數，以保留開頭的0*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    while(cin>>a && a!="0"){
        long long sum[2] = {0,0};  //初始化要在迴圈內!!
        for(int i=0;i<a.length();i++){
            sum[i%2] = sum[i%2]+a[i]-'0';  //會分為"sum[0](整除)"或"sum[1](餘1)"
            //字串'0'的數值為48，所以必須扣除掉，或是直接 -'0'
        }

        if((sum[0]-sum[1])%11)
            cout<<a<<" is not a multiple of 11."<<endl;
        else
            cout<<a<<" is a multiple of 11."<<endl;

    }
    return 0;
}
