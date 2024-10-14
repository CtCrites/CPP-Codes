//Vector Calculator
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int D=00;
	int O3 = 00, O4 = 00;
	while (D == 00)
	{
		cout << "Welcome to the vector calculator.\n";
		cout << "This will be able to solve two and three dimensional vector arithmatic.\n\n";
		cout << "Are your vectors 2 or 3 dimensional?\n";
		cin >> D;
	}
	//2-Dimensional Operations
	while (D == 2)
	{
		int O2;
		cout << " What Vector operation would you like to compute?\n";
		cout << "1. Dot Product\n2. Cross Product\n3. Magnitude\n4. Projection\n";
		cin >> O2;
		//Dot Product
		while (D == 2 && O2 == 1)
		{
			int A = 'A', B = 'B', X = 'X', Y = 'Y';
			int Answer;
			cout << "<A, B> • < X, Y>\n\n";
			cout << "Please enter values for A, B, X, and Y respectively:\n\n";
			cin >> A;
			cin >> B;
			cin >> X;
			cin >> Y;
			Answer = (A * X) + (B * Y);
			cout << "The Dot Product, <" << A << ", " << B << "> • <" << X << ", " << Y << "> = " << Answer << ".\n\n";
			D = 00;
		}
		//Cross Product
		while (D == 2 && O2 == 2)
		{
			int A = 'A', B = 'B', X = 'X', Y = 'Y';
			int P1;
			cout << "<A, B> X <X, Y>\nPutting these vectors into a matrix allows for the determinant to be taken\n";
			cout << "|  i  j  |\n";
			cout << "|  " << 'A' << "  " << 'B' << "  | \n";
			cout << "|  " << 'X' << "  " << 'Y' << "  | \n";
			cout << " Please enter values for A, B, X, and Y respectively:\n\n";
			cin >> A;
			cin >> B;
			cin >> X;
			cin >> Y;
			cout << "\n\n";
			cout << "|  i  j  |\n";
			cout << "|  " << A << "  " << B << "  | \n";
			cout << "|  " << X << "  " << Y << "  | \n\n";
			P1 = (A * Y) - (B * X);
			cout << "<" << A << ", " << B << "> X <" << X << ", " << Y << "> = " << P1 << ".\n\n";
			D = 00;
		}
		//Magnitude
		while (D == 2 && O2 == 3)
		{
			int A = 'A', B = 'B';
			float mag, pyth;
			cout << "<A, B>\nPlease enter values for A and B respectively:\n\n";
			cin >> A;
			cin >> B;
			pyth = (A ^ 2 + B ^ 2);
			mag = sqrt(pyth);
			cout << "The magnitude of the vector <" << A << ", " << B << "> is " << mag << ".\n\n";
			D = 00;
		}
		//Projection
		while (D == 2 && O2 == 4)
		{
			int A, B, X, Y;
			float umag_sqrd, dot, k, P1, P2;
			cout << "\nProjection of v onto u\nGiven by the vectors u = <A, B> and v = <X, Y>\n";
			cout << "Please enter values for A, B, X, and Y respectively:\n\n";
			cin >> A;
			cin >> B;
			cin >> X;
			cin >> Y;
			dot = (A * X) + (B * Y);
			umag_sqrd = (A * A) + (B * B);
			k = (dot / umag_sqrd);
			P1 = k * A;
			P2 = k * B;
			cout << "\nThe projection of vector v onto vector u is: <" << P1 << ", " << P2 << "> ";
			D = 00;
		}
	}
	//3-Dimensional Operations
	while (D == 3 && O3 == 00)
	{
		cout << "What Vector operation would you like to compute?\n";
		cout << "1. Dot Product\n2. Cross Product\n3. Magnitude\n4. Projection\n";
		cin >> O3;
		//Dot Product
		while (D == 3 && O3 == 1)
		{
			int A = 'A', B = 'B', C = 'C', X = 'X', Y = 'Y', Z = 'Z';
			int Answer;
			cout << "\n<A, B, C> • <X, Y, Z>\n\n";
			cout << "Please enter values for A, B, C, X, Y, and Z respectively:\n\n";
			cin >> A;
			cin >> B;
			cin >> C;
			cin >> X;
			cin >> Y;
			cin >> Z;
			Answer = (A * X) + (B * Y) + (C * Z);
			cout << "The Dot Product, <" << A << ", " << B << ", " << C << "> • <" << X << ", " << Y << ", " << Z << "> = " << Answer << ".\n\n";
			D = 00;
		}
		//Cross Product
		while (D == 3 && O3 == 2)
		{
			int A = 'A', B = 'B', C = 'C', X = 'X', Y = 'Y', Z = 'Z';
			int P1, P2, P3;
			cout << "\n<A, B, C> X <X, Y, Z>\nPutting these vectors into a matrix allows for the determinant to be taken\n";
			cout << "|  i  j  k  |\n";
			cout << "|  " << 'A' << "  " << 'B' << "  " << 'C' << "  | \n";
			cout << "|  " << 'X' << "  " << 'Y' << "  " << 'Z' << "  | \n";
			//Gather Vector Components
			cout << "\nPlease enter values for A, B, C, X, Y, and Z respectively\n\n";
			cin >> A;
			cin >> B;
			cin >> C;
			cin >> X;
			cin >> Y;
			cin >> Z;
			//Present Matrix
			cout << "<" << A << ", " << B << ", " << C << "> X <" << X << ", " << Y << ", " << Z << ">\n";
			cout << "|  i  j  k  |\n";
			cout << "|  " << A << "  " << B << "  " << C << "  | \n";
			cout << "|  " << X << "  " << Y << "  " << Z << "  | \n";
			//Calculating Answer
			P1 = (B * Z) - (C * Y);
			P2 = (A * Z) - (C * X);
			P3 = (A * Y) - (B * X);
			cout << "\nThe Cross Product (Determinant of the Matrix) is:\n";
			cout << "<" << P1 << ", " << -P2 << ", " << P3 << ">\n\n";
			O3 = 99;
			D = 00;
		}
		//Magnitude
		while (D == 3 && O3 == 3)
		{
			int A = 'A', B = 'B', C = 'C';
			float mag, pyth;
			cout << "\n\n<A, B, C>\nPlease enter values for A, B, and C respectively:\n\n";
			cin >> A;
			cin >> B;
			cin >> C;
			pyth = (A ^ 2 + B ^ 2 + C ^ 2);
			mag = sqrt(pyth);
			cout << "\n\nThe magnitude of vector <" << A << ", " << B << ", " << C << "> is " << mag << ".\n\n";
			D = 00;
		}
		//Projection
		while (D == 3 && O3 == 4)
		{
			int A, B, C, X, Y, Z;
			float vmag_sqrd, dot, P1, P2, P3;
			cout << "\nProjection of u onto v\n Given the vectors u = <A, B, C> and v = <X, Y, Z>\n";
			cout << "Please enter values for A, B, C, X, Y, and Z respectively:\n\n";
			cin >> A;
			cin >> B;
			cin >> C;
			cin >> X;
			cin >> Y;
			cin >> Z;
			dot = (A * X) + (B * Y) + (C * Z);
			vmag_sqrd = (X * X) + (Y * Y) + (Z * Z);
			P1 = (dot / vmag_sqrd) * X;
			P2 = (dot / vmag_sqrd) * Y;
			P3 = (dot / vmag_sqrd) * Z;
			cout << "\nThe Projection of vector u onto vector v is <" << P1 << ", " << P2 << ", " << P3 << ">. \n\n";
			D = 00;
		}
	}
	//4-Dimensional Operations
	while (D == 4 && O4 == 00)
	{
		cout << "What Vector operation would you like to compute?\n";
		cout << "1. Dot Product\n2. Cross Product\n3. Magnitude\n4. Projection\n";
		cin >> O4;
		//Dot Product
		while (D == 4 && O4 == 1)
		{
			int A, B, C, D, X, Y, Z, Q;
			float dot;
			cout << "<A, B, C, D> • <X, Y, Z, Q>\n";
			cout << "Enter values for A, B, C, D, X, Y, Z, and Q respectively:\n\n";
			cin >> A;
			cin >> B;
			cin >> C;
			cin >> D;
			cin >> X;
			cin >> Y;
			cin >> Z;
			cin >> Q;
			dot = (A * X) + (B * Y) + (C * Z) + (D * Q);
			cout << "The dot product of <A, B, C, D> • <X, Y, Z, Q> is: " << dot << ". \n\n";
			D = 00;
			O4 = 00;

		}

	}
	system("pause");
	return (0);
}