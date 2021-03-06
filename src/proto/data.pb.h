// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data.proto

#ifndef PROTOBUF_data_2eproto__INCLUDED
#define PROTOBUF_data_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Data {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_data_2eproto();
void protobuf_AssignDesc_data_2eproto();
void protobuf_ShutdownFile_data_2eproto();

class Datum;
class Gallery;
class category;
class categoryList;

// ===================================================================

class categoryList : public ::google::protobuf::Message {
 public:
  categoryList();
  virtual ~categoryList();

  categoryList(const categoryList& from);

  inline categoryList& operator=(const categoryList& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const categoryList& default_instance();

  void Swap(categoryList* other);

  // implements Message ----------------------------------------------

  inline categoryList* New() const { return New(NULL); }

  categoryList* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const categoryList& from);
  void MergeFrom(const categoryList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(categoryList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Data.category category = 1;
  int category_size() const;
  void clear_category();
  static const int kCategoryFieldNumber = 1;
  const ::Data::category& category(int index) const;
  ::Data::category* mutable_category(int index);
  ::Data::category* add_category();
  ::google::protobuf::RepeatedPtrField< ::Data::category >*
      mutable_category();
  const ::google::protobuf::RepeatedPtrField< ::Data::category >&
      category() const;

  // @@protoc_insertion_point(class_scope:Data.categoryList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::Data::category > category_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_data_2eproto();
  friend void protobuf_AssignDesc_data_2eproto();
  friend void protobuf_ShutdownFile_data_2eproto();

  void InitAsDefaultInstance();
  static categoryList* default_instance_;
};
// -------------------------------------------------------------------

class category : public ::google::protobuf::Message {
 public:
  category();
  virtual ~category();

  category(const category& from);

  inline category& operator=(const category& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const category& default_instance();

  void Swap(category* other);

  // implements Message ----------------------------------------------

  inline category* New() const { return New(NULL); }

  category* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const category& from);
  void MergeFrom(const category& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(category* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Data.category)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_data_2eproto();
  friend void protobuf_AssignDesc_data_2eproto();
  friend void protobuf_ShutdownFile_data_2eproto();

  void InitAsDefaultInstance();
  static category* default_instance_;
};
// -------------------------------------------------------------------

class Gallery : public ::google::protobuf::Message {
 public:
  Gallery();
  virtual ~Gallery();

  Gallery(const Gallery& from);

  inline Gallery& operator=(const Gallery& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Gallery& default_instance();

  void Swap(Gallery* other);

  // implements Message ----------------------------------------------

  inline Gallery* New() const { return New(NULL); }

  Gallery* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Gallery& from);
  void MergeFrom(const Gallery& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Gallery* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Data.Datum images = 1;
  int images_size() const;
  void clear_images();
  static const int kImagesFieldNumber = 1;
  const ::Data::Datum& images(int index) const;
  ::Data::Datum* mutable_images(int index);
  ::Data::Datum* add_images();
  ::google::protobuf::RepeatedPtrField< ::Data::Datum >*
      mutable_images();
  const ::google::protobuf::RepeatedPtrField< ::Data::Datum >&
      images() const;

  // @@protoc_insertion_point(class_scope:Data.Gallery)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::Data::Datum > images_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_data_2eproto();
  friend void protobuf_AssignDesc_data_2eproto();
  friend void protobuf_ShutdownFile_data_2eproto();

  void InitAsDefaultInstance();
  static Gallery* default_instance_;
};
// -------------------------------------------------------------------

class Datum : public ::google::protobuf::Message {
 public:
  Datum();
  virtual ~Datum();

  Datum(const Datum& from);

  inline Datum& operator=(const Datum& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Datum& default_instance();

  void Swap(Datum* other);

  // implements Message ----------------------------------------------

  inline Datum* New() const { return New(NULL); }

  Datum* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Datum& from);
  void MergeFrom(const Datum& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Datum* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 channel = 1;
  void clear_channel();
  static const int kChannelFieldNumber = 1;
  ::google::protobuf::int32 channel() const;
  void set_channel(::google::protobuf::int32 value);

  // optional int32 width = 2;
  void clear_width();
  static const int kWidthFieldNumber = 2;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // optional int32 height = 3;
  void clear_height();
  static const int kHeightFieldNumber = 3;
  ::google::protobuf::int32 height() const;
  void set_height(::google::protobuf::int32 value);

  // optional int32 label = 4;
  void clear_label();
  static const int kLabelFieldNumber = 4;
  ::google::protobuf::int32 label() const;
  void set_label(::google::protobuf::int32 value);

  // optional string name = 5;
  void clear_name();
  static const int kNameFieldNumber = 5;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional bytes data = 6;
  void clear_data();
  static const int kDataFieldNumber = 6;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:Data.Datum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 channel_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 height_;
  ::google::protobuf::int32 label_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_data_2eproto();
  friend void protobuf_AssignDesc_data_2eproto();
  friend void protobuf_ShutdownFile_data_2eproto();

  void InitAsDefaultInstance();
  static Datum* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// categoryList

// repeated .Data.category category = 1;
inline int categoryList::category_size() const {
  return category_.size();
}
inline void categoryList::clear_category() {
  category_.Clear();
}
inline const ::Data::category& categoryList::category(int index) const {
  // @@protoc_insertion_point(field_get:Data.categoryList.category)
  return category_.Get(index);
}
inline ::Data::category* categoryList::mutable_category(int index) {
  // @@protoc_insertion_point(field_mutable:Data.categoryList.category)
  return category_.Mutable(index);
}
inline ::Data::category* categoryList::add_category() {
  // @@protoc_insertion_point(field_add:Data.categoryList.category)
  return category_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Data::category >*
categoryList::mutable_category() {
  // @@protoc_insertion_point(field_mutable_list:Data.categoryList.category)
  return &category_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Data::category >&
categoryList::category() const {
  // @@protoc_insertion_point(field_list:Data.categoryList.category)
  return category_;
}

// -------------------------------------------------------------------

// category

// optional string name = 1;
inline void category::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& category::name() const {
  // @@protoc_insertion_point(field_get:Data.category.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void category::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Data.category.name)
}
inline void category::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Data.category.name)
}
inline void category::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Data.category.name)
}
inline ::std::string* category::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Data.category.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* category::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void category::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Data.category.name)
}

// optional int32 id = 2;
inline void category::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 category::id() const {
  // @@protoc_insertion_point(field_get:Data.category.id)
  return id_;
}
inline void category::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Data.category.id)
}

// -------------------------------------------------------------------

// Gallery

// repeated .Data.Datum images = 1;
inline int Gallery::images_size() const {
  return images_.size();
}
inline void Gallery::clear_images() {
  images_.Clear();
}
inline const ::Data::Datum& Gallery::images(int index) const {
  // @@protoc_insertion_point(field_get:Data.Gallery.images)
  return images_.Get(index);
}
inline ::Data::Datum* Gallery::mutable_images(int index) {
  // @@protoc_insertion_point(field_mutable:Data.Gallery.images)
  return images_.Mutable(index);
}
inline ::Data::Datum* Gallery::add_images() {
  // @@protoc_insertion_point(field_add:Data.Gallery.images)
  return images_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Data::Datum >*
Gallery::mutable_images() {
  // @@protoc_insertion_point(field_mutable_list:Data.Gallery.images)
  return &images_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Data::Datum >&
Gallery::images() const {
  // @@protoc_insertion_point(field_list:Data.Gallery.images)
  return images_;
}

// -------------------------------------------------------------------

// Datum

// optional int32 channel = 1;
inline void Datum::clear_channel() {
  channel_ = 0;
}
inline ::google::protobuf::int32 Datum::channel() const {
  // @@protoc_insertion_point(field_get:Data.Datum.channel)
  return channel_;
}
inline void Datum::set_channel(::google::protobuf::int32 value) {
  
  channel_ = value;
  // @@protoc_insertion_point(field_set:Data.Datum.channel)
}

// optional int32 width = 2;
inline void Datum::clear_width() {
  width_ = 0;
}
inline ::google::protobuf::int32 Datum::width() const {
  // @@protoc_insertion_point(field_get:Data.Datum.width)
  return width_;
}
inline void Datum::set_width(::google::protobuf::int32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:Data.Datum.width)
}

// optional int32 height = 3;
inline void Datum::clear_height() {
  height_ = 0;
}
inline ::google::protobuf::int32 Datum::height() const {
  // @@protoc_insertion_point(field_get:Data.Datum.height)
  return height_;
}
inline void Datum::set_height(::google::protobuf::int32 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:Data.Datum.height)
}

// optional int32 label = 4;
inline void Datum::clear_label() {
  label_ = 0;
}
inline ::google::protobuf::int32 Datum::label() const {
  // @@protoc_insertion_point(field_get:Data.Datum.label)
  return label_;
}
inline void Datum::set_label(::google::protobuf::int32 value) {
  
  label_ = value;
  // @@protoc_insertion_point(field_set:Data.Datum.label)
}

// optional string name = 5;
inline void Datum::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Datum::name() const {
  // @@protoc_insertion_point(field_get:Data.Datum.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Datum::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Data.Datum.name)
}
inline void Datum::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Data.Datum.name)
}
inline void Datum::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Data.Datum.name)
}
inline ::std::string* Datum::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Data.Datum.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Datum::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Datum::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Data.Datum.name)
}

// optional bytes data = 6;
inline void Datum::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Datum::data() const {
  // @@protoc_insertion_point(field_get:Data.Datum.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Datum::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Data.Datum.data)
}
inline void Datum::set_data(const char* value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Data.Datum.data)
}
inline void Datum::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Data.Datum.data)
}
inline ::std::string* Datum::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:Data.Datum.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Datum::release_data() {
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Datum::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:Data.Datum.data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_data_2eproto__INCLUDED
