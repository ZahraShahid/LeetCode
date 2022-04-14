-- https://leetcode.com/problems/big-countries/

Select name, population, area
from World
where area>=3000000 OR population >=25000000

-- # Select name, population, area
-- # from World
-- # where area>=3000000 
-- # UNION
-- # Select name, population, area
-- # from World
-- # where population >=25000000
