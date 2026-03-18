//triangle.cpp
#include <iostream>

//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;

// *네모 만들기
int main(void)
{
	cout << "what size of triangle?";
	
	int size;
	cin >> size;

	


	//행 출력
	for (int i = 0; i < size; i++)
	{//열 출력
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++)
		{
			cout << "*";
		}
		// 행 끝에 줄 바꿈
		cout << endl;
	}

	return 0;
}