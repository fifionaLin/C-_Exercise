/*一數列，將所有相隔兩數絕對值差，放入一新數列

  1,4,2,3 間格差3,2,1，恰為{1,2,3}，則該數列可稱為Jolly*/

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        set<int> tank;
        int a;
        cin>>a;
        for(int i=1;i<n;i++){
            int b;
            cin>>b;
            int d=(b-a<0?a-b:b-a);

            if(d && d<n)tank.insert(d);
            a=b;
        }
        if(tank.size()==n-1)cout<<"Jolly";
        else  cout<<"Not jolly";
        cout << endl;
    }
    return 0;
}
