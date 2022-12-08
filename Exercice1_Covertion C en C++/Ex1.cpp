// Caneva Ex1 SL228_POBJ language C++ 
// Visual Studio 2015
// 01.12.2022  Caroline Miéville

#include <iostream>
#include <string>
using namespace std;

int main (void)
{
	int UserAnswer; //est-ce qu'il faut tous mettre en string?
	string ValA, ValB;
	// Variables pour test A et B
	short i;
	string ValB1;
	string  ValB2;

	cout <<"Exercice 1 : Huber Christian " 
										<< end1 ;

	cout << "Solution en C a trandformer en C++ "
											<< end1;


	do {
		cout << "Test A ou B, Q pour Quitter "
			<< end1;

		cout << "Test A ou B, Q pour Quitter "
			<< end1;
		scanf("%c%*c", &UserAnswer, 2);
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				printf("TestA: entrez un nombre entre 1 et 9 \n");
				scanf_s("%d%*c", &ValA);

				if (ValA > 9)
				{
					ValA = 9;
					printf("TestA: ValA limitee a 9 \n");
				}
				if (ValA == 0)
				{
					ValA = 1;
					printf("TestA: ValA forcee a 1 \n");
				}
				if (ValA > 0 )  
				{
					printf("%d ", ValA);
					for (i=0; i < ValA ; i++)
					{
						printf ("*");
					}
					printf("\n"); // saut de ligne
				}
				else 
				{
					printf("TestA: ValA est negatif ! \n");
				}
			break;

			case 'B':
			case 'b':
				printf("TestB: entrez une valeur entre 0 et 9 \n");
				scanf_s("%d%*c", &ValB);
				
				if (ValB >= 0 && ValB <=9 )
				{
					for (i=0; i < ValB; i++) { 
						ValB1 = 100 + (10 * i);
						ValB2 = ValB1 / 10000.0;
						printf("TestB: i= %d ValB1 = %d ValB2 = %lf \n", i, ValB1, ValB2);
					}
				}
				else
				{
					printf("TestB: ValB n'est pas entre 0 et 9 ! \n");
				}
		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return 0;
}