#include <iostream>
 2 #include <cstdlib>
 3 #include <windows.h>
 4 #include <string>
 5 using namespace std;
 6 
 7 /*----------------------------------*
 8 15          Class Definition
 9 16 *-----------------------------------*/
10 class Student
11 {
12 private:
13 	string name;
14 	string sex;
15 	string number;
16 	string birthday;
17 	string address;
18 	int Chinese, Math, English, Physic, Biology, Chemistry;
19 public:
20 	Student()//�޲ι���
21 	{
22 		cout << "������ѧ��������,�Ա�,ѧ��,��������:" << endl;
23 		cin >> name >> sex >> number >> birthday;
24 	}
25 	Student(string address)//�вι���
26 	{
27 		this->address = address;
28 		cout << "סַ:" << address << endl;
29 	}
30 	void out()//���ѧ����Ϣ
31 	{
32 		cout << "*******ѧ����Ϣ********" << endl;
33 		cout << "����:" << name << endl;
34 		cout << "�Ա�:" << sex << endl;
35 		cout << "ѧ��:" << number << endl;
36 		cout << "��������" << birthday << endl;
37 	}
38 	Student(const int Chinese, const int Math, const int English, const int Physic, const int Chemistry, const int Biology)//��������
39 	{
40 		this->Chinese = Chinese;
41 		this->Math = Math;
42 		this->English = English;
43 		this->Physic = Physic;
44 		this->Chemistry = Chemistry;
45 		this->Biology = Biology;
46 		cout << "����:" << Chinese << endl;
47 		cout << "��ѧ:" << Math << endl;
48 		cout << "Ӣ��:" << English << endl;
49 		cout << "����:" << Physic << endl;
50 		cout << "��ѧ:" << Chemistry << endl;
51 		cout << "����:" << Biology << endl;
52 	}
53 	void getInformation()//��ѯĳһ��Ŀ�ɼ�
54 	{
55 		string result;
56 		cout << "��������Ҫ��ѯ����Ϣ:" << result << endl;
57 		cin >> result;
58 		if (result == "����")
59 			cout << "���ĳɼ�Ϊ:" << Chinese << endl;
60 		if (result == "��ѧ")
61 			cout << "��ѧ�ɼ�Ϊ:" << Math << endl;
62 		if (result == "Ӣ��")
63 			cout << "Ӣ��ɼ�Ϊ:" << English << endl;
64 		if (result == "����")
65 			cout << "����ɼ�Ϊ:" << Physic << endl;
66 		if (result == "��ѧ")
67 			cout << "��ѧ�ɼ�Ϊ:" << Chemistry << endl;
68 		if (result == "����")
69 			cout << "����ɼ�Ϊ:" << Biology << endl;
70 		if (result == "����")
71 			cout << name << endl;
72 		if (result == "�ձ�")
73 			cout << sex << endl;
74 		if (result == "ѧ��")
75 			cout << number << endl;
76 	}
77 	void changeInformation()//������Ϣ
78 	{
79 		string result1;
80 		cout << "��������Ҫ�޸ĳɼ��Ŀ�Ŀ:" << result1 << endl;
81 		cin >> result1;
82 		if (result1 == "����")
83 		{
84 			cout << "�޸����ĳɼ�Ϊ:" << endl;
85 			cin >> Chinese;
86 			cout << "���ڵ����ĳɼ�Ϊ:" << Chinese << endl;
87 		}
88 		if (result1 == "��ѧ")
89 		{
90 			cout << "�޸���ѧ�ɼ�Ϊ:" << endl;
91 			cin >> Math;
92 			cout << "���ڵ���ѧ�ɼ�Ϊ:" << Math << endl;
93 		}
94 		if (result1 == "Ӣ��")
95 		{
96 			cout << "�޸�Ӣ��ɼ�Ϊ:" << endl;
97 			cin >> English;
98 			cout << "���ڵ�Ӣ��ɼ�Ϊ:" << English << endl;
99 		}
100 		if (result1 == "����")
101 		{
102 			cout << "�޸�����ɼ�Ϊ:" << endl;
103 			cin >> Physic;
104 			cout << "���ڵ�����ɼ�Ϊ:" << Physic << endl;
105 		}
106 		if (result1 == "��ѧ")
107 		{
108 			cout << "�޸Ļ�ѧ�ɼ�Ϊ:" << endl;
109 			cin >> Chemistry;
110 			cout << "���ڵĻ�ѧ�ɼ�Ϊ:" << Chemistry << endl;
111 		}
112 		if (result1 == "����")
113 		{
114 			cout << "�޸�����ɼ�Ϊ:" << endl;
115 			cin >> Biology;
116 			cout << "���ڵ�����ɼ�Ϊ:" << Biology << endl;
117 		}
118 	}
119 	~Student() {
120 
121 	}
122 };
123 
124 /*----------------------------------*
125 131          Main Function
126 132*-----------------------------------*/
127 int main()
128 {
129 	Student student1;
130 	student1.out();
131 	Student student2("ɽ��ʦ����ѧ");
132 	Student student3(110, 138, 125, 88, 79, 80);
133 	student3.getInformation();
134 	student1.changeInformation();
135 	system("pause");
136 	return 0;
137 }
