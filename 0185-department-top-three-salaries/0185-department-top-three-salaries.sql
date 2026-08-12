# Write your MySQL query statement below
SELECT
  X.Department,
  X.Employee,
  X.Salary
FROM
  (
    SELECT
      D.Name AS Department,
      E.Name AS Employee,
      E.Salary,
      DENSE_RANK() OVER (
        PARTITION BY D.Name
        ORDER BY
          E.Salary DESC
      ) AS dep_sal_rank
    FROM
      Employee E
      INNER JOIN Department D ON E.DepartmentId = D.Id
  ) X
WHERE
  X.dep_sal_rank <4;