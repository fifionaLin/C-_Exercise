/*題意：

  以N為基底進位的數字R，已知R為(N-1)的倍數，求N最小值。

  2<=N<=62，N的字母依序為0-9,A-Z,a-z。

  解法：

  將輸入的字串轉換為數值(2~62)

  比較該字串中數值最大的數，以此為最小起測值

  計算n進位中，num的真實數值對(n-1)的餘數rsd*/


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string b="0123456789"                            //宣告 b 紀錄進位字母
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    string num;                                      //宣告 num 為測資輸入的內容
    while (cin>>num){
        for (int i = 0; i < num.size() ; i++){         //檢測長度，將字元替換為0-61
            num[i]=b.find(num[i]);
            num[i]=max(0,(int)num[i]);
        }
        int n = *max_element(num.begin(),num.end())+1; //將num中最大字元+1作為最小起測n值
        n = max(2,n);
        for (;n<=62;n++){
            int rsd = 0;
            for (int k=0;k<num.size();k++){              //計算n進位中，num的真實數值對(n-1)的餘數rsd
                rsd = rsd*n+num[k];
                rsd = rsd%(n-1);
            }
            if(rsd==0)                                  //若餘數為0則找到答案
                break;
        }

        if (n<=62)
            cout<<n<<endl;
        else
            cout<<"such number is impossible!"<<endl;

    }
    return 0;
}
