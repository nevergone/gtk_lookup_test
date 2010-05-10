#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gnome.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_btnAbout_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
 //megjeleniti a nevjegyablakot:
 gtk_widget_show (create_frmAbout());
}


void
on_btnExit_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
 //kilep a programbol:
 gtk_main_quit ();
}

void
on_btnOpen_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
 //megszerezzuk a foablakra mutato pointert(amelyik ablak tartalmazza azt a gombot, amire kattintottak):
 GtkWidget * FoablakMutato = gtk_widget_get_toplevel (GTK_WIDGET(button));
 //a main.c -ben tortent hozzarendeles alapjan megszerzi a mellekablakra mutato pointert:
 GtkWidget * MellekablakMutato = gtk_object_get_data (GTK_OBJECT(FoablakMutato), "masodik_ablak");
 //megjeleniti a mellekablakot:
 gtk_widget_show (MellekablakMutato);
}

void
on_btnClose_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
 //megszerezzuk a mutatot, ami arra az ablakra mutat, ami a gombot tartalmazza:
 GtkWidget * MellekAblak = gtk_widget_get_toplevel (GTK_WIDGET(button));
 //elrejtjuk a mellekablakot:
 gtk_widget_hide (MellekAblak);
}

void
on_btn1_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
 //megszerezzuk a foablakra mutato pointert(amelyik ablak tartalmazza azt a gombot, amire kattintottak):
 GtkWidget * FoablakMutato = gtk_widget_get_toplevel (GTK_WIDGET(button));
 //a main.c -ben tortent hozzarendeles alapjan megszerzi a mellekablakra mutato pointert:
 GtkWidget * MellekablakMutato = gtk_object_get_data (GTK_OBJECT(FoablakMutato), "masodik_ablak");
 //az interface.c -ben tortent hozzarendeles alapjan (mellekablak es az azon levo cimke van osszerendelve) megszerezzuk a cimkere mutato pointert:
 GtkWidget * MellekCimke = gtk_object_get_data (GTK_OBJECT(MellekablakMutato), "mellek-cimke");
 //megvaltoztatjuk a cimke feliratat:
 gtk_label_set_text (GTK_LABEL(MellekCimke), "1");
 }

void
on_btn2_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
 //lasd az 1 es gomb szignalkezelojet... on_btn1_clicked ()
 GtkWidget * FoablakMutato = gtk_widget_get_toplevel (GTK_WIDGET(button));
 GtkWidget * MellekablakMutato = gtk_object_get_data (GTK_OBJECT(FoablakMutato), "masodik_ablak");
 GtkWidget * MellekCimke = gtk_object_get_data (GTK_OBJECT(MellekablakMutato), "mellek-cimke");
 gtk_label_set_text (GTK_LABEL(MellekCimke), "2");
}


void
on_btn3_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
 //lasd az 1 es gomb szignalkezelojet... on_btn1_clicked ()
 GtkWidget * FoablakMutato = gtk_widget_get_toplevel (GTK_WIDGET(button));
 GtkWidget * MellekablakMutato = gtk_object_get_data (GTK_OBJECT(FoablakMutato), "masodik_ablak");
 GtkWidget * MellekCimke = gtk_object_get_data (GTK_OBJECT(MellekablakMutato), "mellek-cimke");
 gtk_label_set_text (GTK_LABEL(MellekCimke), "3");
}

void
on_btnA_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
 //lasd az 1 es gomb szignalkezelojet... on_btn1_clicked ()
  GtkWidget * MellekablakMutato = gtk_widget_get_toplevel (GTK_WIDGET(button));
 GtkWidget * FoablakMutato = gtk_object_get_data (GTK_OBJECT (MellekablakMutato), "elso_ablak");
 GtkWidget * FoCimke = gtk_object_get_data (GTK_OBJECT(FoablakMutato), "fo-cimke");
 gtk_label_set_text ( GTK_LABEL (FoCimke), "A");
}

void
on_btnB_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
 //lasd az 1 es gomb szignalkezelojet... on_btn1_clicked ()
  GtkWidget * MellekablakMutato = gtk_widget_get_toplevel (GTK_WIDGET(button));
 GtkWidget * FoablakMutato = gtk_object_get_data (GTK_OBJECT (MellekablakMutato), "elso_ablak");
 GtkWidget * FoCimke = gtk_object_get_data (GTK_OBJECT(FoablakMutato), "fo-cimke");
 gtk_label_set_text ( GTK_LABEL (FoCimke), "B");
}


void
on_btnC_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
 //lasd az 1 es gomb szignalkezelojet... on_btn1_clicked ()
  GtkWidget * MellekablakMutato = gtk_widget_get_toplevel (GTK_WIDGET(button));
 GtkWidget * FoablakMutato = gtk_object_get_data (GTK_OBJECT (MellekablakMutato), "elso_ablak");
 GtkWidget * FoCimke = gtk_object_get_data (GTK_OBJECT(FoablakMutato), "fo-cimke");
 gtk_label_set_text ( GTK_LABEL (FoCimke), "C");
}
