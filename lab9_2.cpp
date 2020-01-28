#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream source;
    source.open("C:\\Users\\Admin\\Desktop\\lab9-2562-2-PlaneCargo191\\cheerbook.txt");
    ofstream copy;
    copy.open("C:\\Users\\Admin\\Desktop\\lab9-2562-2-PlaneCargo191\\cheerbook_copy.txt");
    copy << "-------------------- SOTUS ---------------------\n";
    string textline;
    bool text;
    text = getline(source, textline);
    while(text)
    {
        copy << textline << "\n";
        text = getline(source, textline);
    }
    copy << "-------------------- SOTUS ---------------------";
    source.close();
    copy.close();
}