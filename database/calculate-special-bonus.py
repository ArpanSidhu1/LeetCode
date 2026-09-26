import pandas as pd

def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    df= employees
    df["bonus"] = df[(df["employee_id"]%2!=0) & (df["name"].str[0]!="M")]["salary"]
    df["bonus"].fillna(0,inplace=True)
    return df[["employee_id","bonus"]].sort_values(by="employee_id")