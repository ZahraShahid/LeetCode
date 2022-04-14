-- https://leetcode.com/problems/customers-who-never-order/

Select name as Customers
from Customers
where id NOT IN(Select customerId 
                from Orders       
               )