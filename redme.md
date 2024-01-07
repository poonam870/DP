git commands:

git clone http
git status
git add filename   // for one file
for many files: git add .

git commit -m "some msg"
push command:
push local repo to content to remote repo.
git push orgin main
pull command:
get the latest version of a repository from another user (remote) and merge it into your current branch
git pull origin main
create new branch:
git checkout -b <new-branch-name>
switch back to an existing branch
git switch <BranchName>
list all branches in the repo
git branch
delete a branch
git branch -d <BranchName>
merge two branches together
git merge <BranchName>
rebase two branches together, without creating a merge commit
git rebase <BranchName>
abort a conflicting rebase
git rebase --abort
mark conflicts as resolved
git add .    //adds all changes since last commit
continue after resolving conflicts
git rebase --continue
show log of commits
git log
view the diff between two points in history
git diff [first-commit]..[second-commit]
checkout a specific commit
git checkout [commitId]
cherry pick a commit to another branch
git cherry-pick [commitId]
reset current HEAD pointer to a previous state
git reset --hard [commitId]</s>
#include "../src/utilities/utility_classes.hpp"

