#include <iostream>
#include <string>
using namespace std;


int main(){
string name;
cin >> name;
while(name != "quit" ){
int age;
cin >> age;

cout << name <<","<< " you are " << (age*7)<< " in dog years" << endl;

cin >> name;
}

return 0;

}