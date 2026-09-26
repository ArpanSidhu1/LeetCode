SELECT contest_id,ROUND(COUNT(DISTINCT(user_id))*100/(SELECT count(*) FROM Users),2) AS percentage
FROM Register
GROUP BY contest_id
ORDER BY percentage desc,contest_id asc;
