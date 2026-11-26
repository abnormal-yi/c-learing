#!/bin/bash

# Set your GitHub repository URL here
REPO_URL="https://github.com/abnormal-yi/c-learing"

# Set your GitHub email and name here
GIT_EMAIL="hoseaayub322@gmail.com"
GIT_NAME="abnormal-yi"

# Configure Git with your name and email
git config --global user.name "$GIT_NAME"
git config --global user.email "$GIT_EMAIL"

# Initialize the repository
mkdir gitsploit
cd gitsploit
git init
git remote add origin $REPO_URL

# Create an initial commit
echo "Hello World" > README.md
git add README.md
git commit -m "init"
git push -u origin master

# Add a .gitattributes file to handle line endings
echo "* text=auto" > .gitattributes
git add .gitattributes
git commit -m "Add .gitattributes to handle line endings"

# Loop through years, months, and days to create commits starting from April 4, 2024
for Y in {2024..2028}
do
  for M in {01..12}
  do
    for D in {01..31}
    do
      # Start from April 4, 2024
      if [[ "$Y" -eq 2024 && "$M" -eq 04 && "$D" -lt 4 ]]; then
        continue
      fi

      # Ensure the date is valid
      if date -d "$Y-$M-$D" >/dev/null 2>&1
      then
        echo "Committed on $M/$D/$Y" > commit.md
        export GIT_COMMITTER_DATE="$Y-$M-$D 12:00:00"
        export GIT_AUTHOR_DATE="$Y-$M-$D 12:00:00"
        git add commit.md -f
        git commit --author="$GIT_NAME <$GIT_EMAIL>" --date="$Y-$M-$D 12:00:00" -m "$M $D $Y"
      fi
    done
  done
done

# Push all commits at once
git push origin master
