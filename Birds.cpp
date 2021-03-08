#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

int smallestVector(vector<int>& one, vector<int>& two){
    int onel = one.size();
    int twol= two.size();
    
    if(onel <= twol){
        return onel;
    }
    
    else{
        return twol;
    }
}

int largestBird(int one, int two){
    if (one >= two){
        return one;
    }
    else{
        return two;
    }
    
}


int main(){
    vector <int> one;
    vector <int> two;
    string inputln;
    string inputln2;
    stringstream ss;
    stringstream ss2;
    int birdPairs = 0;
    int sum = 0;
    getline(cin,inputln,'\n');
    
    while(inputln != "quit"){
    getline(cin,inputln2,'\n');
    int x;
    ss<<inputln;
    ss2<<inputln2;
    while(ss>>x){
        one.push_back(x);
    }
    while(ss2>>x){
        two.push_back(x);
    }
    birdPairs = smallestVector(one, two);
for(int i = 0;i < birdPairs;i++){
    sum = largestBird(one.at(i), two.at(i))+sum;
}

if(sum%7 == 0){
    cout << sum << " Eels!" << endl;
}

else{
    cout << sum << " No eels :(" << endl;
}
one.clear();
ss.clear();
ss2.clear();
two.clear();
birdPairs = 0;
sum = 0;
 getline(cin,inputln,'\n');

}
}
