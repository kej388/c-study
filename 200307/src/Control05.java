import java.util.Scanner;

public class Control05 {

	public static void main(String[] args) {
		// 자연수 n( 3 <= n <= 10) 을 입력받아 다음과 같이 영문자를 출력하는 프로그램을 작성하시오.
		/*
		  출력예)
		  -------------
			 ABC
			 DE
			 F
		  -------------
		 * */
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ch = 65;
		for(int i = 0; i < n; i++) {
			
			for(int j = n; j > i; j--) {
				char alp = (char)ch;
				System.out.print(alp);
				ch++;
			}
			System.out.println();
		}
	}
}
