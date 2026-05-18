import React from "react";
import "./Employee.css";

const EmployeeTable = () => {
  const employees = [
    {
      id: 1,
      image: "https://i.pravatar.cc/50?img=1",
      name: "Amit Sharma",
      email: "amit@gmail.com",
      dob: "1998-05-12",
      salary: 45000,
    },
    {
      id: 2,
      image: "https://i.pravatar.cc/50?img=2",
      name: "Riya Patil",
      email: "riya@gmail.com",
      dob: "2000-11-21",
      salary: 52000,
    },
    {
      id: 3,
      image: "https://i.pravatar.cc/50?img=3",
      name: "John Doe",
      email: "john@gmail.com",
      dob: "1995-03-09",
      salary: 60000,
    },
  ];

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