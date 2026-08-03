# Write your MySQL query statement below
SELECT 
    *, 
    IF(x + y > z && y + z > x &&  x + z > y, "Yes", "No") AS triangle 
FROM 
    Triangle;