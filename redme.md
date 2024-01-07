git commands:

git clone http
<br>
git status
<br>
git add filename   // for one file
<br>
for many files: git add .
<br>
git commit -m "some msg"
<br>
push command:
<br>
push local repo to content to remote repo.
<br>
git push orgin main
<br>
pull command:
<br>
get the latest version of a repository from another user (remote) and merge it into your current branch
<br>
git pull origin main
<br>
create new branch:
<br>
git checkout -b <new-branch-name>
<br>
switch back to an existing branch
<br>
git switch <BranchName>
<br>
list all branches in the repo
<br>
git branch
<br>
delete a branch
<br>
git branch -d <BranchName>
<br>
merge two branches together
<br>
git merge <BranchName>
<br>
rebase two branches together, without creating a merge commit
<br>
git rebase <BranchName>
<br>
abort a conflicting rebase
<br>
git rebase --abort
<br>
mark conflicts as resolved
<br>
git add .    //adds all changes since last commit
<br>
continue after resolving conflicts
<br>
git rebase --continue
<br>
show log of commits
<br>
git log
<br>
view the diff between two points in history
<br>
git diff [first-commit]..[second-commit]
<br>
checkout a specific commit
<br>
git checkout [commitId]
<br>
cherry pick a commit to another branch
<br>
git cherry-pick [commitId]
<br>
reset current HEAD pointer to a previous state
<br>
git reset --hard [commitId]</s>
<br>
#include "../src/utilities/utility_classes.hpp"
<br>

