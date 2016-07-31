import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
class Codechef
{
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0)
        {
            int n=in.nextInt();
            calculateFactorial(n);
        }
    }
    public static void calculateFactorial(int n) {
        BigInteger result = BigInteger.ONE;
        for (int i=1; i<=n; i++) {
            result = result.multiply(BigInteger.valueOf(i));
        }
        System.out.println(result);
    }
}