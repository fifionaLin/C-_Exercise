/*題意：

  IBM (International Beautiful Machines)公司發明了一種小玩意兒叫做「愛的算命機」。這台機器會回答你是否非常渴望愛情。這機器運作的情形是：請你輸入一僅含0和1的字串（稱為S），機器自己則定義一僅含0和1的字串（稱為L，Love的意思）。然後機器不斷的用S去減L（當然是2進位的減法），如果最後可以得到S=L，代表S是用Love做成的。如果最後L>S，代表S不是用Love做成的。
  舉例說明：假設S="11011"，L="11"。如果我們不斷的從S減去L，我們可以得到：11011、11000、10101、10010、1111、1100、1001、110、11。所以我們得到L了，也就是S是用Love做的。由於愛的算命機的某些限制，字串不可以有以0為開頭的，也就是說"0010101"、"01110101"、"011111"這些字串都是不合法的。另外，只有一個位元的字串也是不合法的。

  解題概念：

  轉換成10進位
  算出最大公因數
  輸出最大公因數>1的結果*/

#include <iostream>
using namespace std;

int strtoint(char s[31]){     //二進位轉十進位
    int ans=0;
    for (int i=0;i<30;i++){
        if (s[i]=='\0')break;     //二進位開頭不能為0
        ans=ans*2;                //每進位一次 *2
        if (s[i]=='1')ans=ans+1;  //遇到1就加1
    }
    return ans;                 //回傳十進位的值
}

int gcd(int x,int y){             //輾轉相除法求最大公因數
    if(x<y){
        int tmp=x;
        x=y;
        y=tmp;
    }
    if(y==0) return x;        //輾轉相除法
    else return gcd(y,x%y);
}

int main(){
    int a,t=0;                  //a為測資的組數，t為#編號
    char b[31],c[31];           //測資的兩個二進位數字
    cin>>a;
    while(a--){
        cin>>b>>c;
        int b2 = strtoint(b);     //將二進位數字轉換為十進位，且轉為int
        int c2 = strtoint(c);
        if (gcd(b2,c2)>1)         //將兩個十進位(int)代入輾轉相除法，且不能=1(二進位表示法的的限制條件)
            cout<<"Pair #"<<++t<<": All you need is love!\n";
        else
            cout<<"Pair #"<<++t<<": Love is not all you need!\n";
    }
    return 0;
}


