import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
public static void main (String[] args) throws java.lang.Exception
{
// your code goes here
Scanner sc=new Scanner(System.in);
long T=sc.nextLong();
while(T-->0)
{
   long A=sc.nextLong();
   long B=sc.nextLong();
   long N=sc.nextLong();
 
   if(N%2!=0)
   {
       A=A*2;
   }
   
       long ans=(long)Math.max(A,B)/(long)Math.min(A,B);
       System.out.println(ans);
   
}
}
}
