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
    ofstream myOutput;
    
    myInput.open("input2D_float.txt");
    if(myInput.fail()){
        cout<< "Sorry, couldn't open file"<< endl;
        exit(1);
    }
    
    int lines = 0;
    myOutput.open("output2D_float.txt", ios::app);
    while(!myInput.eof()){
        myInput >> x >> y;
        if (!myInput.eof()){
            
            cout<<"x: " << x << " " << "y: "<< y<<"   magnitude: " << magnitu(x, y)<<endl;
            myOutput <<x << " " << y << " "<< magnitu(x, y)<<endl;
            lines++;
        }
    }
    cout << lines << " lines read from file" << endl;
    myInput.close();
    myOutput.close();
        
}


float magnitu(float x,float y){
    return(sqrt(x*x+y*y));
}
