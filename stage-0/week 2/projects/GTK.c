#include <gtk/gtk.h>

// Function called when button is clicked
void on_button_clicked(GtkWidget *widget, gpointer data)
{
    GtkWidget *label = GTK_WIDGET(data);
    gtk_label_set_text(GTK_LABEL(label), "Button Clicked!");
}

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *label;
    GtkWidget *vbox;

    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTK Desktop App");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 200);
    gtk_container_set_border_width(GTK_CONTAINER(window), 20);

    // Close event
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create vertical box
    vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Create label
    label = gtk_label_new("Welcome to GTK GUI Application");
    gtk_box_pack_start(GTK_BOX(vbox), label, TRUE, TRUE, 0);

    // Create button
    button = gtk_button_new_with_label("Click Me");
    gtk_box_pack_start(GTK_BOX(vbox), button, TRUE, TRUE, 0);

    // Connect button signal
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), label);

    // Show all widgets
    gtk_widget_show_all(window);

    // Run application
    gtk_main();

    return 0;
}