/*題意：將數字用費式進位法表示

  f(x)=f(x-1)+f(x-2)

  ex.

  6=5+1 = 1001(fib)

  6=3+2+1 = 111(fib)

  且題目要求不可以使用連續1來表示


  解題步驟:

  建立費式數列
  讀取測資組數
  讀取正整數
  用布林preone來檢查是否有1
  遞減輸出*/

#include <iostream>
using namespace std;

int main(){
    int f[40]={0,1};           //建立費式數列
    for (int x=2;x<40;x++)
        f[x] = f[x-1] + f[x-2];
    int n,m;
    cin>>n;            //宣告並讀取測資組數
    while(n--){
        cin>>m;cout<<m<<" = ";   //讀取正整數
        bool preone = false;     //使用布林檢查"1"
        for (int k=39;k>=2;k--){
            if(m>=f[k]){           //如果m>=費式數列
                cout<<"1";             //則輸出 1
                m = m-f[k];            //m扣除f[k]再繼續
                preone = true;       //若m小於該費式數
            }else if(preone)         //則進去else if 有輸出過 1 才可輸出 0
                cout<<"0";
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}
