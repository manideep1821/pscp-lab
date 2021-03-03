#include <iostream>
#include <string>
using namespace std;

int main()
{
	char p1, p2;

		cout << "Player 1, please enter your choice [P/R/S]" << endl;
		cin >> p1;
		cout << "Player 2, please enter your choice [P/R/S]" << endl;
		cin >> p2;

		if(p1 == p2)
			cout << "Nobody wins" << endl;
		if( (p1 == 'P' && p2 == 'p') || (p1 == 'p' && p2 == 'P') )
			cout << "Nobody wins" << endl;
		if( (p1 == 'S' && p2 == 's') || (p1 == 'S' && p2 == 's') )
			cout << "Nobody wins" << endl;
		if( (p1 == 'R' && p2 == 'r') || (p1 == 'R' && p2 == 'r') )
			cout << "Nobody wins" << endl;

		if((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r'))
			cout << "Paper covers rock, Player 1 win" << endl;
		if((p1 == 'R' || p1 == 'r') && (p2 == 'P' || p2 == 'p'))
			cout << "Paper covers rock, Player 2 win" << endl;

		if((p1 == 'P' || p1 == 'p') && (p2 == 'S' || p2 == 's'))
			cout << "Scissors cut paper, Player 2 win" << endl;
		if((p1 == 'S' || p1 == 's') && (p2 == 'P' || p2 == 'p'))
			cout << "Scissors cut paper, Player 1 win" << endl;

		if((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's'))
			cout << "Rock breaks scissors, Player 1 win" << endl;
		if((p1 == 'S' || p1 == 's') && (p2 == 'R' || p2 == 'r'))
			cout << "Rock breaks scissors, Player 1 win" << endl;



	return 0;
}

