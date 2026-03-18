//2-5square.cpp
#include <iostream>

//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;

// *네모 만들기
int main(void)
{
	cout << "1. Square OR 2. Rectangle";

	int option;
	cin >> option;

	if (option != 1 && option != 2)
	{
		cout << "Error: only choose 1 or 2";
		return 0x712F; //16진법 (hex)
	}

	cout << "What size?";
	int size;
	cin >> size;

	//행 출력
	for (int i = 0; i < size; i++)
	{//열 출력
		for (int j = 0; j < size; j++)
		{
			if (option == 1) //square
			{
				cout << "*";
			}
			else if (option == 2) //rect
			{
				cout << "**";
			}
			else
			{
				cout << "Error: only choose 1 or 2.";
				return 0x34AF;
			}
		}
		// 행 끝에 줄 바꿈
		cout << endl;
	}

	return 0;
}