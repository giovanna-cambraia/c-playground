from sklearn.linear_model import LogisticRegression

# -------------------------
# 1. DATASET
# -------------------------
# distance, light → action
# 0 = IDLE, 1 = MOVING

X = [
    [5, 20],
    [30, 80],
    [8, 10],
    [25, 60],
    [12, 30],
    [40, 90],
]

y = [0, 1, 0, 1, 0, 1]

# -------------------------
# 2. TRAIN MODEL
# -------------------------
model = LogisticRegression() # Formula with knobs --> Imagine a scale with two sides: [distance × knob_A] + [light × knob_B] + bias

# If the result is big → predict MOVING (1)
# If the result is small → predict IDLE (0)
# model.fit(X, y)

# -------------------------
# 3. OUTPUT RESULTS
# -------------------------
print("Weights:", model.coef_[0]) # coef_ tells you how much each sensor pushes the decision.
print("Bias:", model.intercept_[0]) # intercept_ is the default lean before any sensor data is considered.
print("\nTesting predictions:")
for sample in X:
    pred = model.predict([sample])
    print(sample, "→", pred[0])