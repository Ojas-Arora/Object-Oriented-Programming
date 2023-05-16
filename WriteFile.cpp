//WriteFile
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream obj;
    obj.open("file1.cpp",ios::out);
    string ch="Ojas";
    obj<<ch;
    cout<<ch<<endl;obj<<ch;
    cout<<ch<<endl;
    obj<<ch;
    return 0;
}