import { useState, useEffect} from 'react'
import './App.css'
import Input from './components/Usestate/Input'
import ProductCategoryRow from './components/Usestate/productCategoryRow'
import ProductRow from './components/Usestate/productRow'
import { Checkbox } from './components/Usestate/CheckBox'
import FetchApi from './components/Useeffect/FetchApi'

const Products = [

    {
    "id": 201,"name": "Smartphone Stellar S10",
    "category": "Téléphones",
    "price": 899.99,
    "available": true
  },
  {
    "id": 202,
    "name": "Téléphone portable MiniCom",
    "category": "Téléphones",
    "price": 129.50,
    "available": false
  },
  {
    "id": 203,
    "name": "Phablette UltraView Pro",
    "category": "Téléphones",
    "price": 549.00,
    "available": true
  },
  {
    "id": 301,
    "name": "PC Portable Gaming X7",
    "category": "Ordinateurs",
    "price": 1950.00,
    "available": true
  },
  {
    "id": 302,
    "name": "Ordinateur de bureau NanoDesk",
    "category": "Ordinateurs",
    "price": 680.75,
    "available": true
  },
  {
    "id": 303,
    "name": "Macbook Air M3",
    "category": "Ordinateurs",
    "price": 1299.99,
    "available": false
  },
  {
    "id": 304,
    "name": "Chromebook Lite C2",
    "category": "Ordinateurs",
    "price": 329.90,
    "available": true
  },
  {
    "id": 305,
    "name": "Station de travail ProTower",
    "category": "Ordinateurs",
    "price": 3500.00,
    "available": false
  }

  ]



function App() {
 

  return (
    <div>
      <FetchApi />
    </div>
  )
}

function ProductTable({products}) {

  let rows = []
  let lastCategory = null

  for (let product of products) {
      if (product.category !== lastCategory) {
        rows.push(<ProductCategoryRow key={product.category} category={product.category} />)
      }
      rows.push(<ProductRow key={product.name} product={product}/>)
      lastCategory = product.category
  }

  return (
    <table className='table table-striped'>
      <thead>
        <tr>
          <th>Name</th>
          <th>price</th>
        </tr>
      </thead>

      <tbody>
        {rows}
      </tbody>

    </table>
  )
}

export default App



