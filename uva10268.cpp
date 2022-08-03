/*題意：請記住微分公式*/

/*
#include <stdlib.h>
#include <stdio.h>

int a[1000000];

int d(int x,int max){
  long long sum=0,exp=1;          //要記得初始化sum跟exp
  int i;
  for(i=max-1;i>=0;i--){          //根據題目提供的公式
    sum=sum+a[i]*exp*(max-i);     //由尾部n-1項開始累加sum，直到第0項
    exp = exp*x;
  }
  return sum;
}


int main(){
  int x,n;                       //x為要代入的值，n為a陣列的項數
  while(scanf("%d",&x)!=EOF){    //輸入要代入的值，賦值給x
    for(n=0;;n++){
      scanf("%d",&a[n]);         //輸入係數，賦值給a陣列的第n項
      if(getchar()=='\n'){       //如果換行，就停止(代表已經沒有細數了)
        break;
      }
    }
    printf("%d\n",d(x,n));       //輸出 題目的x值跟係數的數量
  }
  return 0;
}*/

#include <iostream>
#include <cstdlib>
using namespace std;

int a[1000000];

int d(int x,int max){
  long long sum=0,exp=1;          //要記得初始化sum跟exp
  int i;
  for(i=max-1;i>=0;i--){          //根據題目提供的公式
    sum=sum+a[i]*exp*(max-i);     //由尾部n-1項開始累加sum，直到第0項
    exp = exp*x;
  }
  return sum;
}


int main(){
    int x,n;                       //x為要代入的值，n為a陣列的項數
    while(cin>>x){
        for(n=0;;n++){
            cin>>a[n];
            if(getchar()=='\n') break;
        }
        cout<<d(x,n)<<endl;
    }

    return 0;
}
