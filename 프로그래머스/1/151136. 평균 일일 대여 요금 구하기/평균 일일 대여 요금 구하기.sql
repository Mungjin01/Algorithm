select round(avg(daily_fee)) as avg_free
from car_rental_company_car
where car_type = 'SUV';