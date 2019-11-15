#include <iostream>
#include <ctime>    //lib for 	srand(time(0)); and rand();
#include <stdlib.h> //lib for system("cls");
using namespace std;

int main()
{
	setlocale(0, "");

	int thimble1 = 1;
	int thimble2 = 2;
	int thimble3 = 3;
	int ball;
	int choise;
	int exit;

	do
	{
		cout << "               Thimblerig                   " << endl;
		cout << endl;
		cout << "   $$$$$         $$$$$         $$$$$          " << endl;
		cout << "  $$$$$$$       $$$$$$$       $$$$$$$         " << endl;
		cout << " $$$$$$$$$     $$$$$$$$$     $$$$$$$$$        " << endl;
		cout << "$$$$$$$$$$$   $$$$$$$$$$$   $$$$$$$$$$$       " << endl;
		cout << endl;
		cout << endl;
		cout << "What thimble is the ball in?" << endl;
		cin >> choise;
		system("cls");

		srand(time(0));
		ball = rand() % 3 + 1;
		cout << "           BALL IN " << ball << " THIMBLE!!!" << endl;
		cout << endl;
		cout << endl;
		if (ball == 1) {
			if (choise == 1) {
				cout << "   $$$$$                                      " << endl;
				cout << "  $$$$$$$                                     " << endl;
				cout << " $$$$$$$$$       $$$$$         $$$$$          " << endl;
				cout << "$$$$$$$$$$$     $$$$$$$       $$$$$$$         " << endl;
				cout << "               $$$$$$$$$     $$$$$$$$$        " << endl;
				cout << "    $$        $$$$$$$$$$$   $$$$$$$$$$$       " << endl;
				cout << endl;
				cout << endl;
				cout << "   :) CONGRATULATIONS YOU WON!!!!! :)" << endl;
				cout << endl;
				cout << endl;
			}
			else if (choise == 2) {
				cout << "   $$$$$                                      " << endl;
				cout << "  $$$$$$$                                     " << endl;
				cout << " $$$$$$$$$       $$$$$         $$$$$          " << endl;
				cout << "$$$$$$$$$$$     $$$$$$$       $$$$$$$         " << endl;
				cout << "               $$$$$$$$$     $$$$$$$$$        " << endl;
				cout << "              $$$$$$$$$$$   $$$$$$$$$$$       " << endl;
				cout << endl;
				cout << endl;
				cout << "      YOU DO NOT FIND THE BALL :( " << endl;
				cout << endl;
				cout << endl;
			}
			else {
				cout << "   $$$$$                                      " << endl;
				cout << "  $$$$$$$                                     " << endl;
				cout << " $$$$$$$$$       $$$$$         $$$$$          " << endl;
				cout << "$$$$$$$$$$$     $$$$$$$       $$$$$$$         " << endl;
				cout << "               $$$$$$$$$     $$$$$$$$$        " << endl;
				cout << "              $$$$$$$$$$$   $$$$$$$$$$$       " << endl;
				cout << endl;
				cout << endl;
				cout << "      YOU DO NOT FIND THE BALL :( " << endl;
				cout << endl;
				cout << endl;
			}
		}

		else if (ball == 2) {
			if (choise == 2) {
				cout << "                 $$$$$                        " << endl;
				cout << "                $$$$$$$                       " << endl;
				cout << "   $$$$$       $$$$$$$$$       $$$$$          " << endl;
				cout << "  $$$$$$$     $$$$$$$$$$$     $$$$$$$         " << endl;
				cout << " $$$$$$$$$                   $$$$$$$$$        " << endl;
				cout << "$$$$$$$$$$$        $$       $$$$$$$$$$$       " << endl;
				cout << endl;
				cout << endl;
				cout << "   :) CONGRATULATIONS YOU WON!!!!! :)" << endl;
				cout << endl;
				cout << endl;
			}
			else if (choise == 1) {
				cout << "                 $$$$$                        " << endl;
				cout << "                $$$$$$$                       " << endl;
				cout << "   $$$$$       $$$$$$$$$       $$$$$          " << endl;
				cout << "  $$$$$$$     $$$$$$$$$$$     $$$$$$$         " << endl;
				cout << " $$$$$$$$$                   $$$$$$$$$        " << endl;
				cout << "$$$$$$$$$$$                 $$$$$$$$$$$       " << endl;
				cout << endl;
				cout << endl;
				cout << "      YOU DO NOT FIND THE BALL :( " << endl;
				cout << endl;
				cout << endl;
			}
			else {
				cout << "                 $$$$$                        " << endl;
				cout << "                $$$$$$$                       " << endl;
				cout << "   $$$$$       $$$$$$$$$       $$$$$          " << endl;
				cout << "  $$$$$$$     $$$$$$$$$$$     $$$$$$$         " << endl;
				cout << " $$$$$$$$$                   $$$$$$$$$        " << endl;
				cout << "$$$$$$$$$$$                 $$$$$$$$$$$       " << endl;
				cout << endl;
				cout << endl;
				cout << "      YOU DO NOT FIND THE BALL :( " << endl;
				cout << endl;
				cout << endl;
			}

		}
		else if (ball == 3) {
			if (choise == 3) {
				cout << "                               $$$$$          " << endl;
				cout << "                              $$$$$$$         " << endl;
				cout << "   $$$$$         $$$$$       $$$$$$$$$        " << endl;
				cout << "  $$$$$$$       $$$$$$$     $$$$$$$$$$$       " << endl;
				cout << " $$$$$$$$$     $$$$$$$$$                      " << endl;
				cout << "$$$$$$$$$$$   $$$$$$$$$$$       $$            " << endl;
				cout << endl;
				cout << endl;
				cout << "   :) CONGRATULATIONS YOU WON!!!!! :)" << endl;
				cout << endl;
				cout << endl;
			}
			else if (choise == 1) {
				cout << "                               $$$$$          " << endl;
				cout << "                              $$$$$$$         " << endl;
				cout << "   $$$$$         $$$$$       $$$$$$$$$        " << endl;
				cout << "  $$$$$$$       $$$$$$$     $$$$$$$$$$$       " << endl;
				cout << " $$$$$$$$$     $$$$$$$$$                      " << endl;
				cout << "$$$$$$$$$$$   $$$$$$$$$$$                     " << endl;
				cout << endl;
				cout << endl;
				cout << "      YOU DO NOT FIND THE BALL :( " << endl;
				cout << endl;
				cout << endl;
			}
			else {
				cout << "                               $$$$$          " << endl;
				cout << "                              $$$$$$$         " << endl;
				cout << "   $$$$$         $$$$$       $$$$$$$$$        " << endl;
				cout << "  $$$$$$$       $$$$$$$     $$$$$$$$$$$       " << endl;
				cout << " $$$$$$$$$     $$$$$$$$$                      " << endl;
				cout << "$$$$$$$$$$$   $$$$$$$$$$$                     " << endl;
				cout << endl;
				cout << endl;
				cout << "      YOU DO NOT FIND THE BALL :( " << endl;
				cout << endl;
				cout << endl;
			}
		}

		else {
			cout << "You are destroy my programm... pls tell me about this (skype: avb-89) Thanks ^^" << endl;
		}
		cout << "To exit, press 4" << endl;
		cout << endl;
		system("pause");
		system("cls");
	} while (choise < 4);
	return 0;
}
