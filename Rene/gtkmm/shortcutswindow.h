// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_SHORTCUTSWINDOW_H
#define _GTKMM_SHORTCUTSWINDOW_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2016 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkmm/window.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkShortcutsWindow GtkShortcutsWindow;
typedef struct _GtkShortcutsWindowClass GtkShortcutsWindowClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ShortcutsWindow_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Toplevel which shows help for shortcuts.
 *
 * A ShortcutsWindow shows brief information about the keyboard shortcuts
 * and gestures of an application. The shortcuts can be grouped, and you can
 * have multiple sections in this window, corresponding to the major modes of
 * your application.
 *
 * Additionally, the shortcuts can be filtered by the current view, to avoid
 * showing information that is not relevant in the current application context.
 *
 * The recommended way to construct a ShortcutsWindow is with Builder,
 * by populating a ShortcutsWindow with one or more ShortcutsSection
 * objects, which contain ShortcutsGroup objects that in turn contain objects
 * of class ShortcutsShortcut.
 *
 * @newin{3,20}
 *
 * @ingroup Widgets
 */

class ShortcutsWindow : public Window
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ShortcutsWindow CppObjectType;
  typedef ShortcutsWindow_Class CppClassType;
  typedef GtkShortcutsWindow BaseObjectType;
  typedef GtkShortcutsWindowClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ShortcutsWindow(ShortcutsWindow&& src) noexcept;
  ShortcutsWindow& operator=(ShortcutsWindow&& src) noexcept;

  // noncopyable
  ShortcutsWindow(const ShortcutsWindow&) = delete;
  ShortcutsWindow& operator=(const ShortcutsWindow&) = delete;

  ~ShortcutsWindow() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ShortcutsWindow_Class;
  static CppClassType shortcutswindow_class_;

protected:
  explicit ShortcutsWindow(const Glib::ConstructParams& construct_params);
  explicit ShortcutsWindow(GtkShortcutsWindow* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkShortcutsWindow*       gobj()       { return reinterpret_cast<GtkShortcutsWindow*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkShortcutsWindow* gobj() const { return reinterpret_cast<GtkShortcutsWindow*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  ShortcutsWindow();

  /** Unsets the property_view_name().
   * All groups will then be shown.
   *
   * This is a convenience method that calls property_view_name().reset_value().
   */
  void unset_view_name();

  
  /** The name of the section to show.
   * 
   * This should be the section-name of one of the Gtk::ShortcutsSection
   * objects that are in this shortcuts window.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_section_name() ;

/** The name of the section to show.
   * 
   * This should be the section-name of one of the Gtk::ShortcutsSection
   * objects that are in this shortcuts window.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_section_name() const;

  /** The view name by which to filter the contents.
   * 
   * This should correspond to the Gtk::ShortcutsGroup::property_view() property of some of
   * the Gtk::ShortcutsGroup objects that are inside this shortcuts window.
   * 
   * Set this to <tt>nullptr</tt> to show all groups.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_view_name() ;

/** The view name by which to filter the contents.
   * 
   * This should correspond to the Gtk::ShortcutsGroup::property_view() property of some of
   * the Gtk::ShortcutsGroup objects that are inside this shortcuts window.
   * 
   * Set this to <tt>nullptr</tt> to show all groups.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_view_name() const;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ShortcutsWindow
   */
  Gtk::ShortcutsWindow* wrap(GtkShortcutsWindow* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SHORTCUTSWINDOW_H */

