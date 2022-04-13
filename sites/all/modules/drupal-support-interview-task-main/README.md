# What is this about?
This task meant to measure needed job skills and it is a part of the hiring evaluation process. we expect you to be comfortable and enjoying while doing the task.
### Job skills
* Debugging skills.
* Ability to work with legacy code.
* Attention to details.
* Knowledge of Drupal and its releases.
* Find problems and fixing the bug in a timely manner.

# Task Details
> This a sample Todolist custom module used to help the backend users to manage their todo list, module developed using Drupal 7. and it has bugs needed to be fixed and some missing features that have to be added.


### Todolist built to allow users with permission to:
* Add his tasks and manage all other's tasks.
* Import and export tasks in CSV format.
* Create Drupal block to list the latest 5 tasks.
* Action to close the task if he has the role of "close tasks".

*There is a cron job to remind the user of his today tasks.*

## Here you go:

1. Install Drupal 7.
2. Clone the repo into the modules path.   
2. Start by add/develop the missing features as
    1. Update the current logic to allow the user to only manage (CRUD) his tasks.
    2. Create a new role to be able to view and manage all tasks.
    3. Update the Drupal block called "Todolist" to display the latest 5 tasks and the tasks due date is today. and assign to homepage content region.
3. Fix cron job issue.
4. Finally Upgrade the module to be compatible with Drupal 8.

## Task deliverables:
1. Git repo has: 
    * Drupal 7 -> original module with bugs fixed and missing features added.
    * Drupal 8 -> upgraded version of the above developed compatible with Drupal 8.
2. README file describes all challenges and issues you faced.
3. Task rate on a scale of 1 to 5.


## Prerequisites
### Drupal 7
* PHP => 5.6
* MySql => 5.6 
* Date module
### Drupal 8
* PHP => 7.4
* MySql => 5.7

## Note
Using docker is a plus.

**Thank you, can't wait to join us.** 
