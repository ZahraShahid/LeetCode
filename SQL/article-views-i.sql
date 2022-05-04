--https://leetcode.com/problems/article-views-i/
Select distinct author_id as id
from Views 
where author_id = viewer_id 
order by id