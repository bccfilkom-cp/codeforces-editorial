
import java.util.Scanner;

public class main {
    public static void main(String[] args){ 
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0) {
            int n = in.nextInt();
            int k = in.nextInt();

            long[] A = new long[n];
            long[] B = new long[n];

            boolean f = false;

            for(int i = 0; i < n; i++) {
                A[i] = in.nextLong();
                if (A[i] <= k) f = true;
            }
            for(int i = 0; i < n; i++) {
                B[i] = in.nextLong();
            }

            if(!f) {
                System.out.println(0);
                continue;
            }

            int r = 0, l = 0,len=0; long tmp=A[0];
            while(r < n - 1) {
                if(B[r] % B[r+1] == 0 && tmp + A[r+1] <= k) {
                    tmp += A[r+1];
                } else if(B[r] % B[r+1] == 0) {
                    tmp += A[r+1];
                    tmp -= A[l++];
                } else {
                    len = Math.max(len, r - l + 1);
                    l = r + 1;  
                    tmp = A[l];
                }

                r++;
            }
            len = Math.max(len, r - l + 1);
            System.out.println(len);
        }
    }
}