import React from 'react'

function Qsn3({ a }) {
    return (
        <div className="Container">
            <div className="Row">
                {a.map((v) => {
                    return (
                        <div key={v.id} className="Card">
                            <h2>{v.name}</h2>
                            <h3>{v.age}</h3>
                            <h2>{v.location}</h2>
                        </div>
                    )
                })}
            </div>
        </div>
    )
}
function Qsn3Card({ b }) {
    return (
        <>
            <Qsn3 a={b} />
            <Count></Count>
        </>
    )
}
class Count extends React.Component {

    state = { a: 0 }

    Inc = () => {
        this.setState(() => {
            return { a: this.state.a + 1 }
        })
    }
    render() {
        return (
            <>
                <h1>{this.state.a}</h1>
                <button onClick={this.Inc}>+</button>
            </>
        )
    }
}
export default Qsn3Card