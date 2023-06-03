
import java.util.*;
import java.io.*;
class FCSCprog {
public static void main(String[] args) {
// TODO Auto-generated method stub
// int no_p, BT[], WT[], TT[];
// float avg_WT=0, avg_TT=0;
// BT=new int[50];
// WT=new int[50];
// TT=new int[50];
// Scanner sc=new Scanner(System.in);
// System.out.println("Enter the number of processes: ");
// no_p=sc.nextInt();
// System.out.println("Enter the burst time for each process: ");
// for(int i=1;i<=no_p;i++) {
// System.out.println("\tP"+i+": ");
// BT[i]=sc.nextInt();
// }
// for(int i=1;i<=no_p;i++) {
// WT[i]=WT[i-1]+BT[i-1];
// avg_WT=avg_WT+WT[i];
// }
// avg_WT=avg_WT/no_p;
// for(int i=1;i<=no_p;i++) {
// TT[i]=WT[i]+BT[i];
// avg_TT=avg_TT+TT[i];
// }
// avg_TT=avg_TT/no_p;
// System.out.println("------------------------------------------------------");
// System.out.println("Process\tBurst Time\tWaiting Time\tTurnaround Time");
// System.out.println("----------------------------------------------------------------");
// for(int i=1;i<=no_p;i++) {
// System.out.println("P"+i+"\t"+BT[i]+"\t\t"+WT[i]+"\t\t"+TT[i]);
// }
// System.out.println("Average waiting time: "+avg_WT);
// System.out.println("Average turnaround time: "+avg_TT);

int pno,wt[],tt[],bt[];
float avg_wt=0,avg_tt=0;

wt=new int[50];
tt=new int[50];
bt=new int[50];

Scanner sc=new Scanner(System.in);

System.out.println("enter the no of process ");
pno=sc.nextInt();

System.out.println("enter the burst time for process ");

for(int i=1;i<=pno;i++){
    System.out.println("\np" + i +" : ");
    bt[i]=sc.nextInt();
}

for(int i=1;i<=pno;i++){
    wt[i]=wt[i-1]+bt[i-1];
    avg_wt+=wt[i];
}

avg_wt=avg_wt/pno;

for(int i=1;i<=pno;i++){
    tt[i]=wt[i]+bt[i];
    avg_tt+=tt[i];
}

avg_tt=avg_tt/pno;


System.out.println("------------------------------------------------------------");

System.out.println("process \t burst time \t waiting time \t turnaround time");

System.out.println("------------------------------------------------------------");

for(int i=1;i<=pno;i++){
    System.out.println("p"+i+"\t\t"+bt[i]+"\t\t"+wt[i]+"\t\t"+tt[i]);
}
System.out.println("average of waiting time : "+avg_wt);
System.out.println("average of teroun around time :"+avg_tt);
}
}