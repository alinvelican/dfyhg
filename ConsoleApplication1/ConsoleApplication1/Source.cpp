#include <iostream>
#include <string>
using namespace std;
template<typename T, int N>
class Stack {
public:
	Stack() {
		TopLevel = 0;
	}
	void Push(T x) {
		if (TopLevel == N)
			cout << "stiva este plina";
		else {
			TopLevel++;
			StackArray[TopLevel] = x;
		}
	}
	T Pop() {
		T x = StackArray[TopLevel];
		TopLevel--;
		return x;
	}
	T Peek() {
		return StackArray[TopLevel];
	}
	void Show() {
		for (int i = 0; i<TopLevel; i++)
			cout << StackArray[i];
	}
	int IsEmpty() {
		if (TopLevel == 0)
			return 1;
		return 0;
	}
private:
	T StackArray[N];
	int TopLevel;
};
int main()
{
	string Comanda;
	int Val;
	Stack<int, 10> stackk;
	for (;;) {
		cin >> Comanda;
		if (Comanda == "Push") {
			cin >> Val;
			stackk.Push(Val);
			continue;
		}


		if (Comanda == "Pop") {
			stackk.Pop();
			continue;
		}
		if (Comanda == "IsEmpty") {
			int a = stackk.IsEmpty();
			cout << a;
			continue;
		}
		if (Comanda == "Peek") {
			cout << stackk.Peek();

			continue;

		}
		if (Comanda == "Show")
		{
			stackk.Show();
			continue;
		}
	}

	return 0;
}
