#include <iostream>
using namespace std;
int main()
{
int res;
int num;
int mult;

cout << "Quanto deseja multiplicar?\n"<< endl;
cin >> num;

mult =0;
while(mult<=10)
{
res= num*mult;

cout <<num<<"X"<<mult<<"="<<res<< endl;
mult++;
}
}