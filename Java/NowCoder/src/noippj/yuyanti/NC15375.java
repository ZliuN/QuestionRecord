package noippj.yuyanti;

import java.util.Scanner;

public class NC15375 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        int result=1,sum=0;
        for(int i=1;i<=number;i++){
            result=result*i;
            sum=sum+result;
        }
        System.out.println(sum);
    }
}
