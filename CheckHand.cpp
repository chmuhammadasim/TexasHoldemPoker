#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void checkPokerHand(int[], int, int);
string checkCard(int);
string checkSuit(int);
void sort(int[]);

int main()
{
	srand((unsigned)time(0));
	int card1, card2, card3, card4, card5, card6, card7, eg;
	char play;
	do{
		eg = (rand() % 4 + 1) * 100 + (rand() % 13 + 2);
		cout << "Example: " << eg << " = " << checkCard(eg % 100) << " of " << checkSuit(eg / 100) << "\n\n";
		do{
			cout << "Enter your first card(1:h 2:c 3:d 4:s)(02:2-14:A): ";
			cin >> card1;
			if(card1 / 100 < 1 || card1 / 100 > 4 || card1 % 100 < 2 || card1 % 100 > 14)
				cout << " ! Invalid Card !\n";
		}while(card1 / 100 < 1 || card1 / 100 > 4 || card1 % 100 < 2 || card1 % 100 > 14);
		do{
			cout << "Enter your second card(1:h 2:c 3:d 4:s)(02:2-14:A): ";
			cin >> card2;
			if(card2 / 100 < 1 || card2 / 100 > 4 || card2 % 100 < 2 || card2 % 100 > 14)
				cout << " ! Invalid Card !\n";
			else if(card2 == card1)
				cout << " ! Same as your first card !\n";
		}while(card2 / 100 < 1 || card2 / 100 > 4 || card2 % 100 < 2 || card2 % 100 > 14 || card2 == card1);
		do{
			cout << "Enter the tables first card(1:h 2:c 3:d 4:s)(02:2-14:A): ";
			cin >> card3;
			if(card3 / 100 < 1 || card3 / 100 > 4 || card3 % 100 < 2 || card3 % 100 > 14)
				cout << " ! Invalid Card !\n";
			else if(card3 == card1)
				cout << " ! Same as your first card !\n";
			else if(card3 == card2)
				cout << " ! Same as your second card !\n";
		}while(card3 / 100 < 1 || card3 / 100 > 4 || card3 % 100 < 2 || card3 % 100 > 14 || card3 == card2 || card3 == card1);
		do{
			cout << "Enter the tables second card(1:h 2:c 3:d 4:s)(02:2-14:A): ";
			cin >> card4;
			if(card4 / 100 < 1 || card4 / 100 > 4 || card4 % 100 < 2 || card4 % 100 > 14)
				cout << " ! Invalid Card !\n";
			else if(card4 == card1)
				cout << " ! Same as your first card !\n";
			else if(card4 == card2)
				cout << " ! Same as your second card !\n";
			else if(card4 == card3)
				cout << " ! Same as the tables first card !\n";
		}while(card4 / 100 < 1 || card4 / 100 > 4 || card4 % 100 < 2 || card4 % 100 > 14 || card4 == card3 || card4 == card2 || card4 == card1);
		do{
			cout << "Enter the tables third card(1:h 2:c 3:d 4:s)(02:2-14:A): ";
			cin >> card5;
			if(card5 / 100 < 1 || card5 / 100 > 4 || card5 % 100 < 2 || card5 % 100 > 14)
				cout << " ! Invalid Card !\n";
			else if(card5 == card1)
				cout << " ! Same as your first card !\n";
			else if(card5 == card2)
				cout << " ! Same as your second card !\n";
			else if(card5 == card3)
				cout << " ! Same as the tables first card !\n";
			else if(card5 == card4)
				cout << " ! Same as the tables second card !\n";
		}while(card5 / 100 < 1 || card5 / 100 > 4 || card5 % 100 < 2 || card5 % 100 > 14 || card5 == card4 || card5 == card3 || card5 == card2 || card5 == card1);
		do{
			cout << "Enter the tables fourth card(1:h 2:c 3:d 4:s)(02:2-14:A): ";
			cin >> card6;
			if(card6 / 100 < 1 || card6 / 100 > 4 || card6 % 100 < 2 || card6 % 100 > 14)
				cout << " ! Invalid Card !\n";
			else if(card6 == card1)
				cout << " ! Same as your first card !\n";
			else if(card6 == card2)
				cout << " ! Same as your second card !\n";
			else if(card6 == card3)
				cout << " ! Same as the tables first card !\n";
			else if(card6 == card4)
				cout << " ! Same as the tables second card !\n";
			else if(card6 == card5)
				cout << " ! Same as the tables third card !\n";
		}while(card6 / 100 < 1 || card6 / 100 > 4 || card6 % 100 < 2 || card6 % 100 > 14 || card6 == card5 || card6 == card4 || card6 == card3 || card6 == card2 || card6 == card1);
		do{
			cout << "Enter the tables fifth card(1:h 2:c 3:d 4:s)(02:2-14:A): ";
			cin >> card7;
			if(card7 / 100 < 1 || card7 / 100 > 4 || card7 % 100 < 2 || card7 % 100 > 14)
				cout << " ! Invalid Card !\n";
			else if(card7 == card1)
				cout << " ! Same as your first card !\n";
			else if(card7 == card2)
				cout << " ! Same as your second card !\n";
			else if(card7 == card3)
				cout << " ! Same as the tables first card !\n";
			else if(card7 == card4)
				cout << " ! Same as the tables second card !\n";
			else if(card7 == card5)
				cout << " ! Same as the tables third card !\n";
			else if(card7 == card6)
				cout << " ! Same as the tables fourth card !\n";
		}while(card7 / 100 < 1 || card7 / 100 > 4 || card7 % 100 < 2 || card7 % 100 > 14 || card7 == card6 || card7 == card5 || card7 == card4 || card7 == card3 || card7 == card2 || card7 == card1);
		cout << endl;
		if(card2 % 100 > card1 % 100)
		{
			int temp = card1;
			card1 = card2;
			card2 = temp;
		}
		int hand[14] = {0, 0, 0, 0, 0, 0, 0, card1, card2, card3, card4, card5, card6, card7};
		checkPokerHand(hand, card1, card2);
		switch(hand[0])
		{
			case 0: 
					cout << checkCard(hand[2]) << " high";
					if(card1 % 100 >= hand[6])
					{
						if(card1 % 100 == hand[2])
						{
							if(card2 % 100 >= hand[6])
								cout << "; " << checkCard(card2 % 100) << " kicker";
						}
						else
						{
							cout << "; " << checkCard(card1 % 100);
							if(card2 % 100 >= hand[6] && card2 % 100 != hand[2])
								cout << ", " << checkCard(card2 % 100) << " kickers";
							else
								cout << " kicker";
						}
					}
					break;
			case 1: 
					cout << "Pair of " << checkCard(hand[1]) << "s";
					if(card1 % 100 >= hand[4])
					{
						if(card1 % 100 == hand[1])
						{
							if(card2 % 100 >= hand[4])
								cout << "; " << checkCard(card2 % 100) << " kicker";
						}
						else
						{
							cout << "; " << checkCard(card1 % 100);
							if(card2 % 100 >= hand[4] && card2 % 100 != hand[1])
								cout << ", " << checkCard(card2 % 100) << " kickers";
							else
								cout << " kicker";
						}
					}
					break;
			case 2: 
					cout << "Two pair " << checkCard(hand[1]) << "s and " << checkCard(hand[2]) << "s";
					if(card1 % 100 == hand[3])
					{
						cout << "; " << checkCard(card1 % 100) << " kicker";
					}
					else if(card2 % 100 == hand[3])
					{
						cout << "; " << checkCard(card2 % 100) << " kicker";
					}
					break;
			case 3: 
					cout << "Three of a kind " << checkCard(hand[1]) << "s";
					if(card1 % 100 >= hand[3])
					{
						if(card1 % 100 == hand[1])
						{
							if(card2 % 100 >= hand[3])
								cout << "; " << checkCard(card2 % 100) << " kicker";
						}
						else
						{
							cout << "; " << checkCard(card1 % 100);
							if(card2 % 100 >= hand[3] && card2 % 100 != hand[1])
								cout << ", " << checkCard(card2 % 100) << " kickers";
							else
								cout << " kicker";
						}
					}
					break;
			case 4: 
					cout << checkCard(hand[2]) << " high straight";
					break;
			case 5: 
					cout << checkCard(hand[2] % 100) << " high flush of " << checkSuit(hand[2] / 100);
					if(hand[3])
					{
						cout << "; " << checkCard(hand[3] % 100);
						if(hand[4])
							cout << ", " << checkCard(hand[4] % 100) << " kickers";
						else
							cout << " kicker";
					}
					break;
			case 6: 
					cout << "Full house " << checkCard(hand[1]) << "s over " << checkCard(hand[2]) << "s";
					break;
			case 7: 
					cout << "Four of a kind " << checkCard(hand[1]) << "s";
					if(card1 % 100 == hand[2])
					{
						cout << "; " << checkCard(card1 % 100) << " kicker";
					}
					else if(card2 % 100 == hand[2])
					{
						cout << "; " << checkCard(card2 % 100) << " kicker";
					}
					break;
			case 8: 
					if (hand[2] % 100 == 14)
						cout << "Royal flush of " << checkSuit(hand[2] / 100);
					else
						cout << "Straight flush " << checkCard(hand[2] % 100) << " high of " << checkSuit(hand[2] / 100);
		}
		cout << "\n\nDo you want to check another poker hand? ";
		cin >> play;
		cout << endl;
	}while(play == 'y' || play == 'Y');
	return 0;
}

