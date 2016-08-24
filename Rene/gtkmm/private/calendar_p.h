// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CALENDAR_P_H
#define _GTKMM_CALENDAR_P_H


#include <gtkmm/private/widget_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Calendar_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Calendar CppObjectType;
  typedef GtkCalendar BaseObjectType;
  typedef GtkCalendarClass BaseClassType;
  typedef Gtk::Widget_Class CppClassParent;
  typedef GtkWidgetClass BaseClassParent;

  friend class Calendar;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void month_changed_callback(GtkCalendar* self);
  static void day_selected_callback(GtkCalendar* self);
  static void day_selected_double_click_callback(GtkCalendar* self);
  static void prev_month_callback(GtkCalendar* self);
  static void next_month_callback(GtkCalendar* self);
  static void prev_year_callback(GtkCalendar* self);
  static void next_year_callback(GtkCalendar* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_CALENDAR_P_H */

