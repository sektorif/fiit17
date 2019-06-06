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

string number_less_1000_to_string(int number)
{
int a;
	string answer;
	if (number/100 ==1)
	{
		a = number%100;
		if (a==0) answer = "сто";
		else 
			answer = "сто "+string_from_int(a);
	}
	if (number/100 ==2)
	{
		a = number%100;
		if (a==0) answer = "двести";
		else 
			answer = "двести "+string_from_int(a);
	}

	if (number/100 ==3)
	{
		a = number%10;
		if (a==0) answer = "триста";
		else 
			answer = "триста "+string_from_int(a);
	}
	if (number/100 ==4)
	{
		a = number%100;
		if (a==0) answer = "четыреста";
		else 
			answer = "четыреста "+string_from_int(a);
	}
	if (number/100 ==5)
	{
		a = number%100;
		if (a==0) answer = "пятьсот";
		else 
			answer = "пятьсот "+string_from_int(a);
	}
	if (number/100 ==6)
	{
		a = number%100;
		if (a==0) answer = "шестьсот";
		else 
			answer = "шестьсот "+string_from_int(a);
	}
	if (number/100 ==7)
	{
		a = number%100;
		if (a==0) answer = "семьсот";
		else 
			answer = "семьсот "+string_from_int(a);
	}
	if (number/100 ==8)
	{
		a = number%100;
		if (a==0) answer = "восемьсот";
		else 
			answer = "восемьсот "+string_from_int(a);
	}
	if (number/100 ==9)
	{
		a = number%100;
		if (a==0) answer = "девятьсот";
		else 
			answer = "девятьсот "+string_from_int(a);
	}
    return answer;
}



string objects_less_100_to_string(int number, 
    string s1, string s2, string s3)
{
	string answer;

	if (number <15)
	{
		if (number==1)
			answer = string_from_int(number)+ s1;
		if ((number>1)&&(number<5))
			answer = string_from_int(number)+ s2;
		if (number>4)
			answer = string_from_int(number)+ s3;
	}
	else
	{
	if (number%10 ==1)
	{

		answer = number_less_100_to_string(number)+ s1;
	}
	if ((number%10 >1)&&(number%10 <5))
	{
		answer = number_less_100_to_string(number)+ s2;
	}
	if (number%10 >4)
	{
		answer =number_less_100_to_string(number)+  s3;
	}
	if (number%10 ==0)
	{
		answer =number_less_100_to_string(number)+  s3;
	}
	}
    return answer;
}


string currency_to_string(
    int integer_value, string si1, string si2, string si3,
    int decimal_value, string sd1, string sd2, string sd3)
{
	string answer1,answer2,answer;

	if (integer_value <15)
	{
		if (integer_value==1)
			answer1 = string_from_int(integer_value)+ si1;
		if ((integer_value>1)&&(integer_value<5))
			answer1 = string_from_int(integer_value)+ si2;
		if (integer_value>4)
			answer1 = string_from_int(integer_value)+ si3;
	}
	else
	{
	if (integer_value%10 ==1)
	{
		answer1 = number_less_100_to_string(integer_value)+ si1;
	}
	if ((integer_value%10 >1)&&(integer_value%10 <5))
	{
		answer1 = number_less_100_to_string(integer_value)+ si2;
	}
	if (integer_value%10 >4)
	{
		answer1 =number_less_100_to_string(integer_value)+  si3;
	}
	if (integer_value%10 ==0)
	{
		answer1 =number_less_100_to_string(integer_value)+  si3;
	}}


	if (decimal_value%10 ==1)
	{
		answer2 = number_less_100_to_string(decimal_value)+ sd1;
	}
	if ((decimal_value%10 >1)&&(decimal_value%10 <5))
	{
		answer2 = number_less_100_to_string(decimal_value)+ sd2;
	}
	if (decimal_value%10 >4)
	{
		answer2 =number_less_100_to_string(decimal_value)+  sd3;
	}
	if (decimal_value%10 ==0)
	{
		answer2 =number_less_100_to_string(decimal_value)+  sd3;
	}
	answer= answer1+answer2;

    return answer;
}
