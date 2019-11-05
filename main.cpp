
#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    map<string, string> dic;
    string l;
    while (getline(cin,l),l!= ""){
        stringstream ss(l);
        string a, b;
        ss >> b >> a;;
        dic[a] = b;
    }
    while (cin>>l){
        map<string, string>::iterator it;
        it = dic.find(l);
        if(it != dic.end())
            cout << it->second << endl;
        else
            cout << "eh" << endl;
}
}