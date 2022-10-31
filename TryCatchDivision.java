import java.util.Scanner;
public class TryCatchDivision {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("program started");
		System.out.println("enter two number");
		int a=sc.nextInt();
		int b=sc.nextInt();
		try {
			int result=a/b;
			System.out.println("result: "+result);
		} catch (Exception e) {
			System.out.println("exception occurred");
		}
	    System.out.println("finished");
	}

}
