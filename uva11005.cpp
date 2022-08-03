/*Cheapest Base
  題意： 當我們想要把一些字印在紙上時，我們需要墨水。但不是每個字都需要相同的墨水，例如'W'，'M'，'8'要比'i'，'c'，'1'來的貴。這個問題主要是討論在不同進位制下需要的不同花費。

  數字可以被表示成不同的進位制，當我們把數字表示成n進位時（2 <= n <= 36），我們需要用到字串'0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'的前 n 項。

  每個字元都有他獨特的價錢，以一個1~128的整數表示，對於每一個數字，他被印出的價錢是組成他的數字被印出的價錢和。現在給你一個數字，請計算他用哪些進位輸出最省錢。（註：輸出的數最左方不會有沒有意義的 0）



  解題步驟:

  分別求出x以三十六進位制表示所需要的價錢，並將其存在陣列中

  從陣列中找出最小價格

  從陣列中找出最小價格對應的進位制*/

#include <iostream>

const int MXBASE=36;               //使用限定符 設置變數
using namespace std;

int main(){
    int m;
    cin>>m;                          //輸入測資組數
    for (int k=1;k<=m;k++){
        if (k>1)                       //在每組開頭前先印一個空白列
            cout<<endl;
        cout<<"Case "<<k<<":"<<endl;
        int coc[MXBASE];
        for (int i=0;i<MXBASE;i++)     //讀入價格對應表至coc陣列
            cin>>coc[i];
        int n;
        cin>>n;                        //輸入該組測資個數
        while(n--){
            int x;
            cin>>x;

            int cob[MXBASE+1];           //cob陣列填寫二至三十六進位制所花費價格
            for (int i=2;i<=MXBASE;i++){
                int t =x;                  //將x值賦給t，以防x被改變
                cob[i]=0;
                do{
                    cob[i]= cob[i]+coc[t%i]; //每分解出一位數，就查詢此位數的價格
                    t = t/i;                   //加總至cob[i]
                }while(t!=0);
            }

            int min=cob[2];              //找最小值
            for (int i=3;i<=MXBASE;i++){ //跟其他元素比較，更新最小值
                if (cob[i]<min) min=cob[i];
            }
            cout<<"Cheapest base(s) "
                "for number "<<x<<":";
            for (int i=2;i<=MXBASE;i++){ //再跑一次陣列找出最小值的進位制
                if (cob[i]==min) cout<<" "<<i;
            }
            cout<<endl;
        }
    }
    return 0;
}
