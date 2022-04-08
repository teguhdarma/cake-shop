#include<stdio.h>

int main()
{
	 int day;
	
	 scanf("%d", &day);
	 switch(day)
	 {
		  case 3:
          case 4:
          case 5: printf("あなたの誕生月を入力してください。\n4月です。\n誕生月はspringですね。");
		  	  break;
		  case 6:
          case 7:
          case 8: printf("あなたの誕生月を入力してください。\n4月です。\n誕生月はsummerですね。");
		  	  break;
		  case 9:
          case 10:
          case 11: printf("あなたの誕生月を入力してください。\n4月です。\n誕生月はautumnですね。");
			  break;
		  case 12:
          case 1:
          case 2: printf("あなたの誕生月を入力してください。\n12月です。\n誕生月はwinterですね。");
			  break;
		 
		  default: printf("あなたの誕生月を入力してください。\n15月です。\n入力されたのは1月から12月までの数字ではありません。");
			  break;
	 }
     	 return(0);
}




