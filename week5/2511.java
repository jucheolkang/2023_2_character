import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		
		int A[] = new int[10];
		int B[] = new int[10];
		int a=0,b=0;
		String S= "D";

		for(int i=0;i<10;i++) {
			A[i] = in.nextInt();
			
		}
		for(int i=0;i<10;i++) {
			B[i] = in.nextInt();
		}
		
		for(int i=0;i<10;i++)
		{
			if(A[i]>B[i]) {
				a += 3;
				S = "A";
			}
			else if (A[i]<B[i]) {
				b += 3;
				S = "B";
			}
			else {
				a += 1;
				b += 1;
			}
		}
		System.out.println(a+" "+b);
		if(a>b) {
			System.out.println("A");
		}else if( a<b) {
			System.out.println("B");
		}else {
			System.out.println(S);
		}
	}

}
