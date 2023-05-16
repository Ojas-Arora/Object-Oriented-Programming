//MultipleCatchStatements
#include<iostream>
using namespace std;

void test(int x) {
    try {
        if (x > 0)
            throw x;
        else
            throw 'x';
    } catch (int x) {
        cout << "Catch a integer and that integer is:" << x<<endl;
    } catch (char x) {
        cout << "Catch a character and that character is:" << x<<endl;
    }
}

int main() {
    cout << "Testing multiple catches"<<endl;;
    test(10);
    test(0);
} 

