#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void calcVowels(string str);

void calcVowels(string str){
    int count;
    for(int i=0;i<str.length();i++){
        count=i;
    }
    cout<<count+1;
}

int main(){
    string fileData;

    ifstream myfile;
    myfile.open("Exercise6.txt",ios::in);
    if(myfile.is_open()){
        while(getline(myfile,fileData)){
            cout<<fileData<<endl;
        }
    myfile.close();
    }
    else
    cout<<"unable to connect";

    calcVowels(fileData);

    ofstream afile;
    afile.open("Exercise6.txt",ios::ate);
    afile<<"  hi";
    myfile.close();
    
}