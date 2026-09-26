SELECT eu.unique_id AS unique_id,e.name # we have to display the unique id & name.
FROM  Employees e
LEFT JOIN EmployeeUNI eu
USING (id);
 