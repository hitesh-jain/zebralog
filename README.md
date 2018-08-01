INTRODUCTION
-----------

Zebralog shoutbox helps to setup site with Questions and their corresponding answers.

INSTALLATION
------------

* Install Drupal site with Standard Profile.
* Once the basic site is up, you will have to run below drush commands or you can also enable them manually.
  * Drush commands:
    * drush en bootstrap zebralog_shoutbox -y
    * drush fr zebralog_shoutbox -y
    * drush cc all
  * Manually enabled:
    * Navigate to Appearance (admin/appearance) -> Enable and Set default Bootstrap 7.x-3.21 theme.
    * Navigate to Modules listing -> Enable Zebralog_Shoutbox feature module.
    * Navigate to Feature view page (admin/structure/features/zebralog_shoutbox) -> Revert all the components (if anything is in overriden state).

CONFIGURATION
-------------

* For adding questions you will need to have online moderator or administrator role.
  * Navigate to home page -> Click Add Questions to add them.
* For moderating answers posted by user :
  * Navigate to admin/content/comment -> If you want to block some of the answers, select required answers to
  block and then Select Unpublish the seleted comments option -> Update.
  * If you need to approve some of the blocked answers, navigate to question page with any of the above roles and then click approve. You can also use admin listing (admin/content/comment/approval) to approve them.

WEBSITE REFERENCE
-----------------------

* http://dev-zebralog.pantheonsite.io/ - Demo website to showcase functionality.

MAINTAINERS
---------

* Hitesh Jain
