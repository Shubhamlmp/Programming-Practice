# Importing the data
import pandas as pd
 
# Our dataframe. The csv file can be downloaded fro above hyperlink.
df = pd.read_csv('supermarket_sales - Sheet1.csv')
 
# We drop some redundant columns
df.drop(['Date', 'Invoice ID', 'Tax 5%'], axis=1, inplace=True)
# Display the dataset
df.head()
