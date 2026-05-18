package exception;
import java.lang.Exception;
class EmptyNameException extends Exception{
	 public String toString(){
		return "name filde should not be empty";
	}
}
class UnderageException extends Exception{
	public String toString(){
		return "UnderageException:Age need >=17";
	}
}
class InvalidPercentageException extends Exception{
	public String toString(){
		return "InvalidPercentageException:give percentage between 0 and 100";
	}
}
class NotFitForAdmissionException extends Exception{
	public String toString(){
		return "NotFitForAdmissionException:Percentage is not suitable for admission <35";
	}
}
class FeesNotPaidException extends Exception{
	public String toString(){
		return "FeesNotPaidException:for Admission pay fee first";
	}
}
class InsufficientFeesException extends Exception{
	public String toString(){
		return "InsufficientFeesException:fees is less that 30% ";
	}
}
class AdmissionForm{
	String studentName;
	int age;
	double percentage;
	double courseFees;
	double feesPaid;
	AdmissionForm(String studentName,int age,double percentage,double courseFees,double feesPaid){
		this.age=age;
		this.studentName=studentName;
		this.percentage=percentage;
		this.courseFees=courseFees;
		this.feesPaid=feesPaid;
	}
	public int spaceInString() {
		int len=0;
		for(int i=0;i<this.studentName.length();i++) {
			if(this.studentName.charAt(i)==' ') {
				len++;
			}
		}
		return len;
	}
	public void validateForm() {
		try {
			if(this.studentName.length()==0 || spaceInString()==this.studentName.length()) {
				throw new EmptyNameException();
			}
			else if(this.age<17) {
				throw new UnderageException();
			}
			else if(this.percentage<0 || this.percentage>100) {
				throw new InvalidPercentageException();
			}
			else if(this.percentage<35) {
				throw new NotFitForAdmissionException();
			}
			else if(this.feesPaid==0) {
				throw new FeesNotPaidException();
			}
			else if(this.feesPaid<(0.3*this.courseFees)){
				throw new InsufficientFeesException();
			}
			else {
				System.out.println("Form is correct");
			}
		}
		catch(Exception e) {
			System.out.println(e.toString());
		}
	}
}

class CustumException{

	public static void main(String[] args) {
		AdmissionForm am=new AdmissionForm("bhushan",18, 40, 10000,4000);
        am.validateForm();
	}

}
