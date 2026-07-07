# Fake News Detection using Machine Learning

## Project Overview

This project detects whether a news article is **Fake** or **Real** using Machine Learning techniques. It uses Natural Language Processing (NLP) with TF-IDF Vectorization to convert news articles into numerical features and compares the performance of multiple classification algorithms.

## Technologies Used

- Python
- Pandas
- NumPy
- Scikit-learn
- Matplotlib
- Seaborn

## Machine Learning Models

- Logistic Regression
- Decision Tree Classifier
- Random Forest Classifier

## Feature Extraction

- TF-IDF Vectorizer

## Dataset

The project uses two datasets:

- **Fake.csv** – Fake news articles
- **True.csv** – Real news articles

## Project Workflow

1. Load the datasets.
2. Clean and preprocess the news text.
3. Merge and shuffle the datasets.
4. Convert text into numerical features using TF-IDF Vectorizer.
5. Split the data into training and testing sets.
6. Train the following machine learning models:
   - Logistic Regression
   - Decision Tree
   - Random Forest
7. Evaluate the models using:
   - Accuracy Score
   - Classification Report
   - Confusion Matrix
8. Predict whether a user-entered news article is Fake or Real.

## Model Performance

| Model | Accuracy |
|--------|----------|
| Logistic Regression | **98.89%** |
| Decision Tree | **99.50%** |
| Random Forest | **99.51%** |

## Confusion Matrix Results

### Logistic Regression
- True Negative: **5866**
- False Positive: **72**
- False Negative: **53**
- True Positive: **5229**

### Decision Tree
- True Negative: **5913**
- False Positive: **25**
- False Negative: **31**
- True Positive: **5251**

### Random Forest
- True Negative: **5903**
- False Positive: **35**
- False Negative: **20**
- True Positive: **5262**

## How to Run

1. Install the required Python libraries or pip install -r requirements.txt.
2. Open the notebook in Google Colab or Jupyter Notebook.
3. Upload `Fake.csv` and `True.csv`.
4. Run all notebook cells.
5. Enter a news article to predict whether it is Fake or Real.

## Future Improvements

- Use larger and more recent datasets.
- Improve text preprocessing.
- Implement deep learning models such as LSTM or BERT.
- Deploy the project using Flask or Streamlit.

## Author

**Ajay Kumar**
