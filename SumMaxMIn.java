import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
public class SumMaxMIn {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		ArrayList<Integer> al=new ArrayList<Integer>();
		System.out.println("Enter array size");
		int n=sc.nextInt();
		System.out.println("Enter elements:");
		for(int i=0;i<n;i++) {
			al.add(sc.nextInt());
		}
		System.out.println(Collections.min(al)+Collections.max(al));
	}
}
