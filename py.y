# Creating truth tables for 5 practice questions and displaying them as dataframes
import pandas as pd
from itertools import product
import caas_jupyter_tools as tools

def impl(a, b):
    # implication: A -> B is False only when A is True and B is False
    return (not a) or b

# Q1: P->Q, Q->R => P->R (3 variables)
rows_q1 = []
for P, Q, R in product([True, False], repeat=3):
    rows_q1.append({
        "P": P, "Q": Q, "R": R,
        "P→Q": impl(P, Q),
        "Q→R": impl(Q, R),
        "P→R": impl(P, R)
    })
df_q1 = pd.DataFrame(rows_q1)

# Q2: Converse check: P->Q => Q->P (2 variables)
rows_q2 = []
for P, Q in product([True, False], repeat=2):
    rows_q2.append({
        "P": P, "Q": Q,
        "P→Q": impl(P, Q),
        "Q→P": impl(Q, P)
    })
df_q2 = pd.DataFrame(rows_q2)

# Q3: Contrapositive check: P->Q <=> ¬Q->¬P (2 variables)
rows_q3 = []
for P, Q in product([True, False], repeat=2):
    rows_q3.append({
        "P": P, "Q": Q,
        "P→Q": impl(P, Q),
        "¬Q→¬P": impl(not Q, not P)
    })
df_q3 = pd.DataFrame(rows_q3)

# Q4: Inverse check: P->Q => ¬P->¬Q (2 variables)
rows_q4 = []
for P, Q in product([True, False], repeat=2):
    rows_q4.append({
        "P": P, "Q": Q,
        "P→Q": impl(P, Q),
        "¬P→¬Q": impl(not P, not Q)
    })
df_q4 = pd.DataFrame(rows_q4)

# Q5: Chain of 4: P->Q, Q->R, R->S => P->S (4 variables)
rows_q5 = []
for P, Q, R, S in product([True, False], repeat=4):
    rows_q5.append({
        "P": P, "Q": Q, "R": R, "S": S,
        "P→Q": impl(P, Q),
        "Q→R": impl(Q, R),
        "R→S": impl(R, S),
        "P→S": impl(P, S)
    })
df_q5 = pd.DataFrame(rows_q5)

# Display dataframes to the user
tools.display_dataframe_to_user("Q1: P→Q, Q→R ⇒ P→R (Truth Table)", df_q1)
tools.display_dataframe_to_user("Q2: Converse check (Truth Table)", df_q2)
tools.display_dataframe_to_user("Q3: Contrapositive check (Truth Table)", df_q3)
tools.display_dataframe_to_user("Q4: Inverse check (Truth Table)", df_q4)
tools.display_dataframe_to_user("Q5: Chain P→Q, Q→R, R→S ⇒ P→S (Truth Table)", df_q5)
