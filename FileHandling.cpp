//FileHandling
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream o1;
    o1.open("ojas.txt",ios::in);
    if(!o1){
        cout<<"File does not exist"<<endl;
    }
    else
    {
        cout<<"The file is opened"<<endl;
        o1<<"My name is Ojas Arora";
    }
    o1.close();
    return 0;
}