#include "display.h"
#include "case.h"
#include "pawn.h"

using namespace std;

void Display::displayBoard(Board board){
    const int size = board.getSize();

    for(int i(0); i < size; i++){
		cout<< "   "<<i;
	}

	cout<<endl;
	cout<<endl;

    for (vector<Case> line: board.getVi()){
        cout << " | ";
        for (Case cell: line){
            if(cell.hasPawn()){
                cout << cell.getPawn().getSymbol();
            }
            else {
                cout << " ";
            }
            cout << " | ";
        }
        cout << endl;
    }

	// for(int i=0; i<size; i++){
	// 	cout<< " | ";
	// 	for(int j=0; j<size; j++){
    //         Case cell = vi[i][j];
    //         if(cell.hasPawn()){
    //             cout << cell.getPawn().getSymbol();
    //         }
    //         else {
    //             cout << " ";
    //         }
	// 		cout<< " | ";
	// 	}
	// 	cout<<endl;
	// }
}