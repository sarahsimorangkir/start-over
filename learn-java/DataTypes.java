public class DataTypes {
    public static void main(String[] args) {
        // there are primitive types, non-primitive types, and reference types
        // integer types
        byte aSingleByte = 100; // -128 to 127
        short aSmallNumber = 20000; // -32,768 to 32,767
        int anInteger = 2147483647; // -2147483648 to 2147483647
        long aLargeNumber = 9223372036854775807L; // -9223372036854775808 to 9223372036854775808

        // decimal types
        double aDouble = 1.79769313; // 4.9E-324 to 1.7976931348623157E308
        float aFloat = 3.4028F; // 1.4E-45 to 3.4028235E38

        // boolean types
        // characters
        char copyrightSimbol = '\u00A9';

        int number = 15;
        number += 2;
        System.out.println(number);

        System.out.println("This is the percent symbol: " + copyrightSimbol);

        // in Java, string isnt a primitive type bcos only class can have methods

        String hobby = "Swim";
        String hobby1 = "Swim";

        String sameButNot = new String("Sing");
        String sameButNot1 = new String("Sing");

        System.out.println(hobby == hobby1); // TRUE
        System.out.println(sameButNot == sameButNot1); // FALSE
        System.out.println(sameButNot.equals(sameButNot1));//TRUE

        String firstName = "Christ";
        int age = 21;
        String univ = "Harvard";
        double gpa = 3.9;
        char percentSign = '%';
        boolean isThatTrue = false;

        String formattedString = String.format(
                "His name is %s, and he is %d years old. Study in %s, got %f gpa and always attend 100%c classes. lol but its %b",
                firstName, age, univ, gpa, percentSign, isThatTrue);

        System.out.println(formattedString);

    }
}
