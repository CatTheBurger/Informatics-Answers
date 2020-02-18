import java.util.Scanner;

public class Main {
    public static void main(String[] argv) {
        Scanner input = new Scanner(System.in);

        int index = input.nextInt();
        int numbers[] = new int[index+1];

        if(index > 2) {
           numbers[0] = 0;
           numbers[1] = 1;
           numbers[2] = 1;


           for (int i = 3; i < index+1; i++) {
               numbers[i] = numbers[i - 1] + numbers[i - 2];
           }
        } else {
           numbers[index] = 1;
        }

        System.out.println(numbers[index]);
    }
}
