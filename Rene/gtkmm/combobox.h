// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_COMBOBOX_H
#define _GTKMM_COMBOBOX_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2003 The gtkmm Development Team
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

#include <gtkmm/bin.h>
#include <gtkmm/celllayout.h>
#include <gtkmm/celleditable.h>
#include <gtkmm/treemodel.h>
#include <gtkmm/cellarea.h>
#include <gtkmm/cellrenderer.h>
#include <gtkmm/treeview.h>
#include <gtkmm/enums.h> //For SensitivityType.


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkComboBox GtkComboBox;
typedef struct _GtkComboBoxClass GtkComboBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ComboBox_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget used to choose from a list of items.
 *
 * A ComboBox is a widget that allows the user to choose from a list of valid choices. The ComboBox displays the
 * selected choice. When activated, the ComboBox displays a popup which allows the user to make a new choice. The
 * style in which the selected value is displayed, and the style of the popup is determined by the current theme.
 * It may be similar to a Windows-style combo box.
 *
 * The ComboBox uses the model-view pattern; the list of valid choices is specified in the form of a tree model,
 * and the display of the choices can be adapted to the data in the model by using cell renderers, as you would in
 * a tree view. This is possible since ComboBox implements the CellLayout interface. The tree model holding the
 * valid choices is not restricted to a flat list, it can be a real tree, and the popup will reflect the tree
 * structure.
 *
 * To allow the user to enter values not in the model, the 'has-entry'
 * property allows the ComboBox to contain a Gtk::Entry. This entry
 * can be accessed by calling get_entry(), or you can just call get_entry_text()
 * to get the text from the Entry.
 *
 * For a simple list of textual choices, the model-view API of ComboBox
 * can be a bit overwhelming. In this case, ComboBoxText offers a
 * simple alternative. Both ComboBox and ComboBoxText can contain
 * an entry.
 *
 * The ComboBox widget looks like this:
 * @image html combobox1.png
 *
 * @ingroup Widgets
 */

class ComboBox
: public Bin,
  public CellLayout,
  public CellEditable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ComboBox CppObjectType;
  typedef ComboBox_Class CppClassType;
  typedef GtkComboBox BaseObjectType;
  typedef GtkComboBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ComboBox(ComboBox&& src) noexcept;
  ComboBox& operator=(ComboBox&& src) noexcept;

  // noncopyable
  ComboBox(const ComboBox&) = delete;
  ComboBox& operator=(const ComboBox&) = delete;

  ~ComboBox() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ComboBox_Class;
  static CppClassType combobox_class_;

protected:
  explicit ComboBox(const Glib::ConstructParams& construct_params);
  explicit ComboBox(GtkComboBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkComboBox*       gobj()       { return reinterpret_cast<GtkComboBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkComboBox* gobj() const { return reinterpret_cast<GtkComboBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_changed().
  virtual void on_changed();


private:

  
public:

  /** Creates a new empty ComboBox, optionally with an entry.
   * @param has_entry If this is true then this will have an Entry widget.
   */
  explicit ComboBox(bool has_entry = false);
  

  /** Creates a new ComboBox with the model initialized to @a model, optionally with an entry.
   * @param model The model containing data to display in the ComboBox.
   * @param has_entry If this is true then this will have an Entry widget.
   */
  explicit ComboBox(const Glib::RefPtr<TreeModel>& model, bool has_entry = false);
  

  /** Creates a new empty ComboBox using @a cell_area to layout cells, optionally with an entry.
   * @param cell_area The CellArea to use to layout cell renderers.
   * @param has_entry If this is true then this will have an Entry widget.
   */
  explicit ComboBox(const Glib::RefPtr<CellArea>& cell_area, bool has_entry = false);
  
  
  /** Sets the wrap width of @a combo_box to be @a width. The wrap width is basically
   * the preferred number of columns when you want the popup to be layed out
   * in a table.
   * 
   * @newin{2,4}
   * 
   * @param width Preferred number of columns.
   */
  void set_wrap_width(int width);
  
  /** Returns the wrap width which is used to determine the number of columns
   * for the popup menu. If the wrap width is larger than 1, the combo box
   * is in table mode.
   * 
   * @newin{2,6}
   * 
   * @return The wrap width.
   */
  int get_wrap_width() const;

  
  /** Sets the column with row span information for @a combo_box to be @a row_span.
   * The row span column contains integers which indicate how many rows
   * an item should span.
   * 
   * @newin{2,4}
   * 
   * @param row_span A column in the model passed during construction.
   */
  void set_row_span_column(int row_span);
  
  /** Returns the column with row span information for @a combo_box.
   * 
   * @newin{2,6}
   * 
   * @return The row span column.
   */
  int get_row_span_column() const;

  
  /** Sets the column with column span information for @a combo_box to be
   *  @a column_span. The column span column contains integers which indicate
   * how many columns an item should span.
   * 
   * @newin{2,4}
   * 
   * @param column_span A column in the model passed during construction.
   */
  void set_column_span_column(int column_span);
  
  /** Returns the column with column span information for @a combo_box.
   * 
   * @newin{2,6}
   * 
   * @return The column span column.
   */
  int get_column_span_column() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the current value of the :add-tearoffs property.
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   * 
   * @return The current value of the :add-tearoffs property.
   */
  bool get_add_tearoffs() const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets whether the popup menu should have a tearoff
   * menu item.
   * 
   * @newin{2,6}
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   * 
   * @param add_tearoffs <tt>true</tt> to add tearoff menu items.
   */
  void set_add_tearoffs(bool add_tearoffs =  true);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the current title of the menu in tearoff mode. See
   * set_add_tearoffs().
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   * 
   * @return The menu’s title in tearoff mode. This is an internal copy of the
   * string which must not be freed.
   */
  Glib::ustring get_title() const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the menu’s title in tearoff mode.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   * 
   * @param title A title for the menu in tearoff mode.
   */
  void set_title(const Glib::ustring& title);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns whether the combo box grabs focus when it is clicked
   * with the mouse. See set_focus_on_click().
   * 
   * @newin{2,6}
   * 
   * @deprecated Use Widget::get_focus_on_click() instead.
   * 
   * @return <tt>true</tt> if the combo box grabs focus when it is
   * clicked with the mouse.
   */
  bool get_focus_on_click() const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets whether the combo box will grab focus when it is clicked with
   * the mouse. Making mouse clicks not grab focus is useful in places
   * like toolbars where you don’t want the keyboard focus removed from
   * the main area of the application.
   * 
   * @newin{2,6}
   * 
   * @deprecated Use Widget::set_focus_on_click() instead.
   * 
   * @param focus_on_click Whether the combo box grabs focus when clicked
   * with the mouse.
   */
  void set_focus_on_click(bool focus_on_click =  true);
#endif // GTKMM_DISABLE_DEPRECATED


/* get/set active item */
  
  /** Returns the index of the currently active item, or -1 if there’s no
   * active item. If the model is a non-flat treemodel, and the active item
   * is not an immediate child of the root of the tree, this function returns
   * `gtk_tree_path_get_indices (path)[0]`, where
   * `path` is the Gtk::TreePath of the active item.
   * 
   * @newin{2,4}
   * 
   * @return An integer which is the index of the currently active item,
   * or -1 if there’s no active item.
   */
  int get_active_row_number() const;

  /** Gets an iterator that points to the current active item, if it exists.
   * @result The iterator.
   */
  TreeModel::iterator get_active();

  /** Gets an iterator that points to the current active item, if it exists.
   * @result The iterator.
   */
  TreeModel::const_iterator get_active() const;
  

  /** Sets the active item of @a combo_box to be the item at @a index.
   * 
   * @newin{2,4}
   * 
   * @param index An index in the model passed during construction, or -1 to have
   * no active item.
   */
  void set_active(int index);
  
  /** Sets the current active item to be the one referenced by @a iter, or
   * unsets the active item if @a iter is <tt>nullptr</tt>.
   * 
   * @newin{2,4}
   * 
   * @param iter The Gtk::TreeIter, or <tt>nullptr</tt>.
   */
  void set_active(const TreeModel::iterator& iter);

  //TODO: See https://bugzilla.gnome.org/show_bug.cgi?id=612396#c30
  /** Get the text in the entry, if there is an entry.
   *
   * @newin{2,24}
   */
  Glib::ustring get_entry_text() const;

  /** Causes no item to be active. See also set_active().
   */
  void unset_active();

  
  /** Returns the Gtk::TreeModel which is acting as data source for @a combo_box.
   * 
   * @newin{2,4}
   * 
   * @return A Gtk::TreeModel which was passed
   * during construction.
   */
  Glib::RefPtr<TreeModel> get_model();
  
  /** Returns the Gtk::TreeModel which is acting as data source for @a combo_box.
   * 
   * @newin{2,4}
   * 
   * @return A Gtk::TreeModel which was passed
   * during construction.
   */
  Glib::RefPtr<const TreeModel> get_model() const;
  
  /** Sets the model used by @a combo_box to be @a model. Will unset a previously set
   * model (if applicable). Use unset_model() to unset the old model.
   * 
   * Note that this function does not clear the cell renderers, you have to
   * call Gtk::CellLayout::clear() yourself if you need to set up different
   * cell renderers for the new model.
   * 
   * @newin{2,4}
   * 
   * @param model A Gtk::TreeModel.
   */
  void set_model(const Glib::RefPtr<TreeModel>& model);

  /** Remove the model from the ComboBox.
   *
   * @see set_model().
   *
   * @newin{2,16}
   */
  void unset_model();

  typedef TreeView::SlotRowSeparator SlotRowSeparator;

  /** Sets the row separator function, which is used to determine whether a row should be drawn as a separator.
   * See also unset_row_separator_func().
   *
   * @param slot The callback.
   */
  void set_row_separator_func(const SlotRowSeparator& slot);

  /** Causes no separators to be drawn.
   */
  void unset_row_separator_func();
  

  /** Sets whether the dropdown button of the combo box should be
   * always sensitive (Gtk::SENSITIVITY_ON), never sensitive (Gtk::SENSITIVITY_OFF)
   * or only if there is at least one item to display (Gtk::SENSITIVITY_AUTO).
   * 
   * @newin{2,14}
   * 
   * @param sensitivity Specify the sensitivity of the dropdown button.
   */
  void set_button_sensitivity(SensitivityType sensitivity);
  
  /** Returns whether the combo box sets the dropdown button
   * sensitive or not when there are no items in the model.
   * 
   * @newin{2,14}
   * 
   * @return Gtk::SENSITIVITY_ON if the dropdown button
   * is sensitive when the model is empty, Gtk::SENSITIVITY_OFF
   * if the button is always insensitive or
   * Gtk::SENSITIVITY_AUTO if it is only sensitive as long as
   * the model has one item to be selected.
   */
  SensitivityType get_button_sensitivity() const;


  /** Returns whether the combo box has an entry.
   * 
   * @newin{2,24}
   * 
   * @return Whether there is an entry in @a combo_box.
   */
  bool get_has_entry() const;

  
  /** Sets the model column which @a combo_box should use to get strings from
   * to be @a text_column. The column @a text_column in the model of @a combo_box
   * must be of type TYPE_STRING.
   * 
   * This is only relevant if @a combo_box has been created with
   * Gtk::ComboBox::property_has_entry() as <tt>true</tt>.
   * 
   * @newin{2,24}
   * 
   * @param text_column A column in @a model to get the strings from for
   * the internal entry.
   */
  void set_entry_text_column(const TreeModelColumnBase& text_column) const;
  
  /** Sets the model column which @a combo_box should use to get strings from
   * to be @a text_column. The column @a text_column in the model of @a combo_box
   * must be of type TYPE_STRING.
   * 
   * This is only relevant if @a combo_box has been created with
   * Gtk::ComboBox::property_has_entry() as <tt>true</tt>.
   * 
   * @newin{2,24}
   * 
   * @param text_column A column in @a model to get the strings from for
   * the internal entry.
   */
  void set_entry_text_column(int text_column);

  
  /** Returns the column which @a combo_box is using to get the strings
   * from to display in the internal entry.
   * 
   * @newin{2,24}
   * 
   * @return A column in the data source model of @a combo_box.
   */
  int get_entry_text_column() const;

  
  /** Specifies whether the popup’s width should be a fixed width
   * matching the allocated width of the combo box.
   * 
   * @newin{3,0}
   * 
   * @param fixed Whether to use a fixed popup width.
   */
  void set_popup_fixed_width(bool fixed =  true);
  
  /** Gets whether the popup uses a fixed width matching
   * the allocated width of the combo box.
   * 
   * @newin{3,0}
   * 
   * @return <tt>true</tt> if the popup uses a fixed width.
   */
  bool get_popup_fixed_width() const;

  
  /** Pops up the menu or dropdown list of @a combo_box.
   * 
   * This function is mostly intended for use by accessibility technologies;
   * applications should have little use for it.
   * 
   * @newin{2,4}
   */
  void popup();
  
  /** Pops up the menu or dropdown list of @a combo_box, the popup window
   * will be grabbed so only @a device and its associated pointer/keyboard
   * are the only Gdk::Devices able to send events to it.
   * 
   * @newin{3,0}
   * 
   * @param device A Gdk::Device.
   */
  void popup(const Glib::RefPtr<Gdk::Device>& device);
  
  /** Hides the menu or dropdown list of @a combo_box.
   * 
   * This function is mostly intended for use by accessibility technologies;
   * applications should have little use for it.
   * 
   * @newin{2,4}
   */
  void popdown();

  
#ifdef  GTKMM_ATKMM_ENABLED

  /** Gets the accessible object corresponding to the combo box’s popup.
   * 
   * This function is mostly intended for use by accessibility technologies;
   * applications should have little use for it.
   * 
   * @newin{2,6}
   * 
   * @return The accessible object corresponding
   * to the combo box’s popup.
   */
  Glib::RefPtr<Atk::Object> get_popup_accessible();
#endif //  GTKMM_ATKMM_ENABLED

  
#ifdef  GTKMM_ATKMM_ENABLED

  /** Gets the accessible object corresponding to the combo box’s popup.
   * 
   * This function is mostly intended for use by accessibility technologies;
   * applications should have little use for it.
   * 
   * @newin{2,6}
   * 
   * @return The accessible object corresponding
   * to the combo box’s popup.
   */
  Glib::RefPtr<const Atk::Object> get_popup_accessible() const;
#endif //  GTKMM_ATKMM_ENABLED


  /** Returns the column which @a combo_box is using to get string IDs
   * for values from.
   * 
   * @newin{3,0}
   * 
   * @return A column in the data source model of @a combo_box.
   */
  int get_id_column() const;
  
  /** Sets the model column which @a combo_box should use to get string IDs
   * for values from. The column @a id_column in the model of @a combo_box
   * must be of type TYPE_STRING.
   * 
   * @newin{3,0}
   * 
   * @param id_column A column in @a model to get string IDs for values from.
   */
  void set_id_column(int id_column);
  
  /** Returns the ID of the active row of @a combo_box.  This value is taken
   * from the active row and the column specified by the Gtk::ComboBox::property_id_column()
   * property of @a combo_box (see set_id_column()).
   * 
   * The returned value is an interned string which means that you can
   * compare the pointer by value to other interned strings and that you
   * must not free it.
   * 
   * If the Gtk::ComboBox::property_id_column() property of @a combo_box is not set, or if
   * no row is active, or if the active row has a <tt>nullptr</tt> ID value, then <tt>nullptr</tt>
   * is returned.
   * 
   * @newin{3,0}
   * 
   * @return The ID of the active row, or <tt>nullptr</tt>.
   */
  Glib::ustring get_active_id() const;
  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Changes the active row of @a combo_box to the one that has an ID equal to
   *  @a active_id, or unsets the active row if @a active_id is <tt>nullptr</tt>.  Rows having
   * a <tt>nullptr</tt> ID string cannot be made active by this function.
   * 
   * If the Gtk::ComboBox::property_id_column() property of @a combo_box is unset or if no
   * row has the given ID then the function does nothing and returns <tt>false</tt>.
   * 
   * @newin{3,0}
   * 
   * @deprecated Use set_active_id(). This method was incorrectly named.
   * 
   * @param active_id The ID of the row to select, or <tt>nullptr</tt>.
   * @return <tt>true</tt> if a row with a matching ID was found.  If a <tt>nullptr</tt>
   *  @a active_id was given to unset the active row, the function
   * always returns <tt>true</tt>.
   */
  void get_active_id(const Glib::ustring& active_id);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Changes the active row of the combo box to the one that has an ID equal to
   * @a active_id.
   *
   * If property_id_column() is unset or if no row has the given ID then the function 
   * does nothing and returns false.
   *
   * @param active_id The ID of the row that should be set to active.
   * @returns true if a row with a matching ID was found.
   *
   * @newin{3,6}
   */
  bool set_active_id(const Glib::ustring& active_id);

  /** @see Bin::get_child().
   * @newin{2,24}
   */
  Entry* get_entry();

  /** @see Bin::get_child().
   * @newin{2,24}
   */
  const Entry* get_entry() const;


  /** The model from which the combo box takes the values shown
   * in the list.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<TreeModel> > property_model() ;

/** The model from which the combo box takes the values shown
   * in the list.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeModel> > property_model() const;

  /** If wrap-width is set to a positive value, the list will be
   * displayed in multiple columns, the number of columns is
   * determined by wrap-width.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_wrap_width() ;

/** If wrap-width is set to a positive value, the list will be
   * displayed in multiple columns, the number of columns is
   * determined by wrap-width.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_wrap_width() const;

  /** If this is set to a non-negative value, it must be the index of a column
   * of type TYPE_INT in the model.
   * 
   * The values of that column are used to determine how many rows a value in
   * the list will span. Therefore, the values in the model column pointed to
   * by this property must be greater than zero and not larger than wrap-width.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_row_span_column() ;

/** If this is set to a non-negative value, it must be the index of a column
   * of type TYPE_INT in the model.
   * 
   * The values of that column are used to determine how many rows a value in
   * the list will span. Therefore, the values in the model column pointed to
   * by this property must be greater than zero and not larger than wrap-width.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_row_span_column() const;

  /** If this is set to a non-negative value, it must be the index of a column
   * of type TYPE_INT in the model.
   * 
   * The values of that column are used to determine how many columns a value
   * in the list will span.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_column_span_column() ;

/** If this is set to a non-negative value, it must be the index of a column
   * of type TYPE_INT in the model.
   * 
   * The values of that column are used to determine how many columns a value
   * in the list will span.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_column_span_column() const;

  /** The item which is currently active. If the model is a non-flat treemodel,
   * and the active item is not an immediate child of the root of the tree,
   * this property has the value
   * `gtk_tree_path_get_indices (path)[0]`,
   * where `path` is the Gtk::TreePath of the active item.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_active() ;

/** The item which is currently active. If the model is a non-flat treemodel,
   * and the active item is not an immediate child of the root of the tree,
   * this property has the value
   * `gtk_tree_path_get_indices (path)[0]`,
   * where `path` is the Gtk::TreePath of the active item.
   * 
   * @newin{2,4}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_active() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** The add-tearoffs property controls whether generated menus
   * have tearoff menu items.
   * 
   * Note that this only affects menu style combo boxes.
   * 
   * @newin{2,6}
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_add_tearoffs() ;

/** The add-tearoffs property controls whether generated menus
   * have tearoff menu items.
   * 
   * Note that this only affects menu style combo boxes.
   * 
   * @newin{2,6}
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_add_tearoffs() const;

#endif // GTKMM_DISABLE_DEPRECATED

  /** The has-frame property controls whether a frame
   * is drawn around the entry.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_has_frame() ;

/** The has-frame property controls whether a frame
   * is drawn around the entry.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_has_frame() const;


  // GtkComboBox:focus-on-click has been removed from gtk+.
  // TODO: At ABI-break, remove it from gtkmm.
#ifndef GTKMM_DISABLE_DEPRECATED
  /** Whether the combo box grabs focus when it is clicked with the mouse.
   * @deprecated Use Widget::property_focus_on_click() instead.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_focus_on_click() ;

  /** Whether the combo box grabs focus when it is clicked with the mouse.
   * @deprecated Use Widget::property_focus_on_click() instead.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_focus_on_click() const;
#endif // GTKMM_DISABLE_DEPRECATED
  //_WRAP_PROPERTY("focus-on-click", bool, deprecated "Use Widget::property_focus_on_click() instead.")

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** A title that may be displayed by the window manager
   * when the popup is torn-off.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_tearoff_title() ;

/** A title that may be displayed by the window manager
   * when the popup is torn-off.
   * 
   * @newin{2,10}
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_tearoff_title() const;

#endif // GTKMM_DISABLE_DEPRECATED

  /** Whether the combo boxes dropdown is popped up.
   * Note that this property is mainly useful, because
   * it allows you to connect to notify::popup-shown.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_popup_shown() const;


  /** Whether the dropdown button is sensitive when
   * the model is empty.
   * 
   * @newin{2,14}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SensitivityType > property_button_sensitivity() ;

/** Whether the dropdown button is sensitive when
   * the model is empty.
   * 
   * @newin{2,14}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SensitivityType > property_button_sensitivity() const;

  /** Whether the popup's width should be a fixed width matching the
   * allocated width of the combo box.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_popup_fixed_width() ;

/** Whether the popup's width should be a fixed width matching the
   * allocated width of the combo box.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_popup_fixed_width() const;

  /** The Gtk::CellArea used to layout cell renderers for this combo box.
   * 
   * If no area is specified when creating the combo box with Gtk::ComboBox::new_with_area() 
   * a horizontally oriented Gtk::CellAreaBox will be used.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> > property_cell_area() const;


  /** Whether the combo box has an entry.
   * 
   * @newin{2,24}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_has_entry() const;


  /** The column in the combo box's model to associate with strings from the entry
   * if the combo was created with Gtk::ComboBox::property_has_entry() = <tt>true</tt>.
   * 
   * @newin{2,24}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_entry_text_column() ;

/** The column in the combo box's model to associate with strings from the entry
   * if the combo was created with Gtk::ComboBox::property_has_entry() = <tt>true</tt>.
   * 
   * @newin{2,24}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_entry_text_column() const;

  /** The column in the combo box's model that provides string
   * IDs for the values in the model, if != -1.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_id_column() ;

/** The column in the combo box's model that provides string
   * IDs for the values in the model, if != -1.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_id_column() const;

  /** The value of the ID column of the active row.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_active_id() ;

/** The value of the ID column of the active row.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_active_id() const;


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%changed()</tt>
   *
   * The changed signal is emitted when the active
   * item is changed. The can be due to the user selecting
   * a different item from the list, or due to a
   * call to Gtk::ComboBox::set_active_iter().
   * It will also be emitted while typing into the entry of a combo box
   * with an entry.
   * 
   * @newin{2,4}
   */

  Glib::SignalProxy< void > signal_changed();


//TODO: Remove no_default_handler when we can break ABI
   

  /**
   * @par Slot Prototype:
   * <tt>Glib::ustring on_my_%format_entry_text(const TreeModel::Path& path)</tt>
   *
   * For combo boxes that are created with an entry (See GtkComboBox:has-entry).
   * 
   * A signal which allows you to change how the text displayed in a combo box's
   * entry is displayed.
   * 
   * Connect a signal handler which returns an allocated string representing
   *  @a path. That string will then be used to set the text in the combo box's entry.
   * The default signal handler uses the text from the GtkComboBox::entry-text-column 
   * model column.
   * 
   * Here's an example signal handler which fetches data from the model and
   * displays it in the entry.
   * 
   * [C example ellipted]
   * 
   * @newin{3,4}
   * 
   * @param path The GtkTreePath string from the combo box's current model to format text for.
   * @return A newly allocated string representing @a path 
   * for the current GtkComboBox model.
   */

  Glib::SignalProxy< Glib::ustring,const TreeModel::Path& > signal_format_entry_text();


  //Key-binding signals:
  
  
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
   * @relates Gtk::ComboBox
   */
  Gtk::ComboBox* wrap(GtkComboBox* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_COMBOBOX_H */

