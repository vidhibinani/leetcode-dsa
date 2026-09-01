# Write your MySQL query statement below
SELECT w.id AS id
FROM Weather AS w
JOIN Weather AS y
ON DATEDIFF(w.recorddate,y.recorddate)=1
WHERE w.temperature>y.temperature;