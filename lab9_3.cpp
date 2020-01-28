#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    ifstream source;
    source.open("C:\\Users\\Admin\\Desktop\\lab9-2562-2-PlaneCargo191\\score.txt");

    float count = 0;
    float sum;
    float mean;
    float standard1, standard2, standardf;
    float num;
    float sum2 = 0;
    string textline;

    while(getline(source,textline))
    {
        num = atof(textline.c_str());
        sum += num;
        sum2 += pow(num,2);
        count++;
    }

    mean = sum/count;

    standard1 = (1/count)*sum2;
    standard2 = standard1-pow(mean,2);
    standardf = sqrt(standard2);

    cout << "Number of data = "<< count << "\n";
    cout << "Mean = "<< mean << "\n";
    cout << "Standard deviation = "<< standardf;
}