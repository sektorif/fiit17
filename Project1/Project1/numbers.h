#include <string>



using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
		answer = "ноль";
		break;
	case 1:
		answer = "один";
		break;
	case 2:
		answer = "два";
		break;
	case 3:
		answer = "три";
		break;
	case 4:
		answer = "четыре";
		break;
	case 5:
		answer = "пять";
		break;
	case 6:
		answer = "шесть";
		break;
	case 7:
		answer = "семь";
		break;
	case 8:
		answer = "восемь";
		break;
	case 9:
		answer = "девять";
		break;
	case 10:
		answer = "десять";
		break;
	case 11:
		answer = "одиннадцать";
		break;
	case 12:
		answer = "двенадцать";
		break;
	case 13:
		answer = "тринадцать";
		break;
	case 14:
		answer = "четырнадцать";
		break;
	case 15:
		answer = "пятнадцать";
		break;
	case 16:
		answer = "шестнадцать";
		break;
	case 17:
		answer = "семнадцать";
		break;
	case 18:
		answer = "восемнадцать";
		break;
	case 19:
		answer = "девятнадцать";
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
		if (a==0) answer = "двадцать";
		else 
			answer = "двадцать "+string_from_int(a);
	}
	if (number/10 ==3)
	{
		a = number%10;
		if (a==0) answer = "тридцать";
		else 
			answer = "тридцать "+string_from_int(a);
	}
	if (number/10 ==4)
	{
		a = number%10;
		if (a==0) answer = "сорок";
		else 
			answer = "сорок "+string_from_int(a);
	}
	if (number/10 ==5)
	{
		a = number%10;
		if (a==0) answer = "пятьдесят";
		else 
			answer = "пятьдесят "+string_from_int(a);
	}
	if (number/10 ==6)
	{
		a = number%10;
		if (a==0) answer = "шестьдесят";
		else 
			answer = "шестьдесят "+string_from_int(a);
	}
	if (number/10 ==7)
	{
		a = number%10;
		if (a==0) answer = "семьдесят";
		else 
			answer = "семьдесять "+string_from_int(a);
	}
	if (number/10 ==8)
	{
		a = number%10;
		if (a==0) answer = "восемьдесят";
		else 
			answer = "восемьдесять "+string_from_int(a);
	}
	if (number/10 ==9)
	{
		a = number%10;
		if (a==0) answer = "девяносто";
		else 
			answer = "девяносто "+string_from_int(a);
	}
	  
    return answer;

}