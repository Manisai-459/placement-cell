import java.util.*;
class cheitu{
    public static void main(String args[]){
        int n,m;
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter the numb of rows and columns for the matrix : ");
        n = cin.nextInt();
        m = cin.nextInt();
        int[][] a = new int[n][m];
        for(int i = 0;i<n;i++){
            System.out.print("Enter row "+(i+1)+" elements: ");
            for(int j = 0;j<m;j++)
                a[i][j] = cin.nextInt();
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++)
                System.out.print(a[i][j]+" ");
            System.out.println();
        }
        int min = Integer.MAX_VALUE,max = Integer.MIN_VALUE,sum=0,even = 0,odd = 0,positive = 0,negative = 0;
        System.out.println("min value "+min);
        System.out.println("max value "+max);
            for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(min > a[i][j])
                    min = a[i][j];
                if(max < a[i][j])
                    max = a[i][j];
                if(a[i][j] % 2 == 0)
                    even += 1;
                else 
                    odd += 1;
                if(a[i][j] >= 0)
                    positive += 1;
                else
                    negative += 1;
                sum += a[i][j];
            }
        }
        System.out.println("Min element : "+min);
        System.out.println("Max element : "+max);
        System.out.println("Sum of all : "+sum);
        System.out.println("Average : " +sum/(n+m));
        System.out.println("Number of even : " + even);
        System.out.println("Number of odd : "+odd);
        System.out.println("Number of positive "+ positive);
        System.out.println("Number of negative "+ negative);
    }
}