# Car-dekho-data-set
1. Project Overview

Objective: Analyzed a dataset of used cars (from Car Dekho) to uncover the core factors that dictate vehicle resale value.

---------------------------------------------------------------------------------------------------------------------------------------------------

2. Technologies Used

- Python

- Pandas

- Matplotlib

- Seaborn

---------------------------------------------------------------------------------------------------------------------------------------------------

3. Data Exploration (EDA)

- Data Cleaning: Handled missing values (NaNs) and standardized column formats.

- Visualization: Generated count plots for market inventory, histograms for price distribution, and box/scatter plots to evaluate feature relationships against selling price.

---------------------------------------------------------------------------------------------------------------------------------------------------

4. Key Insights

- Transmission Premium: Automatic transmission vehicles command a significantly higher median selling price compared to manual vehicles.

- Fuel Type Valuations: Diesel cars generally hold their value better and sell at higher average prices than Petrol or CNG alternatives.

- Depreciation Factors: There is a strong inverse relationship between a car's selling price and both its car_age and km_driven.

- Price Distribution: The dataset exhibits a strong right-skew, meaning the vast majority of vehicles fall into budget tiers, with a long tail of luxury outliers.

---------------------------------------------------------------------------------------------------------------------------------------------------


Visualisations

- Box plot
- Histogram
- Bar chart
- Scatter plot


---------------------------------------------------------------------------------------------------------------------------------------------------

5. Conclusion

The analysis successfully mapped out the primary drivers of a used car's market value: transmission type, fuel type, vehicle age, and total mileage.

By transforming categorical and mixed-type data into a clean, numeric format, the dataset is now fully structured and optimized to train a regression-based predictive model.
