// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: calculator.proto

#ifndef PROTOBUF_calculator_2eproto__INCLUDED
#define PROTOBUF_calculator_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_calculator_2eproto();
void protobuf_AssignDesc_calculator_2eproto();
void protobuf_ShutdownFile_calculator_2eproto();

class Numbers;

// ===================================================================

class Numbers : public ::google::protobuf::Message {
 public:
  Numbers();
  virtual ~Numbers();

  Numbers(const Numbers& from);

  inline Numbers& operator=(const Numbers& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Numbers& default_instance();

  void Swap(Numbers* other);

  // implements Message ----------------------------------------------

  Numbers* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Numbers& from);
  void MergeFrom(const Numbers& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 i = 1;
  inline bool has_i() const;
  inline void clear_i();
  static const int kIFieldNumber = 1;
  inline ::google::protobuf::int32 i() const;
  inline void set_i(::google::protobuf::int32 value);

  // repeated int32 j = 2 [packed = true];
  inline int j_size() const;
  inline void clear_j();
  static const int kJFieldNumber = 2;
  inline ::google::protobuf::int32 j(int index) const;
  inline void set_j(int index, ::google::protobuf::int32 value);
  inline void add_j(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      j() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_j();

  // @@protoc_insertion_point(class_scope:Numbers)
 private:
  inline void set_has_i();
  inline void clear_has_i();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > j_;
  mutable int _j_cached_byte_size_;
  ::google::protobuf::int32 i_;
  friend void  protobuf_AddDesc_calculator_2eproto();
  friend void protobuf_AssignDesc_calculator_2eproto();
  friend void protobuf_ShutdownFile_calculator_2eproto();

  void InitAsDefaultInstance();
  static Numbers* default_instance_;
};
// ===================================================================


// ===================================================================

// Numbers

// required int32 i = 1;
inline bool Numbers::has_i() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Numbers::set_has_i() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Numbers::clear_has_i() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Numbers::clear_i() {
  i_ = 0;
  clear_has_i();
}
inline ::google::protobuf::int32 Numbers::i() const {
  // @@protoc_insertion_point(field_get:Numbers.i)
  return i_;
}
inline void Numbers::set_i(::google::protobuf::int32 value) {
  set_has_i();
  i_ = value;
  // @@protoc_insertion_point(field_set:Numbers.i)
}

// repeated int32 j = 2 [packed = true];
inline int Numbers::j_size() const {
  return j_.size();
}
inline void Numbers::clear_j() {
  j_.Clear();
}
inline ::google::protobuf::int32 Numbers::j(int index) const {
  // @@protoc_insertion_point(field_get:Numbers.j)
  return j_.Get(index);
}
inline void Numbers::set_j(int index, ::google::protobuf::int32 value) {
  j_.Set(index, value);
  // @@protoc_insertion_point(field_set:Numbers.j)
}
inline void Numbers::add_j(::google::protobuf::int32 value) {
  j_.Add(value);
  // @@protoc_insertion_point(field_add:Numbers.j)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Numbers::j() const {
  // @@protoc_insertion_point(field_list:Numbers.j)
  return j_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Numbers::mutable_j() {
  // @@protoc_insertion_point(field_mutable_list:Numbers.j)
  return &j_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_calculator_2eproto__INCLUDED