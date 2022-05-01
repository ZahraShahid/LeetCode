-- https://leetcode.com/problems/calculate-special-bonus/
Select employee_id, if ((employee_id%2 = 1) AND name NOT LIKE('M%'),salary,0) as Bonus
from Employees
order by employee_id
