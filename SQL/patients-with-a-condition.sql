-- https://leetcode.com/problems/patients-with-a-condition/

Select patient_id, patient_name, conditions   
from Patients 
where (conditions LIKE'%DIAB1%' or conditions LIKE'DIAB1%') and conditions NOT LIKE 'SADIAB1%'