#include <iostream>
#include <vector>
using namespace std;


bool xinput(int x){
    bool odd = true;
    int eCheck = (x%2);
        if(x == 1){
            cout << "Too small" << endl;
            odd = false;
        }
        else if(eCheck == 0){
            cout << "N is even"<< endl;
            odd = false;
        }
    return odd;
        
}

void ArrayPrint(vector<vector<char>>& v){
  for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j]<<endl;
}
}

void vectorPopulate(vector<vector<char>>& v, int x ){
int med = (x-1)/2;
int end = x-1;
v[0][0] = '+';
v[0][end] = '+';
v[end][0] = '+';
v[end][end] ='+';
v[med][med] = 'X';
for(int i=1;i< end;i++){
    v[0][i] = '-';
    v[end][i] = '-';
}
for(int i=1;i< end;i++){
    v[i][0] = '|';
    v[i][end] = '|';
}
for(int i=1;i< end;i++){
    if(i != med){
    v[i][i] = '\'';
    }
}
for(int i=(end-1);i> 1;i--){
    if(i != med){
    v[i][i] = '/';
    }
}

}
int main(){
      int x = 0;
        cin >> x ;
    while (x >= 0){
        if(xinput(x)){
        vectorPopulate(door,x);
        vectorPrint(door);
        door.clear();
        }
        cin >> x ;
    }
        return 0;
}
