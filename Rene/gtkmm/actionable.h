// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_ACTIONABLE_H
#define _GTKMM_ACTIONABLE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkActionableInterface GtkActionableInterface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkActionable GtkActionable;
typedef struct _GtkActionableClass GtkActionableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Actionable_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

//TODO: Have the appropriate widgets derive from this interface when there is
//an ABI break.  See:
//http://developer.gnome.org/gtk3/3.3/GtkActionable.html#GtkActionable.implementations.

/** This interface provides a convenient way of associating widgets with
 * actions on a ApplicationWindow or Application.
 *
 * It primarily consists of two properties: "action-name" and "action-target".
 * There are also some convenience APIs for setting these properties.
 *
 * This interface is presently only meaningful if used on a widget that is (or
 * will be) located inside of a ApplicationWindow and can only be used to
 * associate the widget with actions on that window, or its associated
 * Application.
 * @newin{3,4}
 */

class Actionable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Actionable CppObjectType;
  typedef Actionable_Class CppClassType;
  typedef GtkActionable BaseObjectType;
  typedef GtkActionableInterface BaseClassType;

  // noncopyable
  Actionable(const Actionable&) = delete;
  Actionable& operator=(const Actionable&) = delete;

private:
  friend class Actionable_Class;
  static CppClassType actionable_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Actionable();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Actionable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Actionable(GtkActionable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Actionable(Actionable&& src) noexcept;
  Actionable& operator=(Actionable&& src) noexcept;

  ~Actionable() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkActionable*       gobj()       { return reinterpret_cast<GtkActionable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkActionable* gobj() const { return reinterpret_cast<GtkActionable*>(gobject_); }

private:


public:
  
  /** Gets the action name for @a actionable.
   * 
   * See set_action_name() for more information.
   * 
   * @newin{3,4}
   * 
   * @return The action name, or <tt>nullptr</tt> if none is set.
   */
  Glib::ustring get_action_name() const;
  
  /** Specifies the name of the action with which this widget should be
   * associated.  If @a action_name is <tt>nullptr</tt> then the widget will be
   * unassociated from any previous action.
   * 
   * Usually this function is used when the widget is located (or will be
   * located) within the hierarchy of a Gtk::ApplicationWindow.
   * 
   * Names are of the form “win.save” or “app.quit” for actions on the
   * containing Gtk::ApplicationWindow or its associated Gtk::Application,
   * respectively.  This is the same form used for actions in the Menu
   * associated with the window.
   * 
   * @newin{3,4}
   * 
   * @param action_name An action name, or <tt>nullptr</tt>.
   */
  void set_action_name(const Glib::ustring& action_name);

  
  /** Gets the current target value of @a actionabe.
   * 
   * See set_action_target_value() for more information.
   * 
   * @newin{3,4}
   * 
   * @return The current target value.
   */
  Glib::VariantBase get_action_target_value();
  
  /** Gets the current target value of @a actionabe.
   * 
   * See set_action_target_value() for more information.
   * 
   * @newin{3,4}
   * 
   * @return The current target value.
   */
  const Glib::VariantBase get_action_target_value() const;

  
  /** Sets the target value of an actionable widget.
   * 
   * If @a target_value is <tt>nullptr</tt> then the target value is unset.
   * 
   * The target value has two purposes.  First, it is used as the
   * parameter to activation of the action associated with the
   * Gtk::Actionable widget. Second, it is used to determine if the widget
   * should be rendered as “active” — the widget is active if the state
   * is equal to the given target.
   * 
   * Consider the example of associating a set of buttons with a Action
   * with string state in a typical “radio button” situation.  Each button
   * will be associated with the same action, but with a different target
   * value for that action.  Clicking on a particular button will activate
   * the action with the target of that button, which will typically cause
   * the action’s state to change to that value.  Since the action’s state
   * is now equal to the target value of the button, the button will now
   * be rendered as active (and the other buttons, with different targets,
   * rendered inactive).
   * 
   * @newin{3,4}
   * 
   * @param target_value A Variant to set as the target value, or <tt>nullptr</tt>.
   */
  void set_action_target_value(const Glib::VariantBase& target_value);

   //gtk_actionable_set_action_target() is just a C convenience method.

  
  /** Sets the action-name and associated string target value of an
   * actionable widget.
   * 
   * This allows for the effect of both set_action_name()
   * and set_action_target_value() in the common case that
   * the target is string-valued.
   * 
   *  @a detailed_action_name is a string of the form
   * `"action::target"` where `action`
   * is the action name and `target` is the string to use
   * as the target.
   * 
   * @newin{3,4}
   * 
   * @param detailed_action_name The detailed action name.
   */
  void set_detailed_action_name(const Glib::ustring& detailed_action_name);

  /** The name of the associated action, like 'app.quit'.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_action_name() ;

/** The name of the associated action, like 'app.quit'.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_action_name() const;

  /** The parameter for action invocations.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::VariantBase > property_action_target() ;

/** The parameter for action invocations.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::VariantBase > property_action_target() const;


    virtual Glib::ustring get_action_name_vfunc() const;


    virtual void set_action_name_vfunc(const Glib::ustring& action_name);


    virtual Glib::VariantBase get_action_target_value_vfunc() const;


    virtual void set_action_target_value_vfunc(const Glib::VariantBase& action_target_value);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Actionable
   */
  Glib::RefPtr<Gtk::Actionable> wrap(GtkActionable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_ACTIONABLE_H */

