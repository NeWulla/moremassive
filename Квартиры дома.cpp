#include <iostream>
using namespace	std;

int main()
{	
	setlocale(LC_ALL, "rus");
	system("title Счетчик квартир");
	
	int am_floors, am_rooms;
	int count = 0;
	
	cout << "Этажи: ";
	cin >> am_floors;
	cout << endl;
	cout << "Квартиры: ";
	cin >> am_rooms;
	cout << endl;
	int home[am_floors][am_rooms];
	
	cout << "Таблица квартир (0 - Квартира куплена!):" << endl;
	
	for(int f = 0; f < am_floors; f++) 			// перебор этажей
	{
		cout << f + 1 << " этаж: |  "; 		// Что бы первый этаж не был равен 0
		for(int r = 0; r < am_rooms; r++) 		// перебор квартир на этаже
		{
			home[f][r] = r + 1;					// Квартира не была равна 0
			cout << "[ " << home[f][r] << " ] ";		// Выводит квартиру
		}
		cout << "  |" << endl;
	}
	
 	count = count + (am_floors * am_rooms); 	// Кол-во квартир
 	cout << "Всего квартир: " << count << endl;
 	
 	int floor = 0;
 	int room = 0;
 	char quit = '1';
	
	cout << "Вы хотите купить квартиру? Пожалуйста, выберите место!" << endl;
 	do
 	 {
 		do
 		 {
 			cout << "Этаж: ";
 			cin >> floor;
 			
 			if(floor < 1 || floor > am_floors)
 			{
 				cout << "[ОШИБКА] Пожалуйста, выберите от 1 до " << am_floors << endl;
			}
 		 } while(floor < 1 || floor > am_floors);
 		
 		do
		 {
 			cout << "Квартира: ";
 			cin >> room;
 			
 			if(room < 1 || room > am_rooms)
 			{
 				cout << "[ОШИБКА] Пожалуйста, выберите от 1 до " << am_rooms << endl;
			}
		 } while(room < 1 || room > am_rooms);
		 
		 if(home[floor - 1][room - 1] != 0)
		 {
		 	home[floor - 1][room - 1] = 0;
		 	cout << "[УСПЕШНО] Вы купили квартиру!\n";
		 	cout << "Ваше место: " << floor << "-ый этаж, " << room << "-я квартира!\n\n";
		 	cout << "Купить еще?\n 1 - да\n 0 - выйти\n";
		 	cin >> quit;
		 } 
		 else
		 {
		 	cout << "[ОШИБКА] Эта квартира уже куплена! Выберите другую!\n\n";
		 	cout << "Таблица квартир (0 - Квартира куплена!): " << endl;
		 	for(int f = 0; f < am_floors; f++) 		// перебор этажей
			{
				cout << f + 1 << " этаж: |  "; 		// Что бы первый этаж не был равен 0
				for(int r = 0; r < am_rooms; r++) 		// перебор квартир на этаже
				{
					cout << "[ " << home[f][r] << " ] ";		// Выводит квартиру
				}
				cout << "  |" << endl;
			}
		 }
 		
	 } while(quit != '0');
 	
	system("pause");
	return 0;
	
}
