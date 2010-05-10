#include <gtk/gtk.h>

/*
 * Standard gettext macros.
 */
#ifdef ENABLE_NLS
#  include <libintl.h>
#  undef _
#  define _(String) dgettext (PACKAGE, String)
#  ifdef gettext_noop
#    define N_(String) gettext_noop (String)
#  else
#    define N_(String) (String)
#  endif
#else
#  define textdomain(String) (String)
#  define gettext(String) (String)
#  define dgettext(Domain,Message) (Message)
#  define dcgettext(Domain,Message,Type) (Message)
#  define bindtextdomain(Domain,Directory) (Domain)
#  define _(String) (String)
#  define N_(String) (String)
#endif

void
on_btnAbout_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_btnExit_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_btnOpen_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_btnClose_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_btn1_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_btn2_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_btn3_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_btnA_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_btnB_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_btnC_clicked                        (GtkButton       *button,
                                        gpointer         user_data);
