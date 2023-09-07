#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int input;
	int min = 1;
	int max = 10;
	
	int random = rand() % (max - min + 1) + min;
	int attempts = 0;
	
	cout<<"\n Lets start the Random Number Guessing game ! "<<endl;
	cout<<"\n You have to choose a random number between "<<min<<" and "<<max;
		
	do
	{
		cout<<"\n Enter guessing number = ";
		cin>>input;
		attempts++;
		if(input == random)
		{
			cout<<"\n Yeahh ! You have guessed the correct random number "<<random<<" in "<<attempts<<" attempts. ";
			break;
		}
		else if(input<random)
		{
				cout<<"\n This was a low guess. Try Again ! ";		
		}
		else
		{
			cout<<"\n This was a high guess . Try Again ! ";
		}
		
	}while(true);



return 0;

}

