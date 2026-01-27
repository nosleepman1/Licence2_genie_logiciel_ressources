

const ProductRow = ({product}) => {

    let style = product.available ?  {color : 'black'} : {color : 'red'}

    return <tr>
        <td style={style}> {product.name} </td>
        <td style={style}> {product.price} </td>
    </tr>
}


export default ProductRow