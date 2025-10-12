import java.util.Scanner;
public class BASICS {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int X = scanner.nextInt();
            System.out.println("Hello, World. \n" + X);
        }
    }
}