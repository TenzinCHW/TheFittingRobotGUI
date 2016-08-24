// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_MENUITEM_P_H
#define _GTKMM_MENUITEM_P_H


#include <gtkmm/private/bin_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class MenuItem_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MenuItem CppObjectType;
  typedef GtkMenuItem BaseObjectType;
  typedef GtkMenuItemClass BaseClassType;
  typedef Gtk::Bin_Class CppClassParent;
  typedef GtkBinClass BaseClassParent;

  friend class MenuItem;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void activate_callback(GtkMenuItem* self);
  static void activate_item_callback(GtkMenuItem* self);
  static void toggle_size_request_callback(GtkMenuItem* self, int* p0);
  static void toggle_size_allocate_callback(GtkMenuItem* self, gint p0);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_MENUITEM_P_H */

