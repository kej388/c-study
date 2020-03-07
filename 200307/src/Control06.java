import java.util.Scanner;

public class Control06 {

	public static void main(String[] args) {
		// 자연수 n을 입력받아서 n개의 줄에 n+1개의 숫자 혹은 문자로 채워서 다음과 같이 출력하는 프로그램을 작성하시오.
		/*
		  출력예)
		  -------------
			 1 2 3 A
			 4 5 B C
			 6 D E F
		  -------------
		 * */
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int num = 1;
		int ch = 65;
		for(int i = 0; i < n; i++) {
			for(int j = n; j > i; j--) {
				System.out.print(num + " ");
				num++;
			}
			for(int j = 0; j < i + 1; j++) {
				char alp = (char)ch;
				System.out.print(alp + " ");
				ch++;
			}
			System.out.println();
		}
	}

}
