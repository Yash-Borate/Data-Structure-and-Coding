import java.io.*;
import java.math.*;
import java.util.*;

public class _RSA {
  public static double gcd(double a, double h)
  {
    
    double temp;
    while (true) {
      temp = a % h;
      if (temp == 0)
        return h;
      a = h;
      h = temp;
    }
  }
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);

    System.out.println("enter prime value for p :");
    double p = sc.nextInt();
    
    System.out.println("enter prime value for q;");
        double q = sc.nextInt();
      
 
  
    double n = p * q;
 
   
    double e = 2;
    double phi = (p - 1) * (q - 1);
    while (e < phi) {

      if (gcd(e, phi) == 1)
        break;
      else
        e++;
    }
    int k = 2; 
    double d = (1 + (k * phi)) / e;
 
  
    System.out.println("enter the messgae value:");
    double msg = sc.nextDouble();
 
    System.out.println("Message data = " + msg);
 
    
    double c = Math.pow(msg, e);
    c = c % n;
    System.out.println("Encrypted data = " + c);
 
    
    double m = Math.pow(c, d);
    m = m % n;
    System.out.println("Original Message Sent = " + m);
  }
}