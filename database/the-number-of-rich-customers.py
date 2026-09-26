import pandas as pd

def count_rich_customers(store: pd.DataFrame) -> pd.DataFrame:
    rich_customer = store[store["amount"]>500]
    rich_customer_count = rich_customer['customer_id'].nunique()
    result = pd.DataFrame({'rich_count': [rich_customer_count]})
    return result

