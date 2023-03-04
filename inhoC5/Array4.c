#include <stdio.h>

int main4() {
	// #1
	// 길이가 5인 int형 배열을 선언하고 초기화한다. 이때 각 요소는 원하는 값을 담는다.
	// 해당 배열에 대해 다음 결과를 출력하기

	/*
	1. 총합
	2. 평균
	*/
	
	int num[5];
	int sum = 0;
	double avg = 0.0;

	num[0] = 90;
	num[1] = 80;
	num[2] = 70;
	num[3] = 80;
	num[4] = 85;

	sum = num[0] + num[1] + num[2] + num[3] + num[4] + num[5];
	avg = (double)sum / 5.0;
	printf("총합은 %d\n", sum);
	printf("평균은 %lf\n", avg);

	// #2 영어단어를 하나 입력 받아서 역순으로 출력하는 프로그램

	/*
	입력값 : hello
	출력값 : olleh
	*/

	char ss[5];
	char s;
	int a = 0;

	printf("입력: ");
	scanf("%s", ss, 100);

	while (ss[a] != '\0') a++;
	for (int i = 0; i < a / 2; i++) {
		s = ss[i];
		ss[i] = ss[a - i - 1];
		ss[a - i - 1] = s;
		}
	printf("출력: %s\n",ss);


	char str[64] = { '\0', };
	char reverse[64] = { 0, };

	printf("내가 적은 글 : %s", str);
	scanf("%s",str);
	int j = 0;
	for (int i = 63; i >= 0; i--) {
		if (str[i] == '\0') {
			continue;
		}
		reverse[j] = str[i];
		j++;
	}
	printf("%s", reverse);
	// NULL 문자가 아닌 시점부터
	// reverse[0] = str [4];
	// reverse[1] = str [3];
	// reverse[2] = str [2];
	// reverse[3] = str [1];
	// reverse[4] = str [0];

	


	return 0;
}