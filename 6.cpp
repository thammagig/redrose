// basic file operations
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;
template <class T>
T magnitu(T x,T y){
    return(sqrt(x*x+y*y));
}
template <class T>
T magnitu(T x,T y,T z){
    return(sqrt(x*x+y*y+z*z));
}

int countlines() {
    ifstream f1;
    char c;
    int numlines;
    f1.open("input2D_int.txt");
    numlines = 0;
    f1.get(c);
    while (f1) {
        while (f1 && c != '\n') {
            f1.get(c);
        }
        numlines = numlines + 1;
        f1.get(c);
    }
    
    return numlines;
}





int main ()
{
    int line,filelines;
    filelines = countlines();
    cout<< "Please enter an number of line";
    cin>> line;
    if (line<=0){
        cout<<"Number of line must more than 0"<<endl;
    }else if (line > filelines){
        cout<<"Warning!!! The number you inputed morn than the nember of line"<<endl;
        ifstream myInput;
        myInput.open("input2D_int.txt");
        if(myInput.fail()){
            cout<< "Sorry, couldn't open file"<< endl;
            exit(1);
        }
        int lines = 0;
        double x,y;
        while(!myInput.eof()){
            myInput >> x >> y;
            if (!myInput.eof()){
                lines++;
                cout<<"x: " << x << " " << "y: "<< y <<"   magnitude: " << magnitu(x, y)<<endl;
            }
        }
        myInput.close();
    }
    else{
        ifstream myInput;
        myInput.open("input2D_int.txt");
        if(myInput.fail()){
            cout<< "Sorry, couldn't open file"<< endl;
            exit(1);
        }
        double x,y;
        for(int i; i<line; i++){
            myInput >> x >> y;
            cout<<"x: " << x << " " << "y: "<< y <<"   magnitude: " << magnitu(x, y)<<endl;
        }
        myInput.close();
    }
}

