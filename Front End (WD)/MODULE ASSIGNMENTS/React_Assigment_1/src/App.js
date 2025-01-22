import logo from './logo.svg';
import './App.css';
import Qsn2 from './Qsn2';
import Qsn3Card from './Qsn3';

function App() {
        const arry=[
        {id:1,name:"Chirag",age:23,location:"Ahmedabad"}
    ]
  return (
    <div className="App">
      <h1>Hello,React!</h1>
      <Qsn2></Qsn2>
      <Qsn3Card b={arry}></Qsn3Card>
    </div>
  );
}

export default App;
