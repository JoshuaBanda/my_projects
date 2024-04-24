#include <iostream>
using namespace std;
//declaring methods that calculate area of triangle
double AreaOfTriangle(double base,double height);

//declaring methods that calculate area of rectangle
double AreaOfRectangle(double height,double width);

//declaring methods that calculate area of square
double AreaOfSquare(double length);
int checkSelection(string str);

int checkSelection(string str){
    int parameterCheck=0;
    
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])==false){
            if(str=="square"||str=="Square"){
                parameterCheck=1;
                break;
            }
            
            else if(str=="rectangle"||str=="Rectangle"){
                parameterCheck=2;
                break;
            }

            else if(str=="triangle"||str=="Triangle"){
                parameterCheck=3;
                break;
            }
            
            else if(str=="quiteprogram"||str=="Quiteprogram"){
                parameterCheck=4;
                break;
            }
        }
        else{
            if(stoi(str)==1)
            parameterCheck=1;
            else if(stoi(str)==2)
            parameterCheck=2;
            else if(stoi(str)==3)
            parameterCheck=3;
            else if (stoi(str)==4)
            parameterCheck=4;
        }
    }
    return parameterCheck;
}

int main(){

    bool test=true;
    while(test==true){
        
    cout<<"please select the area of the shape to calculate\n1. Square\n2. Rectangle\n3. Triangle\n"<<endl;
    string varcheck;
    cin>>varcheck;
    int selection=checkSelection(varcheck);

    if(selection==1){
        cout<<"Enter length of square\n";
        int length;
        cin>>length;
        cout<<"The area  of the square is "<<AreaOfSquare(length)<<endl;
        continue;

    }
    else if(selection==2){
        cout<<"Enter height\n";
        double height;
        cin>>height;
        cout <<"Enter width\n";
        double width;
        cin>>width;
        cout<<"The area of the rectangle is "<<AreaOfRectangle(height,width)<<endl;
        continue;
    }
    else if(selection==3){
        cout<<"Enter base\n";
        double base;
        cin>>base;
        cout <<"Enter height\n";
        double height;
        cin>>height;
        cout<<"The area of the triangle is "<<AreaOfTriangle(base,height)<<endl;
        continue;
    }
    else if(selection==4){
        test=false;
    }
    else if(selection==0){
        cout<<"The input you entered is invalid please enter valid input\n";
    }
    }
    return 0;
}

//emplemantation of Area of Triangle
double AreaOfTriangle(double base,double height){
    return 0.5*base*height;
}
//emplemantation of Area of Rectangle
double AreaOfRectangle(double height,double width){
    return height*width;
}

//emplemantation of Area of Square
double AreaOfSquare(double length){
    return length*length;
}