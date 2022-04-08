#include<stdio.h>

int main()
{
	 int day;
	
	 scanf("%d", &day);
	 switch(day)
	 
	 {
		  case 3:
          case 4:
          case 5: printf("あなたの誕生月を入力してください。\n%d月です。\n誕生月はspringですね。",&day);
		  	  break;
		  case 6:
          case 7:
          case 8: printf("あなたの誕生月を入力してください。\n%d月です。\n誕生月はsummerですね。",&day);
		  	  break;
		  case 9:
          case 10:
          case 11: printf("あなたの誕生月を入力してください。\n%d月です。\n誕生月はautumnですね。",&day);
			  break;
		  case 12:
          case 1:
          case 2: printf("あなたの誕生月を入力してください。\n%d月です。\n誕生月はwinterですね。",&day);
			  break;
		 
		  default: printf("あなたの誕生月を入力してください。\n%d月です。\n入力されたのは1月から12月までの数字ではありません。",&day);
			  break;
	 }
     	 return(0);
}