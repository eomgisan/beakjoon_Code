#include <iostream>
#include <string>
using namespace std;

class Deque {
private:
	int deque_size;
	int deque_count;
	int* p_deque;
	int front_index;
	int back_index;

public:
	Deque();
	~Deque();

	void make_deque(int len);
	void pop_front();
	void pop_back();
	void push_back(int num);
	void push_front(int num);
	void empty();
	void size();
	void front();
	void back();
	
};

Deque::Deque() {
	deque_size = 0;
	deque_count = 0;
	front_index = 0;
	back_index = 0;
	p_deque = NULL;
}

Deque::~Deque() {
	delete[] p_deque;
}

void Deque::make_deque(int len) {
	deque_size = len;
	p_deque = new int[len];

}

void Deque::pop_front() {
	if (deque_count == 0) {
		cout << "-1"<< '\n';
	}
	else {
		
		front_index = (front_index + 1) % deque_size;
		cout << *(p_deque + front_index) << '\n';
		*(p_deque+front_index) = NULL;
		deque_count--;
	}
}

void Deque::pop_back() {
	if (deque_count == 0) {
		cout << "-1" << '\n';
	}
	else {
		cout << *(p_deque + back_index) << '\n';		
		*(p_deque + back_index) = NULL;
		back_index = (back_index - 1 + deque_size) % deque_size;
		deque_count--;
	}
}

void Deque::empty() {
	if (deque_count == 0) {
		cout << "1" << '\n';
	}
	else {
		cout << '0' << '\n';
	}
}

void Deque::front() {
	if (deque_count == 0) {
		cout << "-1" << '\n';
	}
	else {
		cout << *(p_deque + (front_index+1)%deque_size ) << '\n';
	}
}


void Deque::back() {
	if (deque_count == 0) {
		cout << "-1" << '\n';
	}
	else {
		cout << *(p_deque + back_index) << '\n';
	}
}

void Deque::size() {
	cout << deque_count << '\n';
}

void Deque::push_front(int num) {
	
	*(p_deque + front_index) = num;
	front_index = (front_index - 1 + deque_size) % deque_size;
	deque_count++;
}
void Deque::push_back(int num) {
	
	back_index = (back_index + 1) % deque_size;
	*(p_deque + back_index) = num;
	deque_count++;
}


int main() {
	int testcase; cin >> testcase;
	Deque deque;
	deque.make_deque(10001);


	while (testcase--) {
		string s; cin >> s;

		if (s[0] == 'p') {
			
			
			if (s[1] == 'u') {
				// push
				int num; cin >> num;
				
				if (s[5] == 'f') {
					//front
					deque.push_front(num);
				}
				else {
					deque.push_back(num);
				}
			}
			else {
				// pop
				if (s[4] == 'f') {
					deque.pop_front();
				}
				else {
					deque.pop_back();
				}
			}
		}
		else if (s[0] == 'f') {
			deque.front();
		}
		else if (s[0] == 'b') {
			deque.back();
		}
		else if (s[0] == 'e') {
			deque.empty();
		}
		else if (s[0] == 's') {
			deque.size();
		}

	}

	return 0;
}