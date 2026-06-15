import React from "react";
import "./Employee.css";

const EmployeeTable = ({employees}) => {
  
  return (
    <div className="table-container">
      <h2>Employee Details</h2>

      <table className="employee-table">
        <thead>
          <tr>
            <th>ID</th>
            <th>Image</th>
            <th>Name</th>
            <th>Email</th>
            <th>DOB</th>
            <th>Salary</th>
          </tr>
        </thead>

        <tbody>
          {employees.map((emp) => (
            <tr key={emp.id}>
              <td>{emp.id}</td>
              <td>
                <img src={emp.image} alt={emp.name} className="emp-img" />
              </td>
              <td>{emp.name}</td>
              <td>{emp.email}</td>
              <td>{emp.dob}</td>
              <td>₹{emp.salary}</td>
            </tr>
          ))}
        </tbody>
      </table>
    </div>
  );
};

export default EmployeeTable;