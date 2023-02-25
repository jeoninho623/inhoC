#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5() {
	// if ~ else if ~ else
	// switch ~ case ~ break
	// switch문 : 같은 값을 찾을 때 사용하는 조건문

	// if문 : 범위 조건, 일치/불일치 조건 (>, ==)
	// switch: 일치조건 (==)
	char word;
	printf("단어를 입력하쇼>>");
	scanf("%c",&word);
	// 대상이 되는 변수를 ()에 적는다
	switch (word) {
	case 'a':
		printf("단어는 a입니다.");
		break;
	case 'b':
		printf("단어는 b입니다.");
		break;
	case 'c':
		printf("단어는 c입니다.");
	default:
		printf("해당하는 단어가 없습니다.");
	}
	printf("\n");
	
	//switch : ()와 일치하는 애를 찾기

	int num = 0;
	printf("번호를 선택하세요>>");
	scanf("%d",&num);

	switch (num) {
	case 1:
		printf("1을 선택했습니다.\n");
		break;
	case 2:
		printf("2를 선택했습니다.\n");
		break;
	case 3:
		printf("3을 선택했습니다.\n");
		break;
	case 4:
		printf("4를 선택했습니다.\n");
		break;
	default:
		printf("선택한 번호가 없어요~\n");
		
	}
	// 1~4, default
	// 1을 선택했습니다.

	return 0;
}