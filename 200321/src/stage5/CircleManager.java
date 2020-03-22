package stage5;

import java.util.Scanner;

class Circle{
	double x, y;
	int radius;
	
	public Circle(double x, double y, int radius) {
		this.x = x;
		this.y = y;
		this.radius = radius;
	}
	
	
	
	public void show() {
		
		System.out.printf("가장 큰 면적인 큰원은 (%.1f,%.1f)%d\n", x, y, radius);
	}
}

public class CircleManager {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double x;
		double y;
		int radius;
		Circle c[] = new Circle[3];
		int r[] = new int[3];
		
		for(int i = 0; i < c.length; i++) {
			System.out.print("x, y, radius >> ");
			x = sc.nextDouble();
			y = sc.nextDouble();
			radius = sc.nextInt();
			
			c[i] = new Circle(x, y, radius);
			
		}
		
		int max = 0;
		
		for(int i = 0; i < c.length; i++) {
			
			if(max < c[i].radius) {
				max = c[i].radius;
			}
			
		}
		
		for(int i = 0; i < c.length; i++) {
			if(c[i].radius == max) {
				c[i].show();
			}
		}
		
		
		sc.close();
	}

}
