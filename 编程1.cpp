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
11 	  栈类定义
12 *-----------------------------------*/
13 class Stack
14 {
15 
16 private:
17 
18 	int top;         //栈顶访问指示器
19 
20 	double data[MAXSIZE];//存储栈数据
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
42 		 类成员函数定义
43 *-----------------------------------*/
44 
45 //构造函数
46 Stack::Stack()
47 {
48 	top = 0;
49 	memset(data, 0, sizeof(data));//统一初始化为0
50 }
51 
52 //析构函数
53 Stack::~Stack()
54 {
55 
56 }
57 
58 //普通初始化函数
59 void Stack::initial()
60 {
61 	top = 0;
62 	memset(data, 0, sizeof(data));//统一初始化为0
63 
64 }
65 
66 //判断栈是否为满
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
77 //判断栈是否为空
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
88 //入栈操作
89 void Stack::push(double& val)
90 {
91 	data[top] = val;
92 	top++;//先入元素,后上移指示器
93 
94 }
95 
96 //出栈操作
97 double Stack::pop()
98 {
99 	top--;//下移指示器到元素
100 
101 	return data[top];//输出元素
102 
103 }
104 
105 //计算栈大小
106 int Stack::sizeStack()
107 {
108 	return top;
109 }
110 
111 //返回栈大小
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
124 	cout << "********栈类设计与测试********" << endl;
125 
126 	//1.生成栈对象
127 	Stack ss;
128 
129 	cout << "当前栈大小为： " << ss.sizeStack() << ", 允许继续入栈..." << endl << endl;
130 
131 
132 	//2.执行入栈操作
133 	double temp = 0;
134 
135 	while (!ss.isFull())
136 	{
137 		cout << "压栈，请输入数据(0终止)：";
138 
139 		cin >> temp;
140 
141 		//提前终止循环
142 		if (temp == 0)
143 		{
144 			cout << "***********入栈完毕!**********" << endl << endl;
145 			break;
146 		}
147 
148 		ss.push(temp);
149 		cout << "成功入栈!" << endl;
150 
151 	}
152 
153 
154 	//3. 输出栈内元素
155 	cout << "从栈顶依次输出当前栈内" << ss.getTop() << "个数据：" << endl;
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
