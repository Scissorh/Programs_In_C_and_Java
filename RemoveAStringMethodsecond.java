//it progrma for removing a string using recursion
import java.util.Scanner;

public class Main
{
    static String removeB(String s)
    {
       if(s.length()==0) return "";
       String smallAns=removeB(s.substring(1));
       char currChar=s.charAt(0);
       if(currChar != 'a'){
           return currChar+smallAns;
       }
       else{
           return smallAns;
       }
    }
	public static void main(String[] args) {
	    System.out.println("Enter A String :");
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
	    System.out.println(removeB(str));
	}
}
