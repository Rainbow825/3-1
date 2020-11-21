 #include <iostream>
 2 #include <cstdlib>
 3 #include <cstring>
 4 #include <windows.h>
 5 
 6 using namespace std;
 7 
 8 const int MAXSIZE = 20;
 9 
10 /*----------------------------------*
11 	  ջ�ඨ��
12 *-----------------------------------*/
13 class Stack
14 {
15 
16 private:
17 
18 	int top;         //ջ������ָʾ��
19 
20 	double data[MAXSIZE];//�洢ջ����
21 
22 public:
23 
24 	Stack();
25 	~Stack();
26 	void  initial();
27 
28 	bool  isFull();
29 	bool  isEmpty();
30 
31 	void push(double& val);
32 	double pop();
33 
34 	int sizeStack();
35 	int getTop();
36 
37 
38 };
39 
40 
41 /*----------------------------------*
42 		 ���Ա��������
43 *-----------------------------------*/
44 
45 //���캯��
46 Stack::Stack()
47 {
48 	top = 0;
49 	memset(data, 0, sizeof(data));//ͳһ��ʼ��Ϊ0
50 }
51 
52 //��������
53 Stack::~Stack()
54 {
55 
56 }
57 
58 //��ͨ��ʼ������
59 void Stack::initial()
60 {
61 	top = 0;
62 	memset(data, 0, sizeof(data));//ͳһ��ʼ��Ϊ0
63 
64 }
65 
66 //�ж�ջ�Ƿ�Ϊ��
67 bool Stack::isFull()
68 {
69 	if (top == MAXSIZE)
70 
71 		return true;
72 
73 	else
74 		return false;
75 }
76 
77 //�ж�ջ�Ƿ�Ϊ��
78 bool Stack::isEmpty()
79 {
80 	if (top == 0)
81 
82 		return true;
83 
84 	else
85 		return false;
86 }
87 
88 //��ջ����
89 void Stack::push(double& val)
90 {
91 	data[top] = val;
92 	top++;//����Ԫ��,������ָʾ��
93 
94 }
95 
96 //��ջ����
97 double Stack::pop()
98 {
99 	top--;//����ָʾ����Ԫ��
100 
101 	return data[top];//���Ԫ��
102 
103 }
104 
105 //����ջ��С
106 int Stack::sizeStack()
107 {
108 	return top;
109 }
110 
111 //����ջ��С
112 int Stack::getTop()
113 {
114 	return top;
115 }
116 
117 /*----------------------------------*
118 *         Main Function
119 *-----------------------------------*/
120 
121 int main()
122 {
123 
124 	cout << "********ջ����������********" << endl;
125 
126 	//1.����ջ����
127 	Stack ss;
128 
129 	cout << "��ǰջ��СΪ�� " << ss.sizeStack() << ", ���������ջ..." << endl << endl;
130 
131 
132 	//2.ִ����ջ����
133 	double temp = 0;
134 
135 	while (!ss.isFull())
136 	{
137 		cout << "ѹջ������������(0��ֹ)��";
138 
139 		cin >> temp;
140 
141 		//��ǰ��ֹѭ��
142 		if (temp == 0)
143 		{
144 			cout << "***********��ջ���!**********" << endl << endl;
145 			break;
146 		}
147 
148 		ss.push(temp);
149 		cout << "�ɹ���ջ!" << endl;
150 
151 	}
152 
153 
154 	//3. ���ջ��Ԫ��
155 	cout << "��ջ�����������ǰջ��" << ss.getTop() << "�����ݣ�" << endl;
156 
157 	while (!ss.isEmpty())
158 	{
159 		cout << ss.pop() << " ";
160 	}
161 
162 	cout << endl;
163 
164 
165 	system("pause");
166 
167 	return 0;
168 }
