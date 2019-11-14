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
		cout << "            ÈÃÐÀ  ÍÀÏÅÐÑÒÊÈ                   " << endl;
		cout << endl;
		cout << "   $$$$$         $$$$$         $$$$$          " << endl;
		cout << "  $$$$$$$       $$$$$$$       $$$$$$$         " << endl;
		cout << " $$$$$$$$$     $$$$$$$$$     $$$$$$$$$        " << endl;
		cout << "$$$$$$$$$$$   $$$$$$$$$$$   $$$$$$$$$$$       " << endl;
		cout << endl;
		cout << "Êðó÷ó âåð÷ó, çàïóòàòü õî÷ó" << endl;
		cout << "Ãäå íàõîäèòñÿ øàð?" << endl;
		cin >> choise;
		system("cls");

		srand(time(0));
		ball = rand() % 3 + 1;
		cout << "            ØÀÐ Â " << ball << " ÍÀÏÅÐÑÒÊÅ!!!" << endl;
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
				cout << "  :) ÏÎÇÄÐÀÂËßÅÌ!!!! ÂÛ ÍÀØËÈ ØÀÐÈÊ!!!!! :)" << endl;
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
				cout << "    Ê ÑÎÆÀËÅÍÈÞ ÂÛ ÍÅ ÍÀØËÈ ØÀÐÈÊ :( " << endl;
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
				cout << "    Ê ÑÎÆÀËÅÍÈÞ ÂÛ ÍÅ ÍÀØËÈ ØÀÐÈÊ :( " << endl;
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
				cout << "  :) ÏÎÇÄÐÀÂËßÅÌ!!!! ÂÛ ÍÀØËÈ ØÀÐÈÊ!!!!! :)" << endl;
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
				cout << "    Ê ÑÎÆÀËÅÍÈÞ ÂÛ ÍÅ ÍÀØËÈ ØÀÐÈÊ :( " << endl;
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
				cout << "    Ê ÑÎÆÀËÅÍÈÞ ÂÛ ÍÅ ÍÀØËÈ ØÀÐÈÊ :( " << endl;
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
				cout << "  :) ÏÎÇÄÐÀÂËßÅÌ!!!! ÂÛ ÍÀØËÈ ØÀÐÈÊ!!!!! :)" << endl;
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
				cout << "    Ê ÑÎÆÀËÅÍÈÞ ÂÛ ÍÅ ÍÀØËÈ ØÀÐÈÊ :( " << endl;
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
				cout << "    Ê ÑÎÆÀËÅÍÈÞ ÂÛ ÍÅ ÍÀØËÈ ØÀÐÈÊ :( " << endl;
				cout << endl;
				cout << endl;
			}
		}

		else {
			cout << "âû ñëîìàëè ïðîãðàììó..." << endl;
		}
		cout << "Äëÿ âûõîäà âûáåðåòå 4" << endl;
		cout << endl;
		system("pause");
		system("cls");
	} while (choise < 4);
	return 0;
}
