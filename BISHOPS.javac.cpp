/* package whatever; // don't place package name! */
 
import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in=new Scanner(System.in);
		BigInteger b[]=new BigInteger[104];
		int i,j;
		b[0]=BigInteger.ONE;
		for(i=1;i<104;i++)
		{
			b[i]=b[i-1].multiply(BigInteger.valueOf(10));
			
		}
		while(in.hasNext())
		{
		String s=in.next();
		int l=s.length();
		BigInteger sum=BigInteger.ZERO;
		for(i=l-1;i>=0;i--)
		{
			sum=sum.add(b[l-1-i].multiply(BigInteger.valueOf(s.charAt(i)-'0')));
		}
		sum=sum.multiply(BigInteger.valueOf(2));
		sum=sum.subtract(BigInteger.valueOf(2));
		if(sum.equals(BigInteger.valueOf(0))==true) sum=BigInteger.ONE;
		System.out.println(sum);
		}
		
	}
}
