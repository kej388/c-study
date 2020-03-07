import java.util.Scanner;

public class Control02 {

	public static void main(String[] args) {
		// 자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.
		/*
		 * 출력 예 )
		 * ---------------
		 		***
		 		**
		 		*
		 		*
		 		**
		 		***
		  ----------------
		 * */
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i = 0; i < n; i++) {
			for(int j = n; j > i; j--) {
				System.out.print("*");	
			}
			System.out.println();
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i + 1; j++) {
				System.out.print("*");				
			}
			System.out.println();
		}

	}

}
