from calendar import month


DAYS_IN_MONTH = 30


def find( number_of_days ):

	year = int(number_of_days / 365)
	month = int((number_of_days % 365) /
				DAYS_IN_MONTH)
	days = (number_of_days % 365) % DAYS_IN_MONTH
	
	print("years = ",year,
		"\nmonth = ",month,
		"\ndays = ",days)

number_of_days = int(input("Enter number of days here : "))
find(number_of_days)