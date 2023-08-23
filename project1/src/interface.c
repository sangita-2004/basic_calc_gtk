/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *entry1;
  GtkWidget *addition;
  GtkWidget *dot;
  GtkWidget *substract;
  GtkWidget *three;
  GtkWidget *two;
  GtkWidget *mul;
  GtkWidget *four;
  GtkWidget *seven;
  GtkWidget *CE;
  GtkWidget *clear;
  GtkWidget *eight;
  GtkWidget *five;
  GtkWidget *nine;
  GtkWidget *six;
  GtkWidget *div;
  GtkWidget *modulo;
  GtkWidget *zero;
  GtkWidget *one;
  GtkWidget *bksp;
  GtkWidget *equal;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 104, 32);
  gtk_widget_set_size_request (entry1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  addition = gtk_button_new_with_mnemonic (_("+"));
  gtk_widget_show (addition);
  gtk_fixed_put (GTK_FIXED (fixed1), addition, 304, 232);
  gtk_widget_set_size_request (addition, 76, 27);

  dot = gtk_button_new_with_mnemonic (_("."));
  gtk_widget_show (dot);
  gtk_fixed_put (GTK_FIXED (fixed1), dot, 136, 224);
  gtk_widget_set_size_request (dot, 76, 27);

  substract = gtk_button_new_with_mnemonic (_("-"));
  gtk_widget_show (substract);
  gtk_fixed_put (GTK_FIXED (fixed1), substract, 304, 200);
  gtk_widget_set_size_request (substract, 77, 27);

  three = gtk_button_new_with_mnemonic (_("3"));
  gtk_widget_show (three);
  gtk_fixed_put (GTK_FIXED (fixed1), three, 216, 192);
  gtk_widget_set_size_request (three, 77, 27);

  two = gtk_button_new_with_mnemonic (_("2"));
  gtk_widget_show (two);
  gtk_fixed_put (GTK_FIXED (fixed1), two, 136, 192);
  gtk_widget_set_size_request (two, 76, 27);

  mul = gtk_button_new_with_mnemonic (_("*"));
  gtk_widget_show (mul);
  gtk_fixed_put (GTK_FIXED (fixed1), mul, 304, 168);
  gtk_widget_set_size_request (mul, 76, 27);

  four = gtk_button_new_with_mnemonic (_("4"));
  gtk_widget_show (four);
  gtk_fixed_put (GTK_FIXED (fixed1), four, 48, 160);
  gtk_widget_set_size_request (four, 68, 27);

  seven = gtk_button_new_with_mnemonic (_("7"));
  gtk_widget_show (seven);
  gtk_fixed_put (GTK_FIXED (fixed1), seven, 48, 128);
  gtk_widget_set_size_request (seven, 68, 27);

  CE = gtk_button_new_with_mnemonic (_("CE"));
  gtk_widget_show (CE);
  gtk_fixed_put (GTK_FIXED (fixed1), CE, 136, 96);
  gtk_widget_set_size_request (CE, 67, 27);

  clear = gtk_button_new_with_mnemonic (_("clr"));
  gtk_widget_show (clear);
  gtk_fixed_put (GTK_FIXED (fixed1), clear, 216, 96);
  gtk_widget_set_size_request (clear, 68, 27);

  eight = gtk_button_new_with_mnemonic (_("8"));
  gtk_widget_show (eight);
  gtk_fixed_put (GTK_FIXED (fixed1), eight, 136, 128);
  gtk_widget_set_size_request (eight, 68, 27);

  five = gtk_button_new_with_mnemonic (_("5"));
  gtk_widget_show (five);
  gtk_fixed_put (GTK_FIXED (fixed1), five, 136, 160);
  gtk_widget_set_size_request (five, 77, 27);

  nine = gtk_button_new_with_mnemonic (_("9"));
  gtk_widget_show (nine);
  gtk_fixed_put (GTK_FIXED (fixed1), nine, 216, 128);
  gtk_widget_set_size_request (nine, 68, 27);

  six = gtk_button_new_with_mnemonic (_("6"));
  gtk_widget_show (six);
  gtk_fixed_put (GTK_FIXED (fixed1), six, 216, 160);
  gtk_widget_set_size_request (six, 77, 27);

  div = gtk_button_new_with_mnemonic (_("/"));
  gtk_widget_show (div);
  gtk_fixed_put (GTK_FIXED (fixed1), div, 304, 136);
  gtk_widget_set_size_request (div, 67, 27);

  modulo = gtk_button_new_with_mnemonic (_("%"));
  gtk_widget_show (modulo);
  gtk_fixed_put (GTK_FIXED (fixed1), modulo, 304, 96);
  gtk_widget_set_size_request (modulo, 75, 35);

  zero = gtk_button_new_with_mnemonic (_("0"));
  gtk_widget_show (zero);
  gtk_fixed_put (GTK_FIXED (fixed1), zero, 40, 224);
  gtk_widget_set_size_request (zero, 77, 27);

  one = gtk_button_new_with_mnemonic (_("1"));
  gtk_widget_show (one);
  gtk_fixed_put (GTK_FIXED (fixed1), one, 40, 192);
  gtk_widget_set_size_request (one, 77, 27);

  bksp = gtk_button_new_with_mnemonic (_("bksp"));
  gtk_widget_show (bksp);
  gtk_fixed_put (GTK_FIXED (fixed1), bksp, 48, 96);
  gtk_widget_set_size_request (bksp, 68, 27);

  equal = gtk_button_new_with_mnemonic (_("="));
  gtk_widget_show (equal);
  gtk_fixed_put (GTK_FIXED (fixed1), equal, 216, 224);
  gtk_widget_set_size_request (equal, 77, 27);

  g_signal_connect ((gpointer) addition, "clicked",
                    G_CALLBACK (on_addition_clicked),
                    NULL);
  g_signal_connect ((gpointer) dot, "clicked",
                    G_CALLBACK (on_dot_clicked),
                    NULL);
  g_signal_connect ((gpointer) substract, "clicked",
                    G_CALLBACK (on_substract_clicked),
                    NULL);
  g_signal_connect ((gpointer) three, "clicked",
                    G_CALLBACK (on_three_clicked),
                    NULL);
  g_signal_connect ((gpointer) two, "clicked",
                    G_CALLBACK (on_two_clicked),
                    NULL);
  g_signal_connect ((gpointer) mul, "clicked",
                    G_CALLBACK (on_mul_clicked),
                    NULL);
  g_signal_connect ((gpointer) four, "clicked",
                    G_CALLBACK (on_four_clicked),
                    NULL);
  g_signal_connect ((gpointer) seven, "clicked",
                    G_CALLBACK (on_seven_clicked),
                    NULL);
  g_signal_connect ((gpointer) CE, "clicked",
                    G_CALLBACK (on_CE_clicked),
                    NULL);
  g_signal_connect ((gpointer) clear, "clicked",
                    G_CALLBACK (on_clear_clicked),
                    NULL);
  g_signal_connect ((gpointer) eight, "clicked",
                    G_CALLBACK (on_eight_clicked),
                    NULL);
  g_signal_connect ((gpointer) five, "clicked",
                    G_CALLBACK (on_five_clicked),
                    NULL);
  g_signal_connect ((gpointer) nine, "clicked",
                    G_CALLBACK (on_nine_clicked),
                    NULL);
  g_signal_connect ((gpointer) six, "clicked",
                    G_CALLBACK (on_six_clicked),
                    NULL);
  g_signal_connect ((gpointer) div, "clicked",
                    G_CALLBACK (on_div_clicked),
                    NULL);
  g_signal_connect ((gpointer) modulo, "clicked",
                    G_CALLBACK (on_modulo_clicked),
                    NULL);
  g_signal_connect ((gpointer) zero, "clicked",
                    G_CALLBACK (on_zero_clicked),
                    NULL);
  g_signal_connect ((gpointer) one, "clicked",
                    G_CALLBACK (on_one_clicked),
                    NULL);
  g_signal_connect ((gpointer) bksp, "clicked",
                    G_CALLBACK (on_bksp_clicked),
                    NULL);
  g_signal_connect ((gpointer) equal, "clicked",
                    G_CALLBACK (on_equal_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, addition, "addition");
  GLADE_HOOKUP_OBJECT (window1, dot, "dot");
  GLADE_HOOKUP_OBJECT (window1, substract, "substract");
  GLADE_HOOKUP_OBJECT (window1, three, "three");
  GLADE_HOOKUP_OBJECT (window1, two, "two");
  GLADE_HOOKUP_OBJECT (window1, mul, "mul");
  GLADE_HOOKUP_OBJECT (window1, four, "four");
  GLADE_HOOKUP_OBJECT (window1, seven, "seven");
  GLADE_HOOKUP_OBJECT (window1, CE, "CE");
  GLADE_HOOKUP_OBJECT (window1, clear, "clear");
  GLADE_HOOKUP_OBJECT (window1, eight, "eight");
  GLADE_HOOKUP_OBJECT (window1, five, "five");
  GLADE_HOOKUP_OBJECT (window1, nine, "nine");
  GLADE_HOOKUP_OBJECT (window1, six, "six");
  GLADE_HOOKUP_OBJECT (window1, div, "div");
  GLADE_HOOKUP_OBJECT (window1, modulo, "modulo");
  GLADE_HOOKUP_OBJECT (window1, zero, "zero");
  GLADE_HOOKUP_OBJECT (window1, one, "one");
  GLADE_HOOKUP_OBJECT (window1, bksp, "bksp");
  GLADE_HOOKUP_OBJECT (window1, equal, "equal");

  return window1;
}

