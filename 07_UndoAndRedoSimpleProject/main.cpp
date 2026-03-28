#include <iostream>
#include "clsMyString.h"

using namespace std;


int main()
{
	clsMyString S1;
	S1.Value = "";
	cout << "\nS1 = " << S1.Value << endl;

	S1.Value = "Mohammed";
	cout << "\nS1 = " << S1.Value << endl;
	
	S1.Value = "Mohammed2";
	cout << "\nS1 = " << S1.Value << endl;

	S1.Value = "Mohammed3";
	cout << "\nS1 = " << S1.Value << endl;

	cout << "\n\n------------ Undo -----\n\n";

	S1.Undo();
	cout << "After Undo = " << S1.Value << endl;

	S1.Undo();
	cout << "After Undo = " << S1.Value << endl;

	S1.Undo();
	cout << "After Undo = " << S1.Value << endl;

	cout << "\n\n------------ Redo -----\n\n";

	S1.Redo();
	cout << "After Redo = " << S1.Value << endl;

	S1.Redo();
	cout << "After Redo = " << S1.Value << endl;

	S1.Redo();
	cout << "After Redo = " << S1.Value << endl;


	system("pause>0");
	return 0;
}