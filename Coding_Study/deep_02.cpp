#include <iostream>

using namespace std;

int main() {
	int king[2] = {}, queen[2] = {}, rook[2] = {},
		bishop[2] = {}, knight[2] = {}, pawn[2] = {};

	cin >> king[0] >> queen[0] >> rook[0] >>
		bishop[0] >> knight[0] >> pawn[0];

	//king[1] = 1 - king[0];
	//queen[1] = 1 - queen[0];
	//rook[1] = 2 - rook[0];
	//bishop[1] = 2 - bishop[0];
	//knight[1] = 2 - knight[0];
	//pawn[1] = 8 - pawn[0];


	while (true) {
		if (king[0] < 1) {
			king[1]++;
			king[0]++;
		}
		else if (king[0] > 1) {
			king[1]--;
			king[0]--;
		}
		else {
			break;
		}
	}

	while (true) {
		if (queen[0] < 1) {
			queen[1]++;
			queen[0]++;
		}
		else if (queen[0] > 1) {
			queen[1]--;
			queen[0]--;
		}
		else {
			break;
		}
	}
	
	while (true) {
		if (rook[0] < 2) {
			rook[1]++;
			rook[0]++;
		}
		else if (rook[0] > 2) {
			rook[1]--;
			rook[0]--;
		}
		else {
			break;
		}
	}

	while (true) {
		if (bishop[0] < 2) {
			bishop[1]++;
			bishop[0]++;
		}
		else if (bishop[0] > 2) {
			bishop[1]--;
			bishop[0]--;
		}
		else {
			break;
		}
	}

	while (true) {
		if (knight[0] < 2) {
			knight[1]++;
			knight[0]++;
		}
		else if (knight[0] > 2) {
			knight[1]--;
			knight[0]--;
		}
		else {
			break;
		}
	}

	while (true) {
		if (pawn[0] < 8) {
			pawn[1]++;
			pawn[0]++;
		}
		else if (pawn[0] > 8) {
			pawn[1]--;
			pawn[0]--;
		}
		else {
			break;
		}
	}

	cout << king[1] << " " << queen[1] << " " << rook[1] << " " 
		<< bishop[1] << " " << knight[1] << " " << pawn[1];

	return 0;
}