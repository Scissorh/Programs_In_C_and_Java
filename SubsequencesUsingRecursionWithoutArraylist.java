import java.util.*;

public class Main{
    
    static void printSSQ(String s,String currAns)
    {
        if(s.length() == 0)
        {
            System.out.println(currAns);
            return;
        }
        char currChar = s.charAt(0);
        String remaining=s.substring(1);
        printSSQ(remaining, currAns+ currChar);
        printSSQ(remaining,currAns);
    }
    public static void main(String args[])
    {
    printSSQ("abc","");    
    }
}
