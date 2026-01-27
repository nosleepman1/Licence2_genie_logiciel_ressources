
 function Input ({value, onChange}) {

    return <div>
        <input
            className="form-control" 
            type="text" 
            value={value} 
            onChange={(e) =>  onChange(e.target.value)} 
            placeholder="Rechercher..."/>
    </div>
}

export default Input