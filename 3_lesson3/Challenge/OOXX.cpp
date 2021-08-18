#include <iostream>
using namespace std;

bool UpdateBoard(int[][3], int, int, int);
int CheckWinner(int[][3]);
void OutputBoard(int[][3]);

int main(){
	
	cout << "Welcome!!" << endl << endl;

	////////////////////
	// Initialization //
	////////////////////
	// 1. 宣告遊戲盤面。
	// 2. 在螢幕上顯示初始的遊戲盤面。
	int board[3][3] = { {0,0,0}, {0,0,0}, {0,0,0} };
	OutputBoard(board);

	////////////////
	// Game Start //
	////////////////
	// 1. 在螢幕上顯示現在是誰的回合，並請玩家輸入要下的位置。（可用座標）
	// 2. 處理完家的輸入，並判定是否合法。
	//   2.1. 若合法，則輸出盤面。
	//   2.2. 若不合法，則請玩家重新輸入。
	// 3. 確認遊戲是否結束
	//   3.1. 若結束，則輸出贏家。
	//   3.2. 若未結束，則更換玩家順序。
	//
	// Note 1. 宣告一個變數來儲存現在是誰的回合。（此處使用int，1是player1，2是player2；也可使用char[]或string）
	//
	// Question 1: 若不想只玩一局，而是想玩很多局，該如何更改程式結構呢？
	// Question 2: 若想要更改盤面大小，或是讓三個玩家一起玩（OX->ABC），該如何更改程式設計呢？

	int playerIndex = 1;

	while (true){
		if (playerIndex == 1){
			cout << "Turn Player1 (O), please input two integer. (row, col)   ";
		} else if (playerIndex == 2){
			cout << "Turn Player2 (X), please input two integer. (row, col)   ";
		}
		// 儲存玩家輸入的座標
		int row, col;
		cin >> row >> col;
		// 判定玩家輸入是否正確
		bool isValid = UpdateBoard(board, row, col, playerIndex);
		if (!isValid){
			cout << "Invalid input!" << endl;
			continue;
		}
		// 輸出盤面
		OutputBoard(board);
		// 確認遊戲是否結束
		int winner = CheckWinner(board);
		if (winner == 1){
			cout << "Player1 (O) win!!!" << endl;
			break;
		} else if (winner == 2){
			cout << "Player2 (X) win!!!" << endl;
			break;
		} else if (winner == 3){
			cout << "Drew!" << endl;
			break;
		}
		// 交換玩家順序
		if (playerIndex == 1){
			playerIndex = 2;
		} else if (playerIndex == 2){
			playerIndex = 1;
		}
	}
	return 0;
}

bool UpdateBoard(int board[][3], int row, int col, int playerIndex){
	// 確認輸入的座標是正確的
	if (row < 0 || row > 2 || col < 0 || col > 2){
		return false;
	}
	// 確認該座標還沒有被填寫過
	if (board[row][col] != 0){
		return false;
	}
	// 更新盤面
	board[row][col] = playerIndex;

	return true;
}

int CheckWinner(int board[][3]){
	int winner = 3;
	// 確認橫排
	for (int row = 0 ; row < 3 ; row++){
		if (board[row][0] != 0 && board[row][0] == board[row][1] && board[row][0] == board[row][2]){
			return board[row][0];
		}
	}
	// 確認直排
	for (int col = 0 ; col < 3 ; col++){
		if (board[0][col] != 0 && board[0][col] == board[1][col] && board[0][col] == board[2][col]){
			return board[0][col];
		}
	}
	// 確認對角線
	if (board[0][0] != 0 && board[0][0] == board[1][1] && board[0][0] == board[2][2]){
		return board[0][0];
	}
	if (board[2][0] != 0 && board[2][0] == board[1][1] && board[2][0] == board[0][2]){
		return board[2][0];
	}

	// 確認和局
	for (int row = 0 ; row < 3 ; row++){
		for (int col = 0; col < 3 ; col++){
			if (board[row][col] == 0){
				winner = 0;
			}
		}
	}

	return winner;
}

void OutputBoard(int board[][3]){
	// 輸出盤面
	cout << endl;
	cout << "   0 1 2 " << endl;
	cout << "  +-+-+-+" << endl;
	for (int row = 0; row < 3; row++){
		cout << row << " |";
		for (int col = 0 ; col < 3 ; col++){
			if (board[row][col] == 0){
				cout << " |";
			} else if (board[row][col] == 1){
				cout << "O|";
			} else if (board[row][col] == 2){
				cout << "X|";
			}
		}
		cout << endl;
		cout << "  +-+-+-+" << endl;
	}
	cout << endl;
}
