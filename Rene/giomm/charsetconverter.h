// Generated by gmmproc 2.48.1 -- DO NOT MODIFY!
#ifndef _GIOMM_CHARSETCONVERTER_H
#define _GIOMM_CHARSETCONVERTER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
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

#include <glibmm/object.h>
#include <giomm/converter.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GCharsetConverter = struct _GCharsetConverter;
using GCharsetConverterClass = struct _GCharsetConverterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class CharsetConverter_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** CharsetConverter - Convert between charsets.
 * CharsetConverter is an implementation of Converter based on GIConv.
 * @newin{2,34}
 */

class CharsetConverter : public Glib::Object, public Converter
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = CharsetConverter;
  using CppClassType = CharsetConverter_Class;
  using BaseObjectType = GCharsetConverter;
  using BaseClassType = GCharsetConverterClass;

  // noncopyable
  CharsetConverter(const CharsetConverter&) = delete;
  CharsetConverter& operator=(const CharsetConverter&) = delete;

private:  friend class CharsetConverter_Class;
  static CppClassType charsetconverter_class_;

protected:
  explicit CharsetConverter(const Glib::ConstructParams& construct_params);
  explicit CharsetConverter(GCharsetConverter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  CharsetConverter(CharsetConverter&& src) noexcept;
  CharsetConverter& operator=(CharsetConverter&& src) noexcept;

  ~CharsetConverter() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GCharsetConverter*       gobj()       { return reinterpret_cast<GCharsetConverter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GCharsetConverter* gobj() const { return reinterpret_cast<GCharsetConverter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GCharsetConverter* gobj_copy();

private:

  
protected:
  // Handwritten to ignore the final GError** parameter in the *_new()
  // function.
  explicit CharsetConverter(const Glib::ustring& to_charset, const Glib::ustring& from_charset);
  

public:
  /** Creates a new CharsetConverter.
   * 
   * @newin{2,24}
   *
   * @param to_charset Destination charset.
   * @param from_charset Source charset.
   * @return A new CharsetConverter, or <tt>0</tt> on error.
   */
  
  static Glib::RefPtr<CharsetConverter> create(const Glib::ustring& to_charset, const Glib::ustring& from_charset);


  /** Sets the CharsetConverter::property_use_fallback() property.
   * 
   * @newin{2,24}
   * 
   * @param use_fallback <tt>true</tt> to use fallbacks.
   */
  void set_use_fallback(bool use_fallback);
  
  /** Gets the CharsetConverter::property_use_fallback() property.
   * 
   * @newin{2,24}
   * 
   * @return <tt>true</tt> if fallbacks are used by @a converter.
   */
  bool get_use_fallback() const;
  
  /** Gets the number of fallbacks that @a converter has applied so far.
   * 
   * @newin{2,24}
   * 
   * @return The number of fallbacks that @a converter has applied.
   */
  guint get_num_fallbacks() const;

  /** The character encoding to convert from.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_from_charset() const;


  /** The character encoding to convert to.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_to_charset() const;


  /** Use fallback (of form \<hexval>) for invalid bytes.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_fallback() ;

/** Use fallback (of form \<hexval>) for invalid bytes.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_fallback() const;


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
   * @relates Gio::CharsetConverter
   */
  Glib::RefPtr<Gio::CharsetConverter> wrap(GCharsetConverter* object, bool take_copy = false);
}


#endif /* _GIOMM_CHARSETCONVERTER_H */

