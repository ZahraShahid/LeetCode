--https://leetcode.com/problems/fix-names-in-a-table/

Select user_id, CONCAT(UPPER(SUBSTR(name,1,1)),LOWER(SUBSTR(name,2)) ) as name
From Users
Order by user_id