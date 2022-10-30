import java.io.*;  
class UserInputDemo   
{  
public static void main(String[] args) throws IOException  
{  
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
  int i=0,sum=0;
  System.out.println("Enter the no. of Inputs:");
  int n=Integer.parseInt(br.readLine());
  int[] a = new int[n];
  for(i=0;i<n;i++)
  {
    System.out.println("Enter a["+(i+1)+"] :-");
    a[i]=Integer.parseInt(br.readLine());
    sum+=a[i];
  }
  System.out.println("The SUM is:");
  System.out.println(sum);
}  
}

Output:
Enter the no. of Inputs:
3
Enter a[1] :-
4
Enter a[2] :-
10
Enter a[3] :-
4
The SUM is:
18
