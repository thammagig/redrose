// basic file operations
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;
float magnitu(float,float);

int main ()
{
    
    float x,y;
    
    ifstream myInput;
    myInput.open("input2D_float.txt");
    if(myInput.fail()){
        cout<< "Sorry, couldn't open file"<< endl;
        exit(1);
    }
    
    int lines = 0;
    while(!myInput.eof()){
        myInput >> x >> y;
        if (!myInput.eof()){
            lines++;
            cout<<"x: " << x << " " << "y: "<< y<<"   magnitude: " << magnitu(x, y)<<endl;
        }
    }
    cout << lines << " lines read from file" << endl;
    
    myInput.close();
        
}


float magnitu(float x,float y){
    return(sqrt(x*x+y*y));
}
