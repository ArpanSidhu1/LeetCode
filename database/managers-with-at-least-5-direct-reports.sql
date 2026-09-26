SELECT name
FROM Employee e
WHERE id in (SELECT managerId FROM Employee GROUP BY managerId HAVING count(*)>=5);
