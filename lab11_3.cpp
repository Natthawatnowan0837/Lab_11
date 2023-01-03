#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0,mean = 0,x = 0,mew = 0;
    string textline;

    ifstream source("score.txt") ;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        count++;
        x += pow(atof(textline.c_str()),2) ;
    }
    mean = sum/count;
    mew = sqrt((x/count)-(mean*mean));
    

    cout << "Number of data = " <<count <<endl;
    cout << setprecision(3);
    cout << "Mean = " <<sum/count <<endl;
    cout << "Standard deviation = " <<mew;
}