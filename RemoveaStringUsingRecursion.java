import java.util.Scanner;

public class Main
{
    static String removeA(String s,int idx)
    {
        if(idx==s.length()) return "";//Base case 
        String smallAns=removeA(s,idx+1);//Recurvice work
        char currChar=s.charAt(idx);
        if(currChar != 'a')
        {
            return currChar + smallAns;
        }
        else{
            return smallAns;
        }
    }
	public static void main(String[] args) {
	    System.out.println("Enter A String :");
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
	    System.out.println(removeA(str,0));
	}
}
