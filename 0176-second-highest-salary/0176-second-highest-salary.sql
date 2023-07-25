# Write your MySQL query statement below
SELECT MAX(salary) AS SecondHighestSalary FROM Employee where salary < (SELECT MAX(salary) FROM Employee);