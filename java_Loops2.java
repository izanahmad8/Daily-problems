import java.io.*;
import java.util.*;

public class Solution {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int q = sc.nextInt();
    for (int j = 0; j < q; j++) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      int n = sc.nextInt();
      int res = 0;
      for (int i = 0; i < n; i++) {
        res += Math.pow(2, i);
        System.out.print(a + (res * b) + " ");
      }
      System.out.println();
    }
  }
}
