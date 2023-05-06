#include <math.h>
#include <iostream>
#define MAX 100
#include <random>
#include <ctime> 
#include<algorithm>
#include<vector>
#include <string>
#include <stack>


using namespace std;


struct Node
{
	int data;
	Node* next;
};

typedef struct Node* node;

node make_node(int x)
{
	node temp = new Node();
	temp->data = x;
	temp->next = NULL;
	return temp;

}

bool empty(node a)
{
	return a == NULL;

}
int Size(node a)
{
	int dem = 0;
	while (a != NULL)
	{
		dem++;
		a = a->next;
	}
	return dem;





}
void Insert_first(node& a, int x)
{
	node temp = make_node(x);
	if (a == NULL)
		a = temp;
	else
	{
		temp->next = a;
		a = temp;
	}
}


void Insert_last(node& a, int x)
{
	node temp = make_node(x);
	if (a == NULL)
		a = temp;
	else
	{
		node p = a;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
}

void Insert_any(node& a, int x, int pos)
{
	int n = Size(a);
	if (n == 1)
	{
		Insert_first(a, x); return;
	}
	else if (n == pos)
	{
		Insert_last(a, x); return;
	}
	else
	{
		node temp = make_node(x);
		node p = a;
		for (int i = 0; i <= pos; i++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
}
void xuat(node a)
{
	while (a != NULL)
	{
		cout << a->data << " ";
		a = a->next;
	}
	cout << endl;
}
void Delete_first(node& a)
{
	if (a == NULL)
		return;
	else
	{
		a = a->next;
	}
}
void Delete_last(node& a)
{
	if (a == NULL)
		return;
	node truoc = NULL, sau = a;
	while (sau->next != NULL)
	{
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL)
		a = NULL;
	else
	{
		truoc->next = NULL;
	}
}
void Delete_any(node &a, int pos)
{
	if (a == NULL)
		return;
	int n = Size(a);
	if (n == 1)
	{
		Delete_first(a); return;
	}
	else if (n == pos)
	{
		Delete_last(a); return;
	}
	else
	{
		node truoc = NULL, sau = a;
		for (int i = 0; i <= pos; i++)
		{
			truoc = sau;
			sau = sau->next;
		}
		truoc->next = sau->next;
	}

}
void reverse(node &a)
{
	node prev = NULL;
	node current = a;
	node next;

	while (current != NULL) 
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	a = prev;
	


	
}



int main()
{
	int x, n, pos;
	node danh_sach = NULL;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		Insert_last(danh_sach, x);
	}
	reverse(danh_sach);
	xuat(danh_sach);

	system("pause");
	return 0;



}


