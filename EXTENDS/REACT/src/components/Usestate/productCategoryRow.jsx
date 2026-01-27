

const ProduitCategoryRow = ({category}) => {
    return <tr>
        <td colSpan={2} style={{fontWeight: "bold"}}>
            {category}
        </td>
    </tr>
}

export default ProduitCategoryRow
