#include <string>



using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
		answer = "����";
		break;
	case 1:
		answer = "����";
		break;
	case 2:
		answer = "���";
		break;
	case 3:
		answer = "���";
		break;
	case 4:
		answer = "������";
		break;
	case 5:
		answer = "����";
		break;
	case 6:
		answer = "�����";
		break;
	case 7:
		answer = "����";
		break;
	case 8:
		answer = "������";
		break;
	case 9:
		answer = "������";
		break;
	case 10:
		answer = "������";
		break;
	case 11:
		answer = "�����������";
		break;
	case 12:
		answer = "����������";
		break;
	case 13:
		answer = "����������";
		break;
	case 14:
		answer = "������������";
		break;
	case 15:
		answer = "����������";
		break;
	case 16:
		answer = "�����������";
		break;
	case 17:
		answer = "����������";
		break;
	case 18:
		answer = "������������";
		break;
	case 19:
		answer = "������������";
		break;
	
	}

	return answer;
}

string number_less_100_to_string (int number)
{
	int a;
	string answer;
	if (number/10 ==2)
	{
		a = number%10;
		if (a==0) answer = "��������";
		else 
			answer = "�������� "+string_from_int(a);
	}
	if (number/10 ==3)
	{
		a = number%10;
		if (a==0) answer = "��������";
		else 
			answer = "�������� "+string_from_int(a);
	}
	if (number/10 ==4)
	{
		a = number%10;
		if (a==0) answer = "�����";
		else 
			answer = "����� "+string_from_int(a);
	}
	if (number/10 ==5)
	{
		a = number%10;
		if (a==0) answer = "���������";
		else 
			answer = "��������� "+string_from_int(a);
	}
	if (number/10 ==6)
	{
		a = number%10;
		if (a==0) answer = "����������";
		else 
			answer = "���������� "+string_from_int(a);
	}
	if (number/10 ==7)
	{
		a = number%10;
		if (a==0) answer = "���������";
		else 
			answer = "���������� "+string_from_int(a);
	}
	if (number/10 ==8)
	{
		a = number%10;
		if (a==0) answer = "�����������";
		else 
			answer = "������������ "+string_from_int(a);
	}
	if (number/10 ==9)
	{
		a = number%10;
		if (a==0) answer = "���������";
		else 
			answer = "��������� "+string_from_int(a);
	}
	  
    return answer;

}