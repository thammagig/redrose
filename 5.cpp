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


int main ()
{
    ifstream myInput;
    myInput.open("input2D_int.txt");
    if(myInput.fail()){
        cout<< "Sorry, couldn't open file"<< endl;
        exit(1);
    }
    ifstream myInput2;
    myInput2.open("input3D_int.txt");
    if(myInput2.fail()){
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
    

    int lines2 = 0;
    unsigned a,b,c;
    while(!myInput2.eof()){
        myInput2 >> a >> b>>c;
        if (!myInput2.eof()){
            lines2++;
            cout<<"x: " << a << " " << "y: "<< b<< " z: "<< c <<"   magnitude: " << magnitu(a, b,c)<<endl;
        }
    }
    
    myInput.close();
    myInput2.close();

}

