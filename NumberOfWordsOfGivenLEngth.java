package Beginning;
import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;
public class NumberOfWordsOfGivenLEngth {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		List<String> al=new ArrayList<String>();
		System.out.println("Enter the number of words");
		int n=sc.nextInt();
		System.out.println("Enter the words");
		for(int i=0;i<n;i++) {
			al.add(sc.next());
		}
		System.out.println("Enter the length to be determined");
		int len=sc.nextInt();
		Iterator<String> it=al.iterator();
		int count=0;
		while(it.hasNext()) {
			String s=it.next();
			if(s.length()==len) {
				++count;
			}
		}
		System.out.println("Number of Words of given length "+len+" is : "+count);

	}

}
