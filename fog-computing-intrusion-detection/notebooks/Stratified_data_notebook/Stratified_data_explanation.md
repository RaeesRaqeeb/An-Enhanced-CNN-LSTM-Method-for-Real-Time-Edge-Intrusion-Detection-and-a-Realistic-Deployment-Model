Stratified sampling has two main steps:
 Step 1: Divide the entire population into distinct subgroups called "strata."
 Step 2: Take a random sample from each stratum, where the sample size is proportionate to the stratum's size in the total population.

Our Data: A "Population in 60 files"

Your Population:The entire 14GB of data.
Your Strata: The different categories in your 'Label' column (e.g., 'Benign', 'DDoS', 'Mirai', 'Spoofing', etc.).

The Problem:We can't load all 14GB at once to find the total size of the 'Benign' stratum.

The Solution: "Iterative Proportionate Sampling"

Here is the breakdown of what the python script does:

1.It treats File 1 as a "Mini-Population." It loads only that one file.
2.It applies Step 1 (Identify Strata): It uses `df.groupby('Label')` to instantly find all the strata ('Benign', 'DDoS', etc.) within that single file.
3.It applies Step 2 (Proportionate Formula): This is the magic. When we use `.sample(frac=0.2)`, we are telling pandas:
    "For every stratum you just found, randomly select 10% of its rows."

So, if File 1 has 100,000 'Benign' rows and 50,000 'DDoS' rows, the script will pick:
 10,000 random 'Benign' rows (10% of 100,000)
 5,000 random 'DDoS' rows (10% of 50,000)

This is a perfect proportionate stratified sample of that one file.

The script then repeats this for all 60 files, collecting all the 20% samples into one list.

When it finishes, the final `development_sample.csv` is the combination of these 60 small, stratified samples. Because you took the same proportion (20%) from every stratum in every file, the final result is a mathematically correct 10% proportionate stratified sample of the entire 14GB population.