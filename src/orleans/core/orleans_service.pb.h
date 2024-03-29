// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: orleans_service.proto

#ifndef PROTOBUF_orleans_5fservice_2eproto__INCLUDED
#define PROTOBUF_orleans_5fservice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "gayrpc/core/gayrpc_option.pb.h"  // IWYU pragma: export
#include "gayrpc/core/gayrpc_meta.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_orleans_5fservice_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsOrleansRequestImpl();
void InitDefaultsOrleansRequest();
void InitDefaultsOrleansResponseImpl();
void InitDefaultsOrleansResponse();
void InitDefaultsOrleansReleaseRequestImpl();
void InitDefaultsOrleansReleaseRequest();
void InitDefaultsOrleansReleaseResponseImpl();
void InitDefaultsOrleansReleaseResponse();
inline void InitDefaults() {
  InitDefaultsOrleansRequest();
  InitDefaultsOrleansResponse();
  InitDefaultsOrleansReleaseRequest();
  InitDefaultsOrleansReleaseResponse();
}
}  // namespace protobuf_orleans_5fservice_2eproto
namespace orleans {
namespace core {
class OrleansReleaseRequest;
class OrleansReleaseRequestDefaultTypeInternal;
extern OrleansReleaseRequestDefaultTypeInternal _OrleansReleaseRequest_default_instance_;
class OrleansReleaseResponse;
class OrleansReleaseResponseDefaultTypeInternal;
extern OrleansReleaseResponseDefaultTypeInternal _OrleansReleaseResponse_default_instance_;
class OrleansRequest;
class OrleansRequestDefaultTypeInternal;
extern OrleansRequestDefaultTypeInternal _OrleansRequest_default_instance_;
class OrleansResponse;
class OrleansResponseDefaultTypeInternal;
extern OrleansResponseDefaultTypeInternal _OrleansResponse_default_instance_;
}  // namespace core
}  // namespace orleans
namespace orleans {
namespace core {

// ===================================================================

class OrleansRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:orleans.core.OrleansRequest) */ {
 public:
  OrleansRequest();
  virtual ~OrleansRequest();

  OrleansRequest(const OrleansRequest& from);

  inline OrleansRequest& operator=(const OrleansRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OrleansRequest(OrleansRequest&& from) noexcept
    : OrleansRequest() {
    *this = ::std::move(from);
  }

  inline OrleansRequest& operator=(OrleansRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OrleansRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OrleansRequest* internal_default_instance() {
    return reinterpret_cast<const OrleansRequest*>(
               &_OrleansRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(OrleansRequest* other);
  friend void swap(OrleansRequest& a, OrleansRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OrleansRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  OrleansRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OrleansRequest& from);
  void MergeFrom(const OrleansRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OrleansRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string grain_type = 1;
  void clear_grain_type();
  static const int kGrainTypeFieldNumber = 1;
  const ::std::string& grain_type() const;
  void set_grain_type(const ::std::string& value);
  #if LANG_CXX11
  void set_grain_type(::std::string&& value);
  #endif
  void set_grain_type(const char* value);
  void set_grain_type(const char* value, size_t size);
  ::std::string* mutable_grain_type();
  ::std::string* release_grain_type();
  void set_allocated_grain_type(::std::string* grain_type);

  // string grain_unique_name = 2;
  void clear_grain_unique_name();
  static const int kGrainUniqueNameFieldNumber = 2;
  const ::std::string& grain_unique_name() const;
  void set_grain_unique_name(const ::std::string& value);
  #if LANG_CXX11
  void set_grain_unique_name(::std::string&& value);
  #endif
  void set_grain_unique_name(const char* value);
  void set_grain_unique_name(const char* value, size_t size);
  ::std::string* mutable_grain_unique_name();
  ::std::string* release_grain_unique_name();
  void set_allocated_grain_unique_name(::std::string* grain_unique_name);

  // bytes body = 4;
  void clear_body();
  static const int kBodyFieldNumber = 4;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  #if LANG_CXX11
  void set_body(::std::string&& value);
  #endif
  void set_body(const char* value);
  void set_body(const void* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // .gayrpc.core.RpcMeta meta = 3;
  bool has_meta() const;
  void clear_meta();
  static const int kMetaFieldNumber = 3;
  const ::gayrpc::core::RpcMeta& meta() const;
  ::gayrpc::core::RpcMeta* release_meta();
  ::gayrpc::core::RpcMeta* mutable_meta();
  void set_allocated_meta(::gayrpc::core::RpcMeta* meta);

  // @@protoc_insertion_point(class_scope:orleans.core.OrleansRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr grain_type_;
  ::google::protobuf::internal::ArenaStringPtr grain_unique_name_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  ::gayrpc::core::RpcMeta* meta_;
  mutable int _cached_size_;
  friend struct ::protobuf_orleans_5fservice_2eproto::TableStruct;
  friend void ::protobuf_orleans_5fservice_2eproto::InitDefaultsOrleansRequestImpl();
};
// -------------------------------------------------------------------

class OrleansResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:orleans.core.OrleansResponse) */ {
 public:
  OrleansResponse();
  virtual ~OrleansResponse();

  OrleansResponse(const OrleansResponse& from);

  inline OrleansResponse& operator=(const OrleansResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OrleansResponse(OrleansResponse&& from) noexcept
    : OrleansResponse() {
    *this = ::std::move(from);
  }

  inline OrleansResponse& operator=(OrleansResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OrleansResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OrleansResponse* internal_default_instance() {
    return reinterpret_cast<const OrleansResponse*>(
               &_OrleansResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(OrleansResponse* other);
  friend void swap(OrleansResponse& a, OrleansResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OrleansResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  OrleansResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OrleansResponse& from);
  void MergeFrom(const OrleansResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OrleansResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes body = 2;
  void clear_body();
  static const int kBodyFieldNumber = 2;
  const ::std::string& body() const;
  void set_body(const ::std::string& value);
  #if LANG_CXX11
  void set_body(::std::string&& value);
  #endif
  void set_body(const char* value);
  void set_body(const void* value, size_t size);
  ::std::string* mutable_body();
  ::std::string* release_body();
  void set_allocated_body(::std::string* body);

  // .gayrpc.core.RpcMeta meta = 1;
  bool has_meta() const;
  void clear_meta();
  static const int kMetaFieldNumber = 1;
  const ::gayrpc::core::RpcMeta& meta() const;
  ::gayrpc::core::RpcMeta* release_meta();
  ::gayrpc::core::RpcMeta* mutable_meta();
  void set_allocated_meta(::gayrpc::core::RpcMeta* meta);

  // @@protoc_insertion_point(class_scope:orleans.core.OrleansResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr body_;
  ::gayrpc::core::RpcMeta* meta_;
  mutable int _cached_size_;
  friend struct ::protobuf_orleans_5fservice_2eproto::TableStruct;
  friend void ::protobuf_orleans_5fservice_2eproto::InitDefaultsOrleansResponseImpl();
};
// -------------------------------------------------------------------

class OrleansReleaseRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:orleans.core.OrleansReleaseRequest) */ {
 public:
  OrleansReleaseRequest();
  virtual ~OrleansReleaseRequest();

  OrleansReleaseRequest(const OrleansReleaseRequest& from);

  inline OrleansReleaseRequest& operator=(const OrleansReleaseRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OrleansReleaseRequest(OrleansReleaseRequest&& from) noexcept
    : OrleansReleaseRequest() {
    *this = ::std::move(from);
  }

  inline OrleansReleaseRequest& operator=(OrleansReleaseRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OrleansReleaseRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OrleansReleaseRequest* internal_default_instance() {
    return reinterpret_cast<const OrleansReleaseRequest*>(
               &_OrleansReleaseRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(OrleansReleaseRequest* other);
  friend void swap(OrleansReleaseRequest& a, OrleansReleaseRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OrleansReleaseRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  OrleansReleaseRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OrleansReleaseRequest& from);
  void MergeFrom(const OrleansReleaseRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OrleansReleaseRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string grain_type = 1;
  void clear_grain_type();
  static const int kGrainTypeFieldNumber = 1;
  const ::std::string& grain_type() const;
  void set_grain_type(const ::std::string& value);
  #if LANG_CXX11
  void set_grain_type(::std::string&& value);
  #endif
  void set_grain_type(const char* value);
  void set_grain_type(const char* value, size_t size);
  ::std::string* mutable_grain_type();
  ::std::string* release_grain_type();
  void set_allocated_grain_type(::std::string* grain_type);

  // string grain_unique_name = 2;
  void clear_grain_unique_name();
  static const int kGrainUniqueNameFieldNumber = 2;
  const ::std::string& grain_unique_name() const;
  void set_grain_unique_name(const ::std::string& value);
  #if LANG_CXX11
  void set_grain_unique_name(::std::string&& value);
  #endif
  void set_grain_unique_name(const char* value);
  void set_grain_unique_name(const char* value, size_t size);
  ::std::string* mutable_grain_unique_name();
  ::std::string* release_grain_unique_name();
  void set_allocated_grain_unique_name(::std::string* grain_unique_name);

  // @@protoc_insertion_point(class_scope:orleans.core.OrleansReleaseRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr grain_type_;
  ::google::protobuf::internal::ArenaStringPtr grain_unique_name_;
  mutable int _cached_size_;
  friend struct ::protobuf_orleans_5fservice_2eproto::TableStruct;
  friend void ::protobuf_orleans_5fservice_2eproto::InitDefaultsOrleansReleaseRequestImpl();
};
// -------------------------------------------------------------------

class OrleansReleaseResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:orleans.core.OrleansReleaseResponse) */ {
 public:
  OrleansReleaseResponse();
  virtual ~OrleansReleaseResponse();

  OrleansReleaseResponse(const OrleansReleaseResponse& from);

  inline OrleansReleaseResponse& operator=(const OrleansReleaseResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  OrleansReleaseResponse(OrleansReleaseResponse&& from) noexcept
    : OrleansReleaseResponse() {
    *this = ::std::move(from);
  }

  inline OrleansReleaseResponse& operator=(OrleansReleaseResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const OrleansReleaseResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OrleansReleaseResponse* internal_default_instance() {
    return reinterpret_cast<const OrleansReleaseResponse*>(
               &_OrleansReleaseResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(OrleansReleaseResponse* other);
  friend void swap(OrleansReleaseResponse& a, OrleansReleaseResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline OrleansReleaseResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  OrleansReleaseResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const OrleansReleaseResponse& from);
  void MergeFrom(const OrleansReleaseResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(OrleansReleaseResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:orleans.core.OrleansReleaseResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct ::protobuf_orleans_5fservice_2eproto::TableStruct;
  friend void ::protobuf_orleans_5fservice_2eproto::InitDefaultsOrleansReleaseResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OrleansRequest

// string grain_type = 1;
inline void OrleansRequest::clear_grain_type() {
  grain_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OrleansRequest::grain_type() const {
  // @@protoc_insertion_point(field_get:orleans.core.OrleansRequest.grain_type)
  return grain_type_.GetNoArena();
}
inline void OrleansRequest::set_grain_type(const ::std::string& value) {
  
  grain_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:orleans.core.OrleansRequest.grain_type)
}
#if LANG_CXX11
inline void OrleansRequest::set_grain_type(::std::string&& value) {
  
  grain_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:orleans.core.OrleansRequest.grain_type)
}
#endif
inline void OrleansRequest::set_grain_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  grain_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:orleans.core.OrleansRequest.grain_type)
}
inline void OrleansRequest::set_grain_type(const char* value, size_t size) {
  
  grain_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:orleans.core.OrleansRequest.grain_type)
}
inline ::std::string* OrleansRequest::mutable_grain_type() {
  
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansRequest.grain_type)
  return grain_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OrleansRequest::release_grain_type() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansRequest.grain_type)
  
  return grain_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OrleansRequest::set_allocated_grain_type(::std::string* grain_type) {
  if (grain_type != NULL) {
    
  } else {
    
  }
  grain_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), grain_type);
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansRequest.grain_type)
}

// string grain_unique_name = 2;
inline void OrleansRequest::clear_grain_unique_name() {
  grain_unique_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OrleansRequest::grain_unique_name() const {
  // @@protoc_insertion_point(field_get:orleans.core.OrleansRequest.grain_unique_name)
  return grain_unique_name_.GetNoArena();
}
inline void OrleansRequest::set_grain_unique_name(const ::std::string& value) {
  
  grain_unique_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:orleans.core.OrleansRequest.grain_unique_name)
}
#if LANG_CXX11
inline void OrleansRequest::set_grain_unique_name(::std::string&& value) {
  
  grain_unique_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:orleans.core.OrleansRequest.grain_unique_name)
}
#endif
inline void OrleansRequest::set_grain_unique_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  grain_unique_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:orleans.core.OrleansRequest.grain_unique_name)
}
inline void OrleansRequest::set_grain_unique_name(const char* value, size_t size) {
  
  grain_unique_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:orleans.core.OrleansRequest.grain_unique_name)
}
inline ::std::string* OrleansRequest::mutable_grain_unique_name() {
  
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansRequest.grain_unique_name)
  return grain_unique_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OrleansRequest::release_grain_unique_name() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansRequest.grain_unique_name)
  
  return grain_unique_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OrleansRequest::set_allocated_grain_unique_name(::std::string* grain_unique_name) {
  if (grain_unique_name != NULL) {
    
  } else {
    
  }
  grain_unique_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), grain_unique_name);
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansRequest.grain_unique_name)
}

// .gayrpc.core.RpcMeta meta = 3;
inline bool OrleansRequest::has_meta() const {
  return this != internal_default_instance() && meta_ != NULL;
}
inline const ::gayrpc::core::RpcMeta& OrleansRequest::meta() const {
  const ::gayrpc::core::RpcMeta* p = meta_;
  // @@protoc_insertion_point(field_get:orleans.core.OrleansRequest.meta)
  return p != NULL ? *p : *reinterpret_cast<const ::gayrpc::core::RpcMeta*>(
      &::gayrpc::core::_RpcMeta_default_instance_);
}
inline ::gayrpc::core::RpcMeta* OrleansRequest::release_meta() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansRequest.meta)
  
  ::gayrpc::core::RpcMeta* temp = meta_;
  meta_ = NULL;
  return temp;
}
inline ::gayrpc::core::RpcMeta* OrleansRequest::mutable_meta() {
  
  if (meta_ == NULL) {
    meta_ = new ::gayrpc::core::RpcMeta;
  }
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansRequest.meta)
  return meta_;
}
inline void OrleansRequest::set_allocated_meta(::gayrpc::core::RpcMeta* meta) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(meta_);
  }
  if (meta) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      meta = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, meta, submessage_arena);
    }
    
  } else {
    
  }
  meta_ = meta;
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansRequest.meta)
}

