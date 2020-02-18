import java.util.Scanner;

public class Main {
    public static void main(String[] argv) {
        Scanner input = new Scanner(System.in);

        int count = input.nextInt();
        int temperature[] = new int[count];

        for (int i = 0; i < count; i++) {
            temperature[i] = input.nextInt();
        }

        int hot_time = 0;
        int max_time = 0;

        for (int i = 0; i < count; i++) {
            if(temperature[i] > 0) {
                hot_time++;
                if(hot_time > max_time)
                    max_time = hot_time;
            } else {
                if(hot_time > max_time)
                    max_time = hot_time;
                hot_time = 0;
            }
        }

        System.out.println(max_time);
    }
}
