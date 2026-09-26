import pandas as pd

def fix_names(users: pd.DataFrame) -> pd.DataFrame:
    users["name"] = users["name"].apply(lambda x: ' '.join([x.split()[0].capitalize()] + [w.lower() for w in x.split()[1:]]))
    users = users.sort_values(by='user_id',ascending=True)
    return users