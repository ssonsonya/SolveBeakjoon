#include "stdafx.h"
#include "DigitGenerator.h"

#include <iostream>

DigitGenerator::DigitGenerator()
{
	cout << "\n [ 2231 | 브루트 포스 | 분해합 ]\n";
	cout << "\n 문제 : 어떤 자연수 N이 있을 때, 그 자연수 N의 분해합은 N과 N을 이루는 각 자리수의 합을 의미한다.\n        어떤 자연수 M의 분해합이 N인 경우, M을 N의 생성자라 한다.\n        예를 들어, 245의 분해합은 256(=245+2+4+5)이 된다.\n        따라서 245는 256의 생성자가 된다. 물론, 어떤 자연수의 경우에는 생성자가 없을 수도 있다.\n        반대로, 생성자가 여러 개인 자연수도 있을 수 있다.\n        자연수 N이 주어졌을 때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하시오.";
	cout << "\n 입력 : 첫째 줄에 자연수 N(1 ≤ N ≤ 1,000,000)이 주어진다.";
	cout << "\n 출력 : 첫째 줄에 답을 출력한다. 생성자가 없는 경우에는 0을 출력한다.";

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
