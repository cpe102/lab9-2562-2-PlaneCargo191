#include<iostream>
#include<string>
using namespace std;

int main(){
	int i=0, a=0, b=0, c=0, d=0, f=0;
	int count[5] = {};
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do
	{
		i++;
		cout << "Student ["<<i<<"]: ";
		cin >> grade;

		if(grade=="0"){
			i--;
			break;
		}else{
		if(grade=="A")
		{
			count[0]++;
		}else{
			if(grade=="B")
			{
				count[1]++;
			}else{
				if(grade=="C")
				{
					count[2]++;
				}else{
					if(grade=="D")
					{
						count[3]++;
					}else{
						if(grade=="F")
						{
							count[4]++;
					
						}else{
							cout << "Wrong input. Please input again.\n";
							i--;
						}
					}
				}
			}
		}
		}
	}while(true);
	
	cout << "In total "<< i <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";
	return 0;
}