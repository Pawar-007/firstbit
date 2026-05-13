
class BankAccount{
	int accNo;
	String accHolderName;
	double currentBalance;
	static double interestRate=10;
	public BankAccount(int accNo, String accHolderName, double currentBalance,double interestRate) {
		this.accNo = accNo;
		this.accHolderName = accHolderName;
		this.currentBalance = currentBalance;
		//this.interestRate=interestRate;
	}
	
	public int getAccNo() {
		return accNo;
	}
	public void setAccNo(int accNo) {
		this.accNo = accNo;
	}
	public String getAccHolderName() {
		return accHolderName;
	}
	public void setAccHolderName(String accHolderName) {
		this.accHolderName = accHolderName;
	}
	public double getCurrentBalance() {
		return currentBalance;
	}
	public void setCurrentBalance(double currentBalance) {
		this.currentBalance = currentBalance;
	}
	static void setInterestRate(double intRate) {
		interestRate=intRate;
	}
	public void display() {
		System.out.println("Account no :"+this.accNo);
		System.out.println("Account holder name :"+this.accHolderName);
		System.out.println("Account currentBalance :"+this.currentBalance);
		System.out.println("Account interestRate :"+interestRate);
	}
	
}
public class staticKey {
    
	public static void main(String[] args) {
		BankAccount b1=new BankAccount(100,"bhushan",1000,20);
		b1.display();
		
		BankAccount b2=new BankAccount(101,"harshal",2311,10);
		b2.display();
		
		BankAccount b3=new BankAccount(102,"mayur",12110,10000);
        b3.display();
        
        System.out.println();
        BankAccount.setInterestRate(8.5);
        b1.display();
        b2.display();
        b3.display();
	}

}