// bytes body = 4;
inline void OrleansRequest::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OrleansRequest::body() const {
  // @@protoc_insertion_point(field_get:orleans.core.OrleansRequest.body)
  return body_.GetNoArena();
}
inline void OrleansRequest::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:orleans.core.OrleansRequest.body)
}
#if LANG_CXX11
inline void OrleansRequest::set_body(::std::string&& value) {
  
  body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:orleans.core.OrleansRequest.body)
}
#endif
inline void OrleansRequest::set_body(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:orleans.core.OrleansRequest.body)
}
inline void OrleansRequest::set_body(const void* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:orleans.core.OrleansRequest.body)
}
inline ::std::string* OrleansRequest::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansRequest.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OrleansRequest::release_body() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansRequest.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OrleansRequest::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansRequest.body)
}

// -------------------------------------------------------------------

// OrleansResponse

// .gayrpc.core.RpcMeta meta = 1;
inline bool OrleansResponse::has_meta() const {
  return this != internal_default_instance() && meta_ != NULL;
}
inline const ::gayrpc::core::RpcMeta& OrleansResponse::meta() const {
  const ::gayrpc::core::RpcMeta* p = meta_;
  // @@protoc_insertion_point(field_get:orleans.core.OrleansResponse.meta)
  return p != NULL ? *p : *reinterpret_cast<const ::gayrpc::core::RpcMeta*>(
      &::gayrpc::core::_RpcMeta_default_instance_);
}
inline ::gayrpc::core::RpcMeta* OrleansResponse::release_meta() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansResponse.meta)
  
  ::gayrpc::core::RpcMeta* temp = meta_;
  meta_ = NULL;
  return temp;
}
inline ::gayrpc::core::RpcMeta* OrleansResponse::mutable_meta() {
  
  if (meta_ == NULL) {
    meta_ = new ::gayrpc::core::RpcMeta;
  }
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansResponse.meta)
  return meta_;
}
inline void OrleansResponse::set_allocated_meta(::gayrpc::core::RpcMeta* meta) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(meta_);
  }
  if (meta) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      meta = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, meta, submessage_arena);
    }
    
  } else {
    
  }
  meta_ = meta;
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansResponse.meta)
}

// bytes body = 2;
inline void OrleansResponse::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OrleansResponse::body() const {
  // @@protoc_insertion_point(field_get:orleans.core.OrleansResponse.body)
  return body_.GetNoArena();
}
inline void OrleansResponse::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:orleans.core.OrleansResponse.body)
}
#if LANG_CXX11
inline void OrleansResponse::set_body(::std::string&& value) {
  
  body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:orleans.core.OrleansResponse.body)
}
#endif
inline void OrleansResponse::set_body(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:orleans.core.OrleansResponse.body)
}
inline void OrleansResponse::set_body(const void* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:orleans.core.OrleansResponse.body)
}
inline ::std::string* OrleansResponse::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansResponse.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OrleansResponse::release_body() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansResponse.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OrleansResponse::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansResponse.body)
}

// -------------------------------------------------------------------

// OrleansReleaseRequest

// string grain_type = 1;
inline void OrleansReleaseRequest::clear_grain_type() {
  grain_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OrleansReleaseRequest::grain_type() const {
  // @@protoc_insertion_point(field_get:orleans.core.OrleansReleaseRequest.grain_type)
  return grain_type_.GetNoArena();
}
inline void OrleansReleaseRequest::set_grain_type(const ::std::string& value) {
  
  grain_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:orleans.core.OrleansReleaseRequest.grain_type)
}
#if LANG_CXX11
inline void OrleansReleaseRequest::set_grain_type(::std::string&& value) {
  
  grain_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:orleans.core.OrleansReleaseRequest.grain_type)
}
#endif
inline void OrleansReleaseRequest::set_grain_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  grain_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:orleans.core.OrleansReleaseRequest.grain_type)
}
inline void OrleansReleaseRequest::set_grain_type(const char* value, size_t size) {
  
  grain_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:orleans.core.OrleansReleaseRequest.grain_type)
}
inline ::std::string* OrleansReleaseRequest::mutable_grain_type() {
  
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansReleaseRequest.grain_type)
  return grain_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OrleansReleaseRequest::release_grain_type() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansReleaseRequest.grain_type)
  
  return grain_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OrleansReleaseRequest::set_allocated_grain_type(::std::string* grain_type) {
  if (grain_type != NULL) {
    
  } else {
    
  }
  grain_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), grain_type);
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansReleaseRequest.grain_type)
}

// string grain_unique_name = 2;
inline void OrleansReleaseRequest::clear_grain_unique_name() {
  grain_unique_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& OrleansReleaseRequest::grain_unique_name() const {
  // @@protoc_insertion_point(field_get:orleans.core.OrleansReleaseRequest.grain_unique_name)
  return grain_unique_name_.GetNoArena();
}
inline void OrleansReleaseRequest::set_grain_unique_name(const ::std::string& value) {
  
  grain_unique_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:orleans.core.OrleansReleaseRequest.grain_unique_name)
}
#if LANG_CXX11
inline void OrleansReleaseRequest::set_grain_unique_name(::std::string&& value) {
  
  grain_unique_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:orleans.core.OrleansReleaseRequest.grain_unique_name)
}
#endif
inline void OrleansReleaseRequest::set_grain_unique_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  grain_unique_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:orleans.core.OrleansReleaseRequest.grain_unique_name)
}
inline void OrleansReleaseRequest::set_grain_unique_name(const char* value, size_t size) {
  
  grain_unique_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:orleans.core.OrleansReleaseRequest.grain_unique_name)
}
inline ::std::string* OrleansReleaseRequest::mutable_grain_unique_name() {
  
  // @@protoc_insertion_point(field_mutable:orleans.core.OrleansReleaseRequest.grain_unique_name)
  return grain_unique_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* OrleansReleaseRequest::release_grain_unique_name() {
  // @@protoc_insertion_point(field_release:orleans.core.OrleansReleaseRequest.grain_unique_name)
  
  return grain_unique_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void OrleansReleaseRequest::set_allocated_grain_unique_name(::std::string* grain_unique_name) {
  if (grain_unique_name != NULL) {
    
  } else {
    
  }
  grain_unique_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), grain_unique_name);
  // @@protoc_insertion_point(field_set_allocated:orleans.core.OrleansReleaseRequest.grain_unique_name)
}

// -------------------------------------------------------------------

// OrleansReleaseResponse

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace orleans

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_orleans_5fservice_2eproto__INCLUDED
