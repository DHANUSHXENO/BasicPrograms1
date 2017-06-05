import java.util.Scanner;
public class CelsiusToFahrenheit {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int num=in.nextInt();
		float c=(num*9)/5;
		float FAHRENHEIT=c+32;
		System.out.println((int)FAHRENHEIT);
		// TODO Auto-generated method stub
	}

}
