////////Random card generator////////
#include<iostream>//input and output stream
#include<conio.h>//console input and output
#include <cstdlib>//for rand() fuction
#include <ctime>//to get time from system
#include<stdlib.h>//clear screen
using namespace std;

////////variables////////
    int deck[52];//deck
    int i,y=-1,players;//variable for loops
    char ok;//for continue
    string suitnames[4]={"spades", "diamonds", "clubs", "hearts"};//suit name
    string ranknames[13]={"ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king"};//card number

////////functions prototype////////
char card_gene(int card);

////////Main function////////
int main()
{
	srand((unsigned)time(0));//a fuction that produce random number according to time

	cout<<"Welcome to the game 'Texas hold'me'"<<endl<<endl<<endl<<endl;

	cout<<"\t\t by: CAR6ON"<<endl<<endl;

	while(y=1)
	{
		cout<<"Press 'y' to continue"<<endl;
		cin>>ok;
		if(ok=='y'||'Y')
			{
				system("cls");

			break;
			}
		else
		y++;
	}


	while(y=1)
	{
		system("cls");
		cout<<"Texas hold 'em (also known as Texas holdem, hold 'em, and holdem) is one of the \nmost popular variants of the card game of poker.\n"<<endl ;//game info
		cout<<"Two cards, known as hole cards, are dealt face down to each player, and then five\n community cards are dealt face up in three stages. "<<endl;//game info
		cout<<"The player who has the best hand and has not folded by the end of all betting rounds wins"<<endl<<endl<<endl<<endl ;//game info
		cout<<endl<<endl<<endl<<endl<<"Press 'y' to start game"<<endl;
		cin>>ok;
		if(ok=='y'||'Y')
			{
				system("cls");
				for(int f=1;f<=2;f++)//cards for players
				{
					cout<<endl<<"player "<<f<<": "<<endl;
					card_gene(2);
				}
			break;
			}
		else
		y++;
	}

		while(y=1)
	{
		cout<<endl<<endl<<"Press 'y' to print table cards   :" ;
		cin>>ok;
		if(ok=='y'||'Y')
			{
				card_gene(5);//print table cards
			break;
			}
		else
		y++;
	}
getche();
}


////////card generator////////
char card_gene(int card)
{

//Creating new deck, with cards in order
    for(i=0; i<52; i++)
    {
        deck[i] = i;
    }

    //Shuffling the deck with rand() fuction:
    for(i=0; i<52; i++)
    {
        // generate a random index to swap with the card index i.
        int j = rand() % 52;
        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }


    // print the cards
    for(i=0; i<card; i++)
    {
        int suitnumber = deck[i] / 13; // 0 - 3
        int rank = deck[i] % 13;
        cout << ranknames[rank] << " of " << suitnames[suitnumber]<< "\n";
    }
}
