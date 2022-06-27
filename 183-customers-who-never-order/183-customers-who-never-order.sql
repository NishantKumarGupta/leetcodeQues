# Write your MySQL query statement below
SELECT name AS Customers
FROM Customers
WHERE NOT EXISTS (
    SELECT *
    FROM Orders
    WHERE Orders.customerId = Customers.id
    )
