import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from pylab import rcParams


df = pd.read_excel('data.xlsx')

df['native-country'].unique()

df['native-country'].replace(' ?',np.NaN,inplace=True)

df['salary'].unique()

salary_country = pd.crosstab(df['native-country'],df['salary']).reset_index().sort_values(by=[' <=50K'],ascending=False).head(5)

plt.figure(figsize=(12,9))
plt.rcParams.update({'font.size':15})

x = list(salary_country['native-country'].unique()) 
x_axis = np.arange(len(x))
plt.bar(x_axis - 0.2, salary_country[' >50K'], 0.4, label = '>50k')
plt.bar(x_axis + 0.2, salary_country[' <=50K'], 0.4, label = ' <=50K')
plt.xticks(x_axis, x,rotation=90)
plt.xlabel("country name")
plt.ylabel("Number of people")
plt.title("Number of people in top 5 country")
plt.legend()
plt.show()