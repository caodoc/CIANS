#include <iostream>
#include <fstream>

#define Ref Node*

using namespace std;

ifstream binInput;
ofstream binOutput;

struct Node
{
	int data;
	Ref next;
};

void writeBinaryFile(string fileName, Ref head, int n)
{
	binOutput.open(fileName, ios::binary);

	binOutput.write((char*)&n, sizeof(n));
	for (Ref p = head; p != nullptr; p = p->next)
		binOutput.write((char*)&p->data, sizeof(p->data));

	binOutput.close();
}

void readBinaryFile(string fileName)
{
	binInput.open(fileName, ios::binary);
	if (!binInput.is_open())
	{
		cout << "Cannot open file " << fileName << "\n";
		return;
	}

	int n = 0, temp = 0;
	binInput.read((char*)&n, sizeof(n));
	cout << "n = " << n << "\n";
	for (int i = 1; i <= n; ++i)
	{
		binInput.read((char*)&temp, sizeof(temp));
		cout << temp << " ";
	}
	cout << "\n";

	binInput.close();
}

Ref getNode(int k)
{
	Ref p = new Node;
	if (p == nullptr) return nullptr;
	p->data = k;
	p->next = nullptr;
	return p;
}

void addLast(Ref &head, Ref &tail, int k)
{
	Ref p = getNode(k);
	if (head == nullptr) head = tail = p;
	else
	{
		Ref temp = head;
		while (temp->next != nullptr) temp = temp->next;
		temp->next = p;
	}
}

void addFirst(Ref& head, Ref& tail, int k)
{
	Ref p = getNode(k);
	if (head == nullptr) head = tail = p;
	else
	{
		p->next = head;
		head = p;
	}
}

void print(Ref head)
{
	for (Ref p = head; p != nullptr; p = p->next) cout << p->data << " ";
	cout << "\n";
}

void insertList(Ref& head, int k)
{
	Ref p = getNode(k);
	if (head == nullptr || head->data > k)
	{
		p->next = head;
		head = p;
		return;
	}
	Ref q = head;
	while (q->next != nullptr && q->next->data < k) q = q->next;
	p->next = q->next;
	q->next = p;
}

void removeList(Ref& head, int k)
{
	Ref p = head;
	Ref q = nullptr;
	if (head->data == k)
	{
		q = head;
		head = head->next;
		delete q;
		return;
	}
	while (p != nullptr && p->data != k)
	{
		q = p;
		p = p->next;
	}
	if (p == nullptr)
	{
		cout << "Can't find " << k << "\n";
		return;
	}
	q->next = p->next;
	delete p;
}

void sort(Ref& head)
{
	for (Ref p = head; p != nullptr; p = p->next)
		for (Ref q = p->next; q != nullptr; q = q->next)
		{
			if (p->data > q->data)
			{
				int temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
}

void freeList(Ref head)
{
	Ref p = head;
	while (p != nullptr)
	{
		Ref temp = p;
		p = p->next;
		delete temp;
	}
}

int main()
{
	Ref head = nullptr;
	Ref tail = nullptr;
	int n, k;
	cout << "n = ";
	cin >> n;
	cout << "Each key: ";
	for (int i = 1; i <= n; ++i)
	{
		cin >> k;
		addLast(head, tail, k);
		//addFirst(head, tail, k);
	}

	sort(head);

	cout << "Received keys: ";
	print(head);

	cout << "Insert key: ";
	cin >> k;
	insertList(head, k);
	cout << "Inserted list: ";
	print(head);

	cout << "\n---------\n\n";

	cout << "Remove key: ";
	cin >> k;
	removeList(head, k);
	cout << "Removed list: ";
	print(head);

	cout << "\n---------\n\n";

	string fileName;
	cout << "Enter file name: ";
	cin >> fileName;
	writeBinaryFile(fileName, head, n);
	readBinaryFile(fileName);

	freeList(head);

	system("pause");
	return 0;
}