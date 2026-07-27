# Write your MySQL query statement below
select customer_id,count(*)as count_no_trans
from Visits left join Transactions
on Visits.visit_id=Transactions.visit_id
WHERE Transactions.visit_id IS NULL
GROUP BY customer_id;