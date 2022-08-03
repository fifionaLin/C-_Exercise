/*題意:將該字串，第一個"改為``，第二個"改為''*/

#include <iostream>
using namespace std;

int main(){
  char c,k=0;                 //k計算"的個數
  while(cin.get(c)){          //輸入整個字串包含符號空白
    if(c!='"') cout<<c;   
    else{                     //如果遇到"
      k=k+1;                  //遇到就+1算個數
      if (k%2==0) cout<<"''"; //除以2餘0即為偶數，為排在後面的"
      else cout<<"``";        //反之就是前面的"
    }
  }
  return 0;
}