string checkSuit(int suit)
{
	switch(suit)
	{
		case 1:		return "Hearts";
					break;
		case 2:		return "Clubs";
					break;
		case 3:		return "Diamonds";
					break;
		case 4:		return "Spades";
					break;
		default:	return "Error";
	}
}

string checkCard(int card)
{
	switch(card)
	{
		case 2:		return "2";
					break;
		case 3:		return "3";
					break;
		case 4:		return "4";
					break;
		case 5:		return "5";
					break;
		case 6:		return "6";
					break;
		case 7:		return "7";
					break;
		case 8:		return "8";
					break;
		case 9:		return "9";
					break;
		case 10:	return "10";
					break;
		case 11:	return "J";
					break;
		case 12:	return "Q";
					break;
		case 13:	return "K";
					break;
		case 14:	return "A";
					break;
		default:	return "Error";
	}
}

void checkPokerHand(int hand[], int card1, int card2)
{//hand[14] = {poker hand, pair, high card, kicker 1, kicker 2, kicker 3, kicker 4, card1, card2, card3, card4, card5, card6, card7}; card1 = one of the player's cards; card2 = the other card;
 //card#: (1 = hearts; 2 = clubs; 3 = diamonds; 4 = spades) + (02 = 2 - 14 = A) (e.g. 205 = 5 of clubs)
	sort(hand);//by suit
	for(int i = 7; i < 14; i++)
		cout << checkCard(hand[i] % 100) << " " << checkSuit(hand[i] / 100) << "  ";
	cout << "\n\n";
	//flush = 5//straight flush = 8
	if(hand[8] / 100 == hand[13] / 100 && hand[8] % 100 == 2 && hand[9] % 100 == 3 && hand[10] % 100 == 4 && hand[11] % 100 == 5 && hand[13] % 100 == 14)
	{
		hand[0] = 8;
		hand[2] = hand[11];
		return;
	}
	else if(hand[7] / 100 == hand[12] / 100 && hand[7] % 100 == 2 && hand[8] % 100 == 3 && hand[9] % 100 == 4 && hand[10] % 100 == 5 && hand[12] % 100 == 14)
	{
		hand[0] = 8;
		hand[2] = hand[10];
		return;
	}
	else if(hand[7] / 100 == hand[13] / 100 && hand[7] % 100 == 2 && hand[8] % 100 == 3 && hand[9] % 100 == 4 && hand[10] % 100 == 5 && hand[13] % 100 == 14)
	{
		hand[0] = 8;
		hand[2] = hand[10];
		return;
	}
	else if(hand[9] / 100 == hand[13] / 100)
	{
		hand[0] = (hand[9] + 1 == hand[10] && hand[10] + 1 == hand[11] && hand[11] + 1 == hand[12] && hand[12] + 1 == hand[13] || hand[9] % 100 == 2 && hand[10] % 100 == 3 && hand[11] % 100 == 4 && hand[12] % 100 == 5 && hand[13] % 100 == 14) ? 8 : 5;
		if(hand[0] == 8 && hand[12] % 100 == 5)
			hand[2] = hand[12];
		else if(card1 / 100 == hand[9] / 100 && card2 / 100 == hand[9] / 100)
		{
			hand[3] = (card1 > hand[9] && card1 != hand[13]) ? card1 : 0;
			hand[4] = (card2 > hand[9] && card2 != hand[13]) ? card2 : 0;
			hand[2] = hand[13];
		}
		else if(card1 / 100 == hand[9] / 100)
		{
			hand[3] = (card1 > hand[9] && card1 != hand[13]) ? card1 : 0;
			hand[2] = hand[13];
		}
		else if(card2 / 100 == hand[9] / 100)
		{
			hand[3] = (card2 > hand[9] && card2 != hand[13]) ? card2 : 0;
			hand[2] = hand[13];
		}
		else
			hand[2] = hand[13];
		return;
	}
	else if(hand[8] / 100 == hand[12] / 100)
	{
		hand[0] = (hand[8] + 1 == hand[9] && hand[9] + 1 == hand[10] && hand[10] + 1 == hand[11] && hand[11] + 1 == hand[12] || hand[8] % 100 == 2 && hand[9] % 100 == 3 && hand[10] % 100 == 4 && hand[11] % 100 == 5 && hand[12] % 100 == 14) ? 8 : 5;
		if(hand[0] == 8 && hand[11] % 100 == 5)
			hand[2] = hand[11];
		else if(card1 / 100 == hand[8] / 100 && card2 / 100 == hand[8] / 100)
		{
			hand[3] = (card1 > hand[8] && card1 != hand[12]) ? card1 : 0;
			hand[4] = (card2 > hand[8] && card2 != hand[12]) ? card2 : 0;
			hand[2] = hand[12];
		}
		else if(card1 / 100 == hand[8] / 100)
		{
			hand[3] = (card1 > hand[8] && card1 != hand[12]) ? card1 : 0;
			hand[2] = hand[12];
		}
		else if(card2 / 100 == hand[8] / 100)
		{
			hand[3] = (card2 > hand[8] && card2 != hand[12]) ? card2 : 0;
			hand[2] = hand[12];
		}
		else
			hand[2] = hand[12];
		return;
	}
	else if(hand[7] / 100 == hand[11] / 100)
	{
		hand[0] = (hand[7] + 1 == hand[8] && hand[8] + 1 == hand[9] && hand[9] + 1 == hand[10] && hand[10] + 1 == hand[11] || hand[7] % 100 == 2 && hand[8] % 100 == 3 && hand[9] % 100 == 4 && hand[10] % 100 == 5 && hand[11] % 100 == 14) ? 8 : 5;
		if(hand[0] == 8 && hand[10] % 100 == 5)
			hand[2] = hand[10];
		else if(card1 / 100 == hand[7] / 100 && card2 / 100 == hand[7] / 100)
		{
			hand[3] = (card1 > hand[7] && card1 != hand[11]) ? card1 : 0;
			hand[4] = (card2 > hand[7] && card2 != hand[11]) ? card2 : 0;
			hand[2] = hand[11];
		}
		else if(card1 / 100 == hand[7] / 100)
		{
			hand[3] = (card1 > hand[7] && card1 != hand[11]) ? card1 : 0;
			hand[2] = hand[11];
		}
		else if(card2 / 100 == hand[7] / 100)
		{
			hand[3] = (card2 > hand[7] && card2 != hand[11]) ? card2 : 0;
			hand[2] = hand[11];
		}
		else
			hand[2] = hand[11];
		return;
	}//flush = 5//straight flush = 8
	//low to high card
	for(int i = 0; i < 14; i++)
		hand[i] %= 100;
	sort(hand);
	//low to high card
	//straight = 4
	for(int a = 13; a > 10; a--)
	{
		for(int b = a - 1; b > 9; b--)
		{
			for(int c = b - 1; c > 8; c--)
			{
				for(int d = c - 1; d > 7; d--)
				{
					for(int e = d - 1; e > 6; e--)
					{
						if(hand[e] + 1 == hand[d] && hand[d] + 1 == hand[c] && hand[c] + 1 == hand[b] && hand[b] + 1 == hand[a])
						{
							hand[0] = 4;
							hand[2] = hand[a];
							return;
						}
						else if(hand[e] == 2 && hand[d] == 3 && hand[c] == 4 && hand[b] == 5 && hand[a] == 14)
						{
							hand[0] = 4;
							hand[2] = 5;
							return;
						}
					}
				}
			}
		}
	}//straight = 4
	//four = 7
	if(hand[13] == hand[10])
	{
		hand[0] = 7;
		hand[1] = hand[13];
		hand[2] = hand[9];
		return;
	}
	else if(hand[12] == hand[9])
	{
		hand[0] = 7;
		hand[1] = hand[12];
		hand[2] = hand[13];
		return;
	}
	else if(hand[11] == hand[8])
	{
		hand[0] = 7;
		hand[1] = hand[11];
		hand[2] = hand[13];
		return;
	}
	else if(hand[10] == hand[7])
	{
		hand[0] = 7;
		hand[1] = hand[10];
		hand[2] = hand[13];
		return;
	}//four = 7
	//full house = 6//three = 3
	if(hand[13] == hand[11])
	{
		if(hand[10] == hand[9])
		{
			hand[0] = 6;
			hand[1] = hand[13];
			hand[2] = hand[10];
		}
		else if(hand[9] == hand[8])
		{
			hand[0] = 6;
			hand[1] = hand[13];
			hand[2] = hand[9];
		}
		else if(hand[8] == hand[7])
		{
			hand[0] = 6;
			hand[1] = hand[13];
			hand[2] = hand[8];
		}
		else
		{
			hand[0] = 3;
			hand[1] = hand[13];
			hand[2] = hand[10];
			hand[3] = hand[9];
		}
		return;
	}
	else if(hand[12] == hand[10])
	{
		if(hand[9] == hand[8])
		{
			hand[0] = 6;
			hand[1] = hand[12];
			hand[2] = hand[9];
		}
		else if(hand[8] == hand[7])
		{
			hand[0] = 6;
			hand[1] = hand[12];
			hand[2] = hand[8];
		}
		else
		{
			hand[0] = 3;
			hand[1] = hand[12];
			hand[2] = hand[13];
			hand[3] = hand[9];
		}
		return;
	}
	else if(hand[11] == hand[9])
	{
		if(hand[13] == hand[12])
		{
			hand[0] = 6;
			hand[1] = hand[11];
			hand[2] = hand[13];
		}
		else if(hand[8] == hand[7])
		{
			hand[0] = 6;
			hand[1] = hand[11];
			hand[2] = hand[8];
		}
		else
		{
			hand[0] = 3;
			hand[1] = hand[11];
			hand[2] = hand[13];
			hand[3] = hand[12];
		}
		return;
	}
	else if(hand[10] == hand[8])
	{
		if(hand[13] == hand[12])
		{
			hand[0] = 6;
			hand[1] = hand[10];
			hand[2] = hand[13];
		}
		else if(hand[12] == hand[11])
		{
			hand[0] = 6;
			hand[1] = hand[10];
			hand[2] = hand[12];
		}
		else
		{
			hand[0] = 3;
			hand[1] = hand[10];
			hand[2] = hand[13];
			hand[3] = hand[12];
		}
		return;
	}
	else if(hand[9] == hand[7])
	{
		if(hand[13] == hand[12])
		{
			hand[0] = 6;
			hand[1] = hand[9];
			hand[2] = hand[13];
		}
		else if(hand[12] == hand[11])
		{
			hand[0] = 6;
			hand[1] = hand[9];
			hand[2] = hand[12];
		}
		else if(hand[11] == hand[10])
		{
			hand[0] = 6;
			hand[1] = hand[9];
			hand[2] = hand[11];
		}
		else
		{
			hand[0] = 3;
			hand[1] = hand[9];
			hand[2] = hand[13];
			hand[3] = hand[12];
		}
		return;
	}//full house = 6//three = 3
	//two pair = 2//pair = 1
	if(hand[13] == hand[12])
	{
		if(hand[11] == hand[10])
		{
			hand[0] = 2;
			hand[1] = hand[13];
			hand[2] = hand[11];
			hand[3] = hand[9];
		}
		else if(hand[10] == hand[9])
		{
			hand[0] = 2;
			hand[1] = hand[13];
			hand[2] = hand[10];
			hand[3] = hand[11];
		}
		else if(hand[9] == hand[8])
		{
			hand[0] = 2;
			hand[1] = hand[13];
			hand[2] = hand[9];
			hand[3] = hand[11];
		}
		else if(hand[8] == hand[7])
		{
			hand[0] = 2;
			hand[1] = hand[13];
			hand[2] = hand[8];
			hand[3] = hand[11];
		}
		else
		{
			hand[0] = 1;
			hand[1] = hand[13];
			hand[2] = hand[11];
			hand[3] = hand[10];
			hand[4] = hand[9];
		}
		return;
	}
	else if(hand[12] == hand[11])
	{
		if(hand[10] == hand[9])
		{
			hand[0] = 2;
			hand[1] = hand[12];
			hand[2] = hand[10];
			hand[3] = hand[13];
		}
		else if(hand[9] == hand[8])
		{
			hand[0] = 2;
			hand[1] = hand[12];
			hand[2] = hand[9];
			hand[3] = hand[13];
		}
		else if(hand[8] == hand[7])
		{
			hand[0] = 2;
			hand[1] = hand[12];
			hand[2] = hand[8];
			hand[3] = hand[13];
		}
		else
		{
			hand[0] = 1;
			hand[1] = hand[12];
			hand[2] = hand[13];
			hand[3] = hand[10];
			hand[4] = hand[9];
		}
		return;
	}
	else if(hand[11] == hand[10])
	{
		if(hand[13] == hand[12])
		{
			hand[0] = 2;
			hand[1] = hand[11];
			hand[2] = hand[13];
			hand[3] = hand[9];
		}
		else if(hand[9] == hand[8])
		{
			hand[0] = 2;
			hand[1] = hand[11];
			hand[2] = hand[9];
			hand[3] = hand[13];
		}
		else if(hand[8] == hand[7])
		{
			hand[0] = 2;
			hand[1] = hand[11];
			hand[2] = hand[8];
			hand[3] = hand[13];
		}
		else
		{
			hand[0] = 1;
			hand[1] = hand[11];
			hand[2] = hand[13];
			hand[3] = hand[12];
			hand[4] = hand[9];
		}
		return;
	}
	else if(hand[10] == hand[9])
	{
		if(hand[13] == hand[12])
		{
			hand[0] = 2;
			hand[1] = hand[10];
			hand[2] = hand[13];
			hand[3] = hand[11];
		}
		else if(hand[12] == hand[11])
		{
			hand[0] = 2;
			hand[1] = hand[10];
			hand[2] = hand[12];
			hand[3] = hand[13];
		}
		else if(hand[8] == hand[7])
		{
			hand[0] = 2;
			hand[1] = hand[10];
			hand[2] = hand[8];
			hand[3] = hand[13];
		}
		else
		{
			hand[0] = 1;
			hand[1] = hand[10];
			hand[2] = hand[13];
			hand[3] = hand[12];
			hand[4] = hand[11];
		}
		return;
	}
	else if(hand[9] == hand[8])
	{
		if(hand[13] == hand[12])
		{
			hand[0] = 2;
			hand[1] = hand[9];
			hand[2] = hand[13];
			hand[3] = hand[11];
		}
		else if(hand[12] == hand[11])
		{
			hand[0] = 2;
			hand[1] = hand[9];
			hand[2] = hand[12];
			hand[3] = hand[13];
		}
		else if(hand[11] == hand[10])
		{
			hand[0] = 2;
			hand[1] = hand[9];
			hand[2] = hand[11];
			hand[3] = hand[13];
		}
		else
		{
			hand[0] = 1;
			hand[1] = hand[9];
			hand[2] = hand[13];
			hand[3] = hand[12];
			hand[4] = hand[11];
		}
		return;
	}
	else if(hand[8] == hand[7])
	{
		if(hand[13] == hand[12])
		{
			hand[0] = 2;
			hand[1] = hand[8];
			hand[2] = hand[13];
			hand[3] = hand[11];
		}
		else if(hand[12] == hand[11])
		{
			hand[0] = 2;
			hand[1] = hand[8];
			hand[2] = hand[12];
			hand[3] = hand[13];
		}
		else if(hand[11] == hand[10])
		{
			hand[0] = 2;
			hand[1] = hand[8];
			hand[2] = hand[11];
			hand[3] = hand[13];
		}
		else if(hand[10] == hand[9])
		{
			hand[0] = 2;
			hand[1] = hand[8];
			hand[2] = hand[10];
			hand[3] = hand[13];
		}
		else
		{
			hand[0] = 1;
			hand[1] = hand[8];
			hand[2] = hand[13];
			hand[3] = hand[12];
			hand[4] = hand[11];
		}
		return;
	}//two pair = 2//pair = 1
	//high card = 0
	hand[2] = hand[13];
	hand[3] = hand[12];
	hand[4] = hand[11];
	hand[5] = hand[10];
	hand[6] = hand[9];
	//high card = 0
}

void sort(int a[])//selection sort
{
	for(int i = 0; i < 13; i++)
	{
		int index = i;
		for(int j = i + 1; j < 14; j++)
			if(a[j] < a[index])
			{
				index = j;
			}
		int temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
}
