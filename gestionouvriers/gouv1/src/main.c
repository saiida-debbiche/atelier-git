/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *gouv;
  GtkWidget *ajtouv;
  GtkWidget *mdfouv;
  GtkWidget *rechouv;
  GtkWidget *absouv;
  GtkWidget *suppouv;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  gouv = create_gouv ();
  gtk_widget_show (gouv);
  /*ajtouv = create_ajtouv ();
  gtk_widget_show (ajtouv);
  mdfouv = create_mdfouv ();
  gtk_widget_show (mdfouv);
  rechouv = create_rechouv ();
  gtk_widget_show (rechouv);
  absouv = create_absouv ();
  gtk_widget_show (absouv);
  suppouv = create_suppouv ();
  gtk_widget_show (suppouv);*/

  gtk_main ();
  return 0;
}

