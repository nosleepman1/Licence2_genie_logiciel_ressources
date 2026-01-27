

export function Checkbox({checked, onChange, label, id}) {
    return(
        <div>
            <div className="container">
                <input
                className="form-check-input" 
                type="checkbox"
                checked={checked}
                onChange={(e) => onChange(e.target.checked)} 
                id={id}
            />
            <label className="form-check-label" htmlFor={id}>{label}</label>
            </div>
        </div>
    )
}