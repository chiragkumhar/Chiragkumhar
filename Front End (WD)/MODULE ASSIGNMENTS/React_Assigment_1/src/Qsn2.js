import React from 'react'

function Qsn2() {
    let name = "Prajapati"
    return (
        <div>
            <h1>Chirag {name}</h1>
            <Qsn></Qsn>
        </div>
    )
}
class Qsn extends React.Component {
    render() {
        return (
            <>
                <h1>Welcome to JSX"</h1>
            </>
        )
    }
}
export default Qsn2