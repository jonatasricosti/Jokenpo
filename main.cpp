#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

enum
{
	pedra,
	papel,
	tesoura
};

int pontos1 = 0;
int pontos2 = 0;

bool game = true;
void checkWin()
{
	int player1;
    int player2 = rand() % 3;
    
    cout << "pontos1: " << pontos1 << endl;
    cout << "pontos2: " << pontos2 << endl;
    
    cout << "escolha um valor " << endl;
    cout << "0 pedra" << endl;
    cout << "1 papel" << endl;
    cout << "2 tesoura" << endl;
    cin >> player1;
    
    cout << "player1 escolheu: ";
    switch(player1)
    {
    	case pedra: cout << "pedra" << endl; break;
    	case papel: cout << "papel" << endl; break;
    	case tesoura: cout << "tesoura" << endl; break;
	}
	
	cout << "player2 escolheu: ";
    switch(player2)
    {
    	case pedra: cout << "pedra" << endl; break;
    	case papel: cout << "papel" << endl; break;
    	case tesoura: cout << "tesoura" << endl; break;
	}
    
	if(player1 == player2)
	{
		cout << "empate";
	}
	
	else if(player1 == pedra && player2 == papel)
	{
		cout << "player 2 ganhou";
		pontos2++;
	}
	
	else if(player1 == pedra && player2 == tesoura)
	{
		cout << "player 1 ganhou";
		pontos1++;
	}
	
	else if(player1 == papel && player2 == pedra)
	{
		cout << "player 1 ganhou";
		pontos1++;
	}
	
	else if(player1 == papel && player2 == tesoura)
	{
		cout << "player 2 ganhou";
		pontos2++;
	}
	
	else if(player1 == tesoura && player2 == papel)
	{
		cout << "player 1 ganhou";
		pontos1++;
	}
	
	else if(player1 == tesoura && player2 == pedra)
	{
		cout << "player 2 ganhou";
		pontos2++;
	}
	
	cout << endl;
	
	cout << "desenha continuar: " << endl;
	cout << "[1] sim" << endl;
	cout << "[2] não" << endl;
	int resposta;
	cin >> resposta;
	if(resposta == 1)
	{
		system("cls");
	}
	
	else
	{
		game = false;
	}
}

int main()
{
setlocale(LC_ALL, "portuguese");

while(game)
{
	srand(time(0));
	checkWin();
}

return 0;
}
