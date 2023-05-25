#include "stdafx.h"
#include "DigitGenerator.h"

#include <iostream>

DigitGenerator::DigitGenerator()
{
	cout << "\n [ 2231 | ���Ʈ ���� | ������ ]\n";
	cout << "\n ���� : � �ڿ��� N�� ���� ��, �� �ڿ��� N�� �������� N�� N�� �̷�� �� �ڸ����� ���� �ǹ��Ѵ�.\n        � �ڿ��� M�� �������� N�� ���, M�� N�� �����ڶ� �Ѵ�.\n        ���� ���, 245�� �������� 256(=245+2+4+5)�� �ȴ�.\n        ���� 245�� 256�� �����ڰ� �ȴ�. ����, � �ڿ����� ��쿡�� �����ڰ� ���� ���� �ִ�.\n        �ݴ��, �����ڰ� ���� ���� �ڿ����� ���� �� �ִ�.\n        �ڿ��� N�� �־����� ��, N�� ���� ���� �����ڸ� ���س��� ���α׷��� �ۼ��Ͻÿ�.";
	cout << "\n �Է� : ù° �ٿ� �ڿ��� N(1 �� N �� 1,000,000)�� �־�����.";
	cout << "\n ��� : ù° �ٿ� ���� ����Ѵ�. �����ڰ� ���� ��쿡�� 0�� ����Ѵ�.";

	cout << "\n -----------------------------------\n";

	Answer();
}

void DigitGenerator::Answer()
{
	int N = 0;
	int answer = 0;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int n = i;
		int sum = 0;
		while (n > 0)
		{
			sum = sum + n % 10;
			n = n / 10;
		}
		answer = i + sum;
		if (answer == N)
		{
			cout << i;
			break;
			//return 0;
		}
	}
	cout << 0;
	//return 0;
}

void DigitGenerator::Solution()
{
	cout << "\n -----------------------------------\n";
	cout << "\n [ Solution ]\n";
	cout << "\n #include <iostream>\n using namespace std;";
	cout << "\n int main()";
	cout << "\n {";
	cout << "\n		int N = 0;";
	cout << "\n		int answer = 0;";
	cout << "\n		cin >> N;";
	cout << "\n";
	cout << "\n		for (int i = 0; i < N; ++i)";
	cout << "\n		{";
	cout << "\n 		int n = i;";
	cout << "\n 		int sum = 0;";
	cout << "\n 		while (n > 0)";
	cout << "\n 		{";
	cout << "\n 			sum = sum + n % 10;";
	cout << "\n 			n = n / 10;";
	cout << "\n 		}";
	cout << "\n 		answer = i + sum;";
	cout << "\n 		if (answer == N)";
	cout << "\n 		{";
	cout << "\n  			cout << i;";
	cout << "\n 			return 0;";
	cout << "\n			}";
	cout << "\n		}";
	cout << "\n		cout << 0;";
	cout << "\n		return 0;";
	cout << "\n }";
	cout << "\n";
}
