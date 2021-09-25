#include <iostream>
using namespace	std;

int main()
{	
	setlocale(LC_ALL, "rus");
	system("title ������� �������");
	
	int am_floors, am_rooms;
	int count = 0;
	
	cout << "�����: ";
	cin >> am_floors;
	cout << endl;
	cout << "��������: ";
	cin >> am_rooms;
	cout << endl;
	int home[am_floors][am_rooms];
	
	cout << "������� ������� (0 - �������� �������!):" << endl;
	
	for(int f = 0; f < am_floors; f++) 			// ������� ������
	{
		cout << f + 1 << " ����: |  "; 		// ��� �� ������ ���� �� ��� ����� 0
		for(int r = 0; r < am_rooms; r++) 		// ������� ������� �� �����
		{
			home[f][r] = r + 1;					// �������� �� ���� ����� 0
			cout << "[ " << home[f][r] << " ] ";		// ������� ��������
		}
		cout << "  |" << endl;
	}
	
 	count = count + (am_floors * am_rooms); 	// ���-�� �������
 	cout << "����� �������: " << count << endl;
 	
 	int floor = 0;
 	int room = 0;
 	char quit = '1';
	
	cout << "�� ������ ������ ��������? ����������, �������� �����!" << endl;
 	do
 	 {
 		do
 		 {
 			cout << "����: ";
 			cin >> floor;
 			
 			if(floor < 1 || floor > am_floors)
 			{
 				cout << "[������] ����������, �������� �� 1 �� " << am_floors << endl;
			}
 		 } while(floor < 1 || floor > am_floors);
 		
 		do
		 {
 			cout << "��������: ";
 			cin >> room;
 			
 			if(room < 1 || room > am_rooms)
 			{
 				cout << "[������] ����������, �������� �� 1 �� " << am_rooms << endl;
			}
		 } while(room < 1 || room > am_rooms);
		 
		 if(home[floor - 1][room - 1] != 0)
		 {
		 	home[floor - 1][room - 1] = 0;
		 	cout << "[�������] �� ������ ��������!\n";
		 	cout << "���� �����: " << floor << "-�� ����, " << room << "-� ��������!\n\n";
		 	cout << "������ ���?\n 1 - ��\n 0 - �����\n";
		 	cin >> quit;
		 } 
		 else
		 {
		 	cout << "[������] ��� �������� ��� �������! �������� ������!\n\n";
		 	cout << "������� ������� (0 - �������� �������!): " << endl;
		 	for(int f = 0; f < am_floors; f++) 		// ������� ������
			{
				cout << f + 1 << " ����: |  "; 		// ��� �� ������ ���� �� ��� ����� 0
				for(int r = 0; r < am_rooms; r++) 		// ������� ������� �� �����
				{
					cout << "[ " << home[f][r] << " ] ";		// ������� ��������
				}
				cout << "  |" << endl;
			}
		 }
 		
	 } while(quit != '0');
 	
	system("pause");
	return 0;
	
}
