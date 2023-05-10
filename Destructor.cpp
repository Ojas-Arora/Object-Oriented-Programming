//Destructor
 #include<iostream>
using namespace std;
int count=0;
class alpha{
    public:
    alpha(){
        count++;
        cout<<"No of objects created"<<count<<endl;
        }
        ~alpha(){
            cout<<"No of objects destroyed"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"Enter main"<<endl;
    alpha A1,A2,A3,A4;
    {
        cout<<"Enter block1"<<endl;
       alpha A5; 
    }
    {
        cout<<"Enter block2"<<endl;
        alpha A6;
    }
    cout<<"Renter block1"<<endl;
    return 0;
}