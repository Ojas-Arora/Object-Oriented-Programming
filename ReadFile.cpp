//ReadFile
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream oj;
    oj.open("file1.cpp",ios::in);
    string ch;
    oj>>ch;
    cout<<ch<<endl;oj>>ch;
    cout<<ch<<endl;
    oj>>ch;
    return 0;
}