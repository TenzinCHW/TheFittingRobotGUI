// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_PLACESSIDEBAR_H
#define _GTKMM_PLACESSIDEBAR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2013 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <vector>

#include <gtkmm/scrolledwindow.h>
#include <gtkmm/menu.h>
#include <giomm/file.h>
#include <giomm/volume.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkPlacesSidebar GtkPlacesSidebar;
typedef struct _GtkPlacesSidebarClass GtkPlacesSidebarClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class PlacesSidebar_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{
class MountOperation;
}

namespace Gtk
{

/** Sidebar that displays frequently-used places in the file system.
 *
 * Gtk::PlacesSidebar is a widget that displays a list of frequently-used places in the
 * file system:  the user's home directory, the user's bookmarks, and volumes and drives.
 * This widget is used as a sidebar in Gtk::FileChooser and may be used by file managers
 * and similar programs.
 *
 * The places sidebar displays drives and volumes, and will automatically mount
 * or unmount them when the user selects them.
 *
 * Applications can hook to various signals in the places sidebar to customize
 * its behavior.  For example, they can add extra commands to the context menu
 * of the sidebar.
 *
 * While bookmarks are completely in control of the user, the places sidebar also
 * allows individual applications to provide extra shortcut folders that are unique
 * to each application.  For example, a Paint program may want to add a shortcut
 * for a Clipart folder.  You can do this with Gtk::PlacesSidebar::add_shortcut().
 *
 * To make use of the places sidebar, an application at least needs to connect
 * to the Gtk::PlacesSidebar::open-location signal.  This is emitted when the
 * user selects in the sidebar a location to open.  The application should also
 * call Gtk::PlacesSidebar::set_location() when it changes the currently-viewed
 * location.
 *
 * @ingroup Widgets
 * @newin{3,10}
 */


class PlacesSidebar
  : public ScrolledWindow
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef PlacesSidebar CppObjectType;
  typedef PlacesSidebar_Class CppClassType;
  typedef GtkPlacesSidebar BaseObjectType;
  typedef GtkPlacesSidebarClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  PlacesSidebar(PlacesSidebar&& src) noexcept;
  PlacesSidebar& operator=(PlacesSidebar&& src) noexcept;

  // noncopyable
  PlacesSidebar(const PlacesSidebar&) = delete;
  PlacesSidebar& operator=(const PlacesSidebar&) = delete;

  ~PlacesSidebar() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class PlacesSidebar_Class;
  static CppClassType placessidebar_class_;

protected:
  explicit PlacesSidebar(const Glib::ConstructParams& construct_params);
  explicit PlacesSidebar(GtkPlacesSidebar* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkPlacesSidebar*       gobj()       { return reinterpret_cast<GtkPlacesSidebar*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkPlacesSidebar* gobj() const { return reinterpret_cast<GtkPlacesSidebar*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  /** Creates a new Gtk::PlacesSidebar widget.
   *
   * The application should connect to at least the "open-location" signal
   * to be notified when the user makes a selection in the sidebar.
   */
  PlacesSidebar();


  /** Sets the way in which the calling application can open new locations from
   * the places sidebar.  For example, some applications only open locations
   * “directly” into their main view, while others may support opening locations
   * in a new notebook tab or a new window.
   * 
   * This function is used to tell the places @a sidebar about the ways in which the
   * application can open new locations, so that the sidebar can display (or not)
   * the “Open in new tab” and “Open in new window” menu items as appropriate.
   * 
   * When the Gtk::PlacesSidebar::signal_open_location() signal is emitted, its flags
   * argument will be set to one of the @a flags that was passed in
   * set_open_flags().
   * 
   * Passing 0 for @a flags will cause Gtk::PLACES_OPEN_NORMAL to always be sent
   * to callbacks for the “open-location” signal.
   * 
   * @newin{3,10}
   * 
   * @param flags Bitmask of modes in which the calling application can open locations.
   */
  void set_open_flags(PlacesOpenFlags flags =  PLACES_OPEN_NORMAL);
  
  /** Gets the open flags.
   * 
   * @newin{3,10}
   * 
   * @return The Gtk::PlacesOpenFlags of @a sidebar.
   */
  PlacesOpenFlags get_open_flags() const;

  
  /** Sets the location that is being shown in the widgets surrounding the
   *  @a sidebar, for example, in a folder view in a file manager.  In turn, the
   *  @a sidebar will highlight that location if it is being shown in the list of
   * places, or it will unhighlight everything if the @a location is not among the
   * places in the list.
   * 
   * @newin{3,10}
   * 
   * @param location Location to select, or #<tt>nullptr</tt> for no current path.
   */
  void set_location(const Glib::RefPtr<const Gio::File>& location);

  // transfer full
  // get_location returns a new Gio::File; modifiying the returned value does not modify the places sidebar
  
  /** Gets the currently-selected location in the @a sidebar.  This can be #<tt>nullptr</tt> when
   * nothing is selected, for example, when set_location() has
   * been called with a location that is not among the sidebar’s list of places to
   * show.
   * 
   * You can use this function to get the selection in the @a sidebar.  Also, if you
   * connect to the Gtk::PlacesSidebar::signal_populate_popup() signal, you can use this
   * function to get the location that is being referred to during the callbacks
   * for your menu items.
   * 
   * @newin{3,10}
   * 
   * @return A GFile with the selected location, or
   * <tt>nullptr</tt> if nothing is visually selected.
   */
  Glib::RefPtr<Gio::File> get_location() const; 

  
  /** Sets whether the @a sidebar should show an item for the Desktop folder.
   * The default value for this option is determined by the desktop
   * environment and the user’s configuration, but this function can be
   * used to override it on a per-application basis.
   * 
   * @newin{3,10}
   * 
   * @param show_desktop Whether to show an item for the Desktop folder.
   */
  void set_show_desktop(bool show_desktop =  true);
  
  /** Returns the value previously set with set_show_desktop()
   * 
   * @newin{3,10}
   * 
   * @return <tt>true</tt> if the sidebar will display a builtin shortcut to the desktop folder.
   */
  bool get_show_desktop() const;

  
  /** Applications may want to present some folders in the places sidebar if
   * they could be immediately useful to users.  For example, a drawing
   * program could add a “/usr/share/clipart” location when the sidebar is
   * being used in an “Insert Clipart” dialog box.
   * 
   * This function adds the specified @a location to a special place for immutable
   * shortcuts.  The shortcuts are application-specific; they are not shared
   * across applications, and they are not persistent.  If this function
   * is called multiple times with different locations, then they are added
   * to the sidebar’s list in the same order as the function is called.
   * 
   * @newin{3,10}
   * 
   * @param location Location to add as an application-specific shortcut.
   */
  void add_shortcut(const Glib::RefPtr<Gio::File>& location);
  
  /** Removes an application-specific shortcut that has been previously been
   * inserted with add_shortcut().  If the @a location is not a
   * shortcut in the sidebar, then nothing is done.
   * 
   * @newin{3,10}
   * 
   * @param location Location to remove.
   */
  void remove_shortcut(const Glib::RefPtr<Gio::File>& location);

  // transfer full
  // list_shortcuts returns a copy of the list and its elements; modifiying the returned value does not modify the places sidebar
 

  /** Gets the list of shortcuts.
   * 
   * @newin{3,10}
   * 
   * @return A SList of File of the locations that have been added as
   * application-specific shortcuts with add_shortcut().
   * To free this list, you can use
   * 
   * [C example ellipted].
   */
  std::vector< Glib::RefPtr<Gio::File> > list_shortcuts() const;

  // transfer full
  // get_nth_bookmark returns a new Gio::File; modifiying the returned value does not modify the places sidebar
  
  /** This function queries the bookmarks added by the user to the places sidebar,
   * and returns one of them.  This function is used by Gtk::FileChooser to implement
   * the “Alt-1”, “Alt-2”, etc. shortcuts, which activate the cooresponding bookmark.
   * 
   * @newin{3,10}
   * 
   * @param n Index of the bookmark to query.
   * @return The bookmark specified by the index @a n, or
   * <tt>nullptr</tt> if no such index exist.  Note that the indices start at 0, even though
   * the file chooser starts them with the keyboard shortcut "Alt-1".
   */
  Glib::RefPtr<Gio::File> get_nth_bookmark(int n) const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets whether the @a sidebar should show an item for connecting to a network server;
   * this is off by default. An application may want to turn this on if it implements
   * a way for the user to connect to network servers directly.
   * 
   * If you enable this, you should connect to the
   * Gtk::PlacesSidebar::signal_show_connect_to_server() signal.
   * 
   * @newin{3,10}
   * 
   * Deprecated: 3.18: It is recommended to group this functionality with the drives
   * and network location under the new 'Other Location' item
   * 
   * @deprecated It is recommended to group this functionality with the drives and network location under the new 'Other Location' item.
   * 
   * @param show_connect_to_server Whether to show an item for the Connect to Server command.
   */
  void set_show_connect_to_server(bool show_connect_to_server =  true);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the value previously set with set_show_connect_to_server()
   * 
   * Deprecated: 3.18: It is recommended to group this functionality with the drives
   * and network location under the new 'Other Location' item
   * 
   * @deprecated It is recommended to group this functionality with the drives and network location under the new 'Other Location' item.
   * 
   * @return <tt>true</tt> if the sidebar will display a “Connect to Server” item.
   */
  bool get_show_connect_to_server() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets whether the @a sidebar should only show local files.
   * 
   * @newin{3,12}
   * 
   * @param local_only Whether to show only local files.
   */
  void set_local_only(bool local_only =  true);
  
  /** Returns the value previously set with set_local_only().
   * 
   * @newin{3,12}
   * 
   * @return <tt>true</tt> if the sidebar will only show local files.
   */
  bool get_local_only() const;

  
  /** Sets whether the @a sidebar should show an item for entering a location;
   * this is off by default. An application may want to turn this on if manually
   * entering URLs is an expected user action.
   * 
   * If you enable this, you should connect to the
   * Gtk::PlacesSidebar::signal_show_enter_location() signal.
   * 
   * @newin{3,14}
   * 
   * @param show_enter_location Whether to show an item to enter a location.
   */
  void set_show_enter_location(bool show_enter_location =  true);
  
  /** Returns the value previously set with set_show_enter_location()
   * 
   * @newin{3,14}
   * 
   * @return <tt>true</tt> if the sidebar will display an “Enter Location” item.
   */
  bool get_show_enter_location() const;

  
  /** Sets whether the @a sidebar should show an item for recent files.
   * The default value for this option is determined by the desktop
   * environment, but this function can be used to override it on a
   * per-application basis.
   * 
   * @newin{3,18}
   * 
   * @param show_recent Whether to show an item for recent files.
   */
  void set_show_recent(bool show_recent =  true);
  
  /** Returns the value previously set with set_show_recent()
   * 
   * @newin{3,18}
   * 
   * @return <tt>true</tt> if the sidebar will display a builtin shortcut for recent files.
   */
  bool get_show_recent() const;

  
  /** Sets whether the @a sidebar should show an item for the Trash location.
   * 
   * @newin{3,18}
   * 
   * @param show_trash Whether to show an item for the Trash location.
   */
  void set_show_trash(bool show_trash =  true);
  
  /** Returns the value previously set with set_show_trash()
   * 
   * @newin{3,18}
   * 
   * @return <tt>true</tt> if the sidebar will display a “Trash” item.
   */
  bool get_show_trash() const;

  
  /** Sets whether the @a sidebar should show an item for the application to show
   * an Other Locations view; this is off by default. When set to <tt>true</tt>, persistent
   * devices such as hard drives are hidden, otherwise they are shown in the sidebar.
   * An application may want to turn this on if it implements a way for the user to
   * see and interact with drives and network servers directly.
   * 
   * If you enable this, you should connect to the
   * Gtk::PlacesSidebar::signal_show_other_locations() signal.
   * 
   * @newin{3,18}
   * 
   * @param show_other_locations Whether to show an item for the Other Locations view.
   */
  void set_show_other_locations(bool show_other_locations =  true);
  
  /** Returns the value previously set with set_show_other_locations()
   * 
   * @newin{3,18}
   * 
   * @return <tt>true</tt> if the sidebar will display an “Other Locations” item.
   */
  bool get_show_other_locations() const;

  // Gtk+ does not guarantee that context can be a nullptr, not even when visible is false.
  // See https://bugzilla.gnome.org/show_bug.cgi?id=752633#c3.
  
  /** Make the GtkPlacesSidebar show drop targets, so it can show the available
   * drop targets and a "new bookmark" row. This improves the Drag-and-Drop
   * experience of the user and allows applications to show all available
   * drop targets at once.
   * 
   * This needs to be called when the application is aware of an ongoing drag
   * that might target the sidebar. The drop-targets-visible state will be unset
   * automatically if the drag finishes in the GtkPlacesSidebar. You only need
   * to unset the state when the drag ends on some other widget on your application.
   * 
   * @newin{3,18}
   * 
   * @param visible Whether to show the valid targets or not.
   * @param context Drag context used to ask the source about the action that wants to
   * perform, so hints are more accurate.
   */
  void set_drop_targets_visible(bool visible, const Glib::RefPtr<Gdk::DragContext>& context);


// We use no_default_handler with _WRAP_SIGNAL because the C *Class struct is hidden for GtkPlacesSidebar.
 

  /**
   * @par Slot Prototype:
   * <tt>int on_my_%drag_action_requested(const Glib::RefPtr<Gdk::DragContext>& context, const Glib::RefPtr<Gio::File>& dest_file, const std::vector< Glib::RefPtr<Gio::File> >& source_file_list)</tt>
   *
   * When the user starts a drag-and-drop operation and the sidebar needs
   * to ask the application for which drag action to perform, then the
   * sidebar will emit this signal.
   * 
   * The application can evaluate the @a context for customary actions, or
   * it can check the type of the files indicated by @a source_file_list against the
   * possible actions for the destination @a dest_file.
   * 
   * The drag action to use must be the return value of the signal handler.
   * 
   * @newin{3,10}
   * 
   * @param context Gdk::DragContext with information about the drag operation.
   * @param dest_file File with the tentative location that is being hovered for a drop.
   * @param source_file_list List of File that are being dragged.
   * @return The drag action to use, for example, Gdk::ACTION_COPY
   * or Gdk::ACTION_MOVE, or 0 if no action is allowed here (i.e. drops
   * are not allowed in the specified @a dest_file).
   */

  Glib::SignalProxy< int,const Glib::RefPtr<Gdk::DragContext>&,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >& > signal_drag_action_requested();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%drag_perform_drop(const Glib::RefPtr<Gio::File>& dest_file, const std::vector< Glib::RefPtr<Gio::File> >& source_file_list, int action)</tt>
   *
   * The places sidebar emits this signal when the user completes a
   * drag-and-drop operation and one of the sidebar's items is the
   * destination.  This item is in the @a dest_file, and the
   *  @a source_file_list has the list of files that are dropped into it and
   * which should be copied/moved/etc. based on the specified @a action.
   * 
   * @newin{3,10}
   * 
   * @param dest_file Destination File.
   * @param source_file_list List of File that got dropped.
   * @param action Drop action to perform.
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::File>&,const std::vector< Glib::RefPtr<Gio::File> >&,int > signal_drag_perform_drop();


  /**
   * @par Slot Prototype:
   * <tt>int on_my_%drag_action_ask(int actions)</tt>
   *
   * The places sidebar emits this signal when it needs to ask the application
   * to pop up a menu to ask the user for which drag action to perform.
   * 
   * @newin{3,10}
   * 
   * @param actions Possible drag actions that need to be asked for.
   * @return The final drag action that the sidebar should pass to the drag side
   * of the drag-and-drop operation.
   */

  Glib::SignalProxy< int,int > signal_drag_action_ask();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%open_location(const Glib::RefPtr<Gio::File>& location, PlacesOpenFlags open_flags)</tt>
   *
   * The places sidebar emits this signal when the user selects a location
   * in it.  The calling application should display the contents of that
   * location; for example, a file manager should show a list of files in
   * the specified location.
   * 
   * @newin{3,10}
   * 
   * @param location File to which the caller should switch.
   * @param open_flags A single value from Gtk::PlacesOpenFlags specifying how the @a location should be opened.
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::File>&,PlacesOpenFlags > signal_open_location();


  //TODO: From gtk+ 3.18 the first parameter in populate_popup does not have to be a GtkMenu*.
  //When be can break ABI, change to Container* container. Also change in gtk_signals.defs.patch.
 

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%populate_popup(Menu* menu, const Glib::RefPtr<Gio::File>& selected_item, const Glib::RefPtr<Gio::Volume>& selected_volume)</tt>
   *
   * The places sidebar emits this signal when the user invokes a contextual
   * popup on one of its items. In the signal handler, the application may
   * add extra items to the menu as appropriate. For example, a file manager
   * may want to add a "Properties" command to the menu.
   * 
   * It is not necessary to store the @a selected_item for each menu item;
   * during their callbacks, the application can use Gtk::PlacesSidebar::get_location()
   * to get the file to which the item refers.
   * 
   * The @a selected_item argument may be <tt>nullptr</tt> in case the selection refers to
   * a volume. In this case, @a selected_volume will be non-<tt>nullptr</tt>. In this case,
   * the calling application will have to Glib::object_ref() the @a selected_volume and
   * keep it around to use it in the callback.
   * 
   * The @a menu and all its contents are destroyed after the user
   * dismisses the popup. The popup is re-created (and thus, this signal is
   * emitted) every time the user activates the contextual menu.
   * 
   * Before 3.18, the @a menu always was a Gtk::Menu, and you were expected
   * to add your items as Gtk::MenuItems. Since 3.18, the popup may be implemented
   * as a Gtk::Popover, in which case @a menu will be something else, e.g. a
   * Gtk::Box, to which you may add Gtk::ModelButtons or other widgets, such as
   * Gtk::Entries, Gtk::SpinButtons, etc. If your application can deal with this
   * situation, you can set Gtk::PlacesSidebar::signal_populate_all() to <tt>true</tt> to request
   * that this signal is emitted for populating popovers as well.
   * 
   * @newin{3,10}
   * 
   * @param menu A Gtk::Menu or another Gtk::Container.
   * @param selected_item File with the item to which the popup should refer, or #<tt>nullptr</tt> in the case of a @a selected_volume.
   * @param selected_volume Volume if the selected item is a volume, or #<tt>nullptr</tt> if it is a file.
   */

  Glib::SignalProxy< void,Menu*,const Glib::RefPtr<Gio::File>&,const Glib::RefPtr<Gio::Volume>& > signal_populate_popup();


#ifndef GTKMM_DISABLE_DEPRECATED

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%show_connect_to_server()</tt>
   *
   * The places sidebar emits this signal when it needs the calling
   * application to present an way to connect directly to a network server.
   * For example, the application may bring up a dialog box asking for
   * a URL like "sftp://ftp.example.com".  It is up to the application to create
   * the corresponding mount by using, for example, Glib::file_mount_enclosing_volume().
   * 
   * Deprecated: 3.18: use the Gtk::PlacesSidebar::signal_show_other_locations() signal
   * to connect to network servers.
   * 
   * @deprecated Use signal_show_other_locations() to connect to network servers.
   */

  Glib::SignalProxy< void > signal_show_connect_to_server();
#endif // GTKMM_DISABLE_DEPRECATED


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%show_error_message(const Glib::ustring& primary, const Glib::ustring& secondary)</tt>
   *
   * The places sidebar emits this signal when it needs the calling
   * application to present an error message.  Most of these messages
   * refer to mounting or unmounting media, for example, when a drive
   * cannot be started for some reason.
   * 
   * @newin{3,10}
   * 
   * @param primary Primary message with a summary of the error to show.
   * @param secondary Secondary message with details of the error to show.
   */

  Glib::SignalProxy< void,const Glib::ustring&,const Glib::ustring& > signal_show_error_message();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%show_enter_location()</tt>
   *
   * The places sidebar emits this signal when it needs the calling
   * application to present an way to directly enter a location.
   * For example, the application may bring up a dialog box asking for
   * a URL like "http://http.example.com".
   * 
   * @newin{3,14}
   */

  Glib::SignalProxy< void > signal_show_enter_location();

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%show_other_locations()</tt>
   *
   * The places sidebar emits this signal when it needs the calling
   * application to present a way to show other locations e.g.\ drives
   * and network access points.
   * For example, the application may bring up a page showing persistent
   * volumes and discovered network addresses.
   * 
   * Deprecated: 3.20: use the Gtk::PlacesSidebar::signal_show_other_locations_with_flags()
   * which includes the open flags in order to allow the user to specify to open
   * in a new tab or window, in a similar way than Gtk::PlacesSidebar::signal_open_location()
   * 
   * @newin{3,18}
   * 
   * @deprecated Use signal_show_other_locations_with_flags() instead.
   */

  Glib::SignalProxy< void > signal_show_other_locations();
#endif // GTKMM_DISABLE_DEPRECATED


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%show_other_locations_with_flags(PlacesOpenFlags open_flags)</tt>
   *
   * The places sidebar emits this signal when it needs the calling
   * application to present a way to show other locations e.g.\ drives
   * and network access points.
   * For example, the application may bring up a page showing persistent
   * volumes and discovered network addresses.
   * 
   * @newin{3,20}
   * 
   * @param open_flags A single value from Gtk::PlacesOpenFlags specifying how it should be opened.
   */

  Glib::SignalProxy< void,PlacesOpenFlags > signal_show_other_locations_with_flags();


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%mount(const Glib::RefPtr<Gio::MountOperation>& mount_operation)</tt>
   *
   * The places sidebar emits this signal when it starts a new operation
   * because the user clicked on some location that needs mounting.
   * In this way the application using the Gtk::PlacesSidebar can track the
   * progress of the operation and, for example, show a notification.
   * 
   * @newin{3,20}
   * 
   * @param mount_operation The MountOperation that is going to start.
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::MountOperation>& > signal_mount();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%unmount(const Glib::RefPtr<Gio::MountOperation>& mount_operation)</tt>
   *
   * The places sidebar emits this signal when it starts a new operation
   * because the user for example ejected some drive or unmounted a mount.
   * In this way the application using the Gtk::PlacesSidebar can track the
   * progress of the operation and, for example, show a notification.
   * 
   * @newin{3,20}
   * 
   * @param mount_operation The MountOperation that is going to start.
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::MountOperation>& > signal_unmount();


  /** Whether the sidebar only includes local files.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_local_only() ;

/** Whether the sidebar only includes local files.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_local_only() const;

  /** The location to highlight in the sidebar.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::File> > property_location() ;

/** The location to highlight in the sidebar.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> > property_location() const;

  /** Modes in which the calling application can open locations selected in the sidebar.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PlacesOpenFlags > property_open_flags() ;

/** Modes in which the calling application can open locations selected in the sidebar.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PlacesOpenFlags > property_open_flags() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** Whether the sidebar includes a builtin shortcut to a 'Connect to server' dialog.
   * @deprecated Use property_show_other_locations() instead.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_connect_to_server() ;

/** Whether the sidebar includes a builtin shortcut to a 'Connect to server' dialog.
   * @deprecated Use property_show_other_locations() instead.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_connect_to_server() const;

#endif // GTKMM_DISABLE_DEPRECATED

  /** Whether the sidebar includes a builtin shortcut to the Desktop folder.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_desktop() ;

/** Whether the sidebar includes a builtin shortcut to the Desktop folder.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_desktop() const;

  /** Whether the sidebar includes a builtin shortcut to manually enter a location.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_enter_location() ;

/** Whether the sidebar includes a builtin shortcut to manually enter a location.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_enter_location() const;

  /** Whether the sidebar includes a builtin shortcut for recent files.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_recent() ;

/** Whether the sidebar includes a builtin shortcut for recent files.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_recent() const;

  /** Whether the sidebar includes a builtin shortcut to the Trash location.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_trash() ;

/** Whether the sidebar includes a builtin shortcut to the Trash location.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_trash() const;

  /** Whether the sidebar includes an item to show external locations.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_other_locations() ;

/** Whether the sidebar includes an item to show external locations.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_other_locations() const;

  /** If :populate-all is <tt>true</tt>, the Gtk::PlacesSidebar::signal_populate_popup() signal
   * is also emitted for popovers.
   * 
   * @newin{3,18}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_populate_all() ;

/** If :populate-all is <tt>true</tt>, the Gtk::PlacesSidebar::signal_populate_popup() signal
   * is also emitted for popovers.
   * 
   * @newin{3,18}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_populate_all() const;


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
   * @relates Gtk::PlacesSidebar
   */
  Gtk::PlacesSidebar* wrap(GtkPlacesSidebar* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_PLACESSIDEBAR_H */

