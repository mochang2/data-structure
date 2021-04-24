#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp;
	if (a == b) throw a, b;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	/* no. 1 Write code to find the nth to the last
	element of a singly linked list.
	given:
	class LinkedListNode 
	{	
		LinkedListNode next = null;
		int data;
		
		public LinkedListNode(int d) {data = d;}
		
		void appendToTail(int d)
		{
			LinkedListNode end = new Node(d);
			LinkedListNode n = this;
			while(n.next != null) {n = n.next;}
			n.next = end;
		}
	}
	
	LinkedListNode nthToLast(LinkedListNode head, int n)
	{	
		//from head to null, to calculate length
		//nth to the last is length-n+1 th to the first
		//as index: [length-n]
		int length = 0;
		LinkedListNode current = head;
		
		while(head != null)
		{
			length++;
			head=head.next;
		}
		if (length < n)
		{	//just return -1 to express out of bounds or
			ostringstream s;
			s << "n = " << n << "length = "<<length;
			throw illegal_n(s.str());
		}
		head = current;
		for (int i = 1; i < length - n + 1; i++)
			head = head.next;
			
		return head.data;
	}*/
	//solution은 p1과 p2의 차이를 n-1을 두 포인터의 차이
	//p2만 먼저 0~n-2까지 for문 돌리고 p2는 무언가를 
	//가리키고 있고, 그 후에 p1, p2를 동시에 돌리면
	//p2가 null을 가리킬 때 p1은 뒤에서 n번째를 가리킴.

	/* no.2 Prove that running time T(n) = n^3 + 20n + 1
	is NOT O(n^2)
	
	Let S(n) = cn^2, T(n) = O(S(n))
	lim(T(n)/S(n))=>diverge
	
	Therefor, T(n) != O(S(n))
	
	or use graph*/


	/* no3. 12n^2 + 8n + 7 != O(n)을 증명
	Let T(n) = 12n^2 + 8n + 7, S(n) = cn(c > 0)
	
	2하고 똑같이 증명*/


	/* no.4 1~7까지 튜브 빌리는 곳이 있고, 7->6번 계곡
	6->5번 계곡 이런 식으로 이어져 있음.
	1번에서 빌린 튜브는 1,3,6,7에서 돌려줄 수 있고,
	2번 튜브는 3,5,6, 3번 튜브는 3,5,7, 4번 튜브는 5,6,7,
	5번 튜브는 7, 6번 튜브는 6,,7 7번 튜브는 7번에서
	돌려줄 수 있음
	빌리는 곳을 i, 돌려주는 곳을 j로 둬서 7x7 matrix를 
	만들어라.*/


	return 0;
}
