import java.util.Scanner;

class StudentGradeTracker {
    private int[] grades = new int[100];
    private int count = 0;

    public void addGrade(int grade) {
        if (count < grades.length) {
            grades[count] = grade;
            count++;
        }
    }

    public double calculateAverage() {
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += grades[i];
        }
        if (count == 0) {
            return 0;
        } else {
            return (double) sum / count;
        }
    }

    public int highestGrade() {
        int highest = Integer.MIN_VALUE;
        for (int i = 0; i < count; i++) {
            if (grades[i] > highest) {
                highest = grades[i];
            }
        }
        return highest;
    }

    public void listPassingStudents() {
        System.out.println("Passing students:");
        for (int i = 0; i < count; i++) {
            if (grades[i] >= 50) {
                System.out.println(grades[i]);
            }
        }
    }

    public static void main(String[] args) {
        StudentGradeTracker tracker = new StudentGradeTracker();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Student Grade Tracker");

        while (true) {
            System.out.print("Enter a student's grade (or -1 to stop): ");
            int grade = scanner.nextInt();
            if (grade == -1) {
                break;
            }
            tracker.addGrade(grade);
        }

        System.out.println("Average grade: " + tracker.calculateAverage());
        System.out.println("Highest grade: " + tracker.highestGrade());
        tracker.listPassingStudents();
    }
}