#include <bits/stdc++.h>
using namespace std;
int main(){

double cel, kel, fah;
cin>>cel;

kel = cel+273.15;
fah = (cel*1.80)+32;

vector<double>test;
test.push_back(kel);
test.push_back(fah);

for(int i=0; i<2; i++){
	cout<<test[i]<<endl;
}



}
