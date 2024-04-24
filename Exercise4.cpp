#include <iostream>
#include <string>

using namespace std;
bool checkNumber(string str);

int main(){
    string num;
    bool satisfied=false;
    while (satisfied==false){
        
    cout<<"Enter an integer value between 5 and 10"<<endl;
    cin>>num;
    if(checkNumber(num)){
        if (stoi(num)>=5&&stoi(num)<=10){
            cout<<"Your unput value ("<<num<<") have been accepted\n";
            return 0;
        }
        else{
            cout<<"You entered "<<num<<" Please enter a number between 5 and 10\n";
        }
    }
    else {
        cout<<"Sorry, you entered an invalid number please try again\n";
    }

    }

}
//function that checks if number is integer
bool checkNumber(string str){
    for(int i=0;i<str.length();i++)
    if (isdigit(str[i])==false)
        return false;
        return true;
}