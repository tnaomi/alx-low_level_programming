#!/bin/bash


GIT='git --git-dir=./.git'

echo "what file would you like to commit?"
read COMMIT


$GIT add $COMMIT

echo "Write the commit message..."
read MSG
read MSGG
read MSGGG

$GIT commit -m ""$MSG" "$MSGG" "$MSGGG""

echo "Pushing the repo."

$GIT push

echo "Success"
