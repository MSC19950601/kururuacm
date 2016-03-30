package com.kururu;

import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Main {

    static int charLength = 12;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNextInt()){
            int n = scanner.nextInt();
            String lines[] = new String[n];
            int res[] = new int[n];
            for(int i = 0;i < n;i++){
                lines[i] = scanner.next();
                res[i] = calculate(lines[i]);
            }

            for(int s:res){
                System.out.println(s);
            }
        }
    }

    private static int calculate(String line) {
        Set<Character> s = new TreeSet<>();
        for(char c:line.toCharArray()){
            s.add(c);
        }
        int counts[] = new int[s.size()];
        char[] chars = line.toCharArray();
        for(int i = 0;i < chars.length;i++){
            Iterator<Character> itetator = s.iterator();
            int temp = 0;
            Character next;
            while(itetator.hasNext()){
                next = itetator.next();
                if(next == chars[i]){
                    counts[i] = temp;
                    s.remove(next);
                    break;
                }else
                    temp++;
            }
        }
        int sum = 1;
        for(int i = 0;i < counts.length;i++){
            sum = sum + counts[i] * factorial(charLength - i -1);
        }
        return sum;
    }

    private static int factorial(int i) {
        if(i > 1){
            return i*factorial(i-1);
        }else{
            return 1;
        }
    }

}
