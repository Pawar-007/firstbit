package dao;

import Model.Admin;
import Model.Employee;
import Model.HR;
import Model.SalesManager;
import java.util.ArrayList;
public class EmployeeDAO {

	static ArrayList emp;
	
	static {
        emp=new ArrayList();
		emp.add(new HR(101, "Ranjit", 50000, 5000));
		emp.add(new HR(102, "Amit", 48000, 4500));
		emp.add(new HR(103, "Sneha", 47000, 4000));
        
		emp.add(new SalesManager(201, "Karan", 60000, 12, 8000));
		emp.add(new SalesManager(202, "Meena", 58000, 15, 7500));
		emp.add(new SalesManager(203, "Rohit", 62000, 10, 9000));

		emp.add(new Admin(301, "Pragati", 70000, 10000));
		emp.add(new Admin(302, "Isha", 68000, 9500));
		emp.add(new Admin(303, "Pooja", 72000, 11000));
		emp.add(new Admin(304, "Shubham", 75000, 12000));

	}
    
	public boolean addEmployee(Employee e) {
        if(emp.contains(e)) {
        	return false;
        }
		emp.add(e);
		return true;
	}

	public Employee getById(int id) {

		for (int i = 0; i < emp.size(); i++) {
            Employee em=(Employee)emp.get(i);
			if (em.getId()==id) {
				return em;
			}
		}

		return null;
	}

	public boolean updateSalary(int id, double newSalary) {

		for (int i = 0; i < emp.size(); i++) {
            Employee em=(Employee)emp.get(i);
			if (em.getId()==id) {

				em.setSalary(newSalary);
				return true;
			}
		}

		return false;
	}

	public boolean deleteEmployee(int id) {

		for (int i = 0; i < emp.size(); i++) {
            Employee em=(Employee)emp.get(i);
			if (em.getId() == id) {
                emp.remove(i);
				return true;
			}
		}

		return false;
	}

	public Employee[] getAllEmployees() {

		Employee[] result = new Employee[emp.size()];
		
		for (int i = 0; i < emp.size(); i++) {
			result[i] =(Employee)emp.get(i);
		}
		
		return result;
	}
}