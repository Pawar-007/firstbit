import Navbar from "./Navbar"
import  EmployeeTable  from "./EmployeeDetails.jsx"
function App() {
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
    
   <>

        <Navbar/>
        <EmployeeTable employees={employees}/>
        
   
   </>
  )
}

export default App
