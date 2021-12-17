#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    float count=0;
    float sum=0;
    float mean;
    float sd;
    float sumsd;
    string t;
    ifstream data("score.txt");
    while(getline(data,t))
    {
        sum += atof(t.c_str());
        sumsd+= pow(atof(t.c_str()),2);
        count++;
        
    }

    cout << "Number of data = "<< count<<"\n";

    cout << setprecision(3);
    
    mean=sum/count;
  
    sd=sqrt((1/count*sumsd)-pow(mean,2));
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sd;
    data.close();
    return 0;
}