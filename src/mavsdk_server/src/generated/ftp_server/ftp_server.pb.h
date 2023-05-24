// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ftp_server/ftp_server.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ftp_5fserver_2fftp_5fserver_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ftp_5fserver_2fftp_5fserver_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "mavsdk_options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ftp_5fserver_2fftp_5fserver_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ftp_5fserver_2fftp_5fserver_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ftp_5fserver_2fftp_5fserver_2eproto;
namespace mavsdk {
namespace rpc {
namespace ftp_server {
class FtpServerResult;
struct FtpServerResultDefaultTypeInternal;
extern FtpServerResultDefaultTypeInternal _FtpServerResult_default_instance_;
class SetRootDirRequest;
struct SetRootDirRequestDefaultTypeInternal;
extern SetRootDirRequestDefaultTypeInternal _SetRootDirRequest_default_instance_;
class SetRootDirResponse;
struct SetRootDirResponseDefaultTypeInternal;
extern SetRootDirResponseDefaultTypeInternal _SetRootDirResponse_default_instance_;
}  // namespace ftp_server
}  // namespace rpc
}  // namespace mavsdk
PROTOBUF_NAMESPACE_OPEN
template<> ::mavsdk::rpc::ftp_server::FtpServerResult* Arena::CreateMaybeMessage<::mavsdk::rpc::ftp_server::FtpServerResult>(Arena*);
template<> ::mavsdk::rpc::ftp_server::SetRootDirRequest* Arena::CreateMaybeMessage<::mavsdk::rpc::ftp_server::SetRootDirRequest>(Arena*);
template<> ::mavsdk::rpc::ftp_server::SetRootDirResponse* Arena::CreateMaybeMessage<::mavsdk::rpc::ftp_server::SetRootDirResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mavsdk {
namespace rpc {
namespace ftp_server {

enum FtpServerResult_Result : int {
  FtpServerResult_Result_RESULT_UNKNOWN = 0,
  FtpServerResult_Result_RESULT_SUCCESS = 1,
  FtpServerResult_Result_RESULT_DOES_NOT_EXIST = 2,
  FtpServerResult_Result_RESULT_BUSY = 3,
  FtpServerResult_Result_FtpServerResult_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  FtpServerResult_Result_FtpServerResult_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool FtpServerResult_Result_IsValid(int value);
constexpr FtpServerResult_Result FtpServerResult_Result_Result_MIN = FtpServerResult_Result_RESULT_UNKNOWN;
constexpr FtpServerResult_Result FtpServerResult_Result_Result_MAX = FtpServerResult_Result_RESULT_BUSY;
constexpr int FtpServerResult_Result_Result_ARRAYSIZE = FtpServerResult_Result_Result_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FtpServerResult_Result_descriptor();
template<typename T>
inline const std::string& FtpServerResult_Result_Name(T enum_t_value) {
  static_assert(::std::is_same<T, FtpServerResult_Result>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function FtpServerResult_Result_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    FtpServerResult_Result_descriptor(), enum_t_value);
}
inline bool FtpServerResult_Result_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FtpServerResult_Result* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<FtpServerResult_Result>(
    FtpServerResult_Result_descriptor(), name, value);
}
// ===================================================================

class SetRootDirRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.ftp_server.SetRootDirRequest) */ {
 public:
  inline SetRootDirRequest() : SetRootDirRequest(nullptr) {}
  ~SetRootDirRequest() override;
  explicit PROTOBUF_CONSTEXPR SetRootDirRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetRootDirRequest(const SetRootDirRequest& from);
  SetRootDirRequest(SetRootDirRequest&& from) noexcept
    : SetRootDirRequest() {
    *this = ::std::move(from);
  }

  inline SetRootDirRequest& operator=(const SetRootDirRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetRootDirRequest& operator=(SetRootDirRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetRootDirRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetRootDirRequest* internal_default_instance() {
    return reinterpret_cast<const SetRootDirRequest*>(
               &_SetRootDirRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SetRootDirRequest& a, SetRootDirRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SetRootDirRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetRootDirRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetRootDirRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetRootDirRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SetRootDirRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SetRootDirRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetRootDirRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mavsdk.rpc.ftp_server.SetRootDirRequest";
  }
  protected:
  explicit SetRootDirRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPathFieldNumber = 1,
  };
  // string path = 1;
  void clear_path();
  const std::string& path() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_path(ArgT0&& arg0, ArgT... args);
  std::string* mutable_path();
  PROTOBUF_NODISCARD std::string* release_path();
  void set_allocated_path(std::string* path);
  private:
  const std::string& _internal_path() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_path(const std::string& value);
  std::string* _internal_mutable_path();
  public:

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.ftp_server.SetRootDirRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr path_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ftp_5fserver_2fftp_5fserver_2eproto;
};
// -------------------------------------------------------------------

class SetRootDirResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.ftp_server.SetRootDirResponse) */ {
 public:
  inline SetRootDirResponse() : SetRootDirResponse(nullptr) {}
  ~SetRootDirResponse() override;
  explicit PROTOBUF_CONSTEXPR SetRootDirResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetRootDirResponse(const SetRootDirResponse& from);
  SetRootDirResponse(SetRootDirResponse&& from) noexcept
    : SetRootDirResponse() {
    *this = ::std::move(from);
  }

  inline SetRootDirResponse& operator=(const SetRootDirResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetRootDirResponse& operator=(SetRootDirResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetRootDirResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetRootDirResponse* internal_default_instance() {
    return reinterpret_cast<const SetRootDirResponse*>(
               &_SetRootDirResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SetRootDirResponse& a, SetRootDirResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SetRootDirResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetRootDirResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetRootDirResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetRootDirResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SetRootDirResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SetRootDirResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetRootDirResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mavsdk.rpc.ftp_server.SetRootDirResponse";
  }
  protected:
  explicit SetRootDirResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFtpServerResultFieldNumber = 1,
  };
  // .mavsdk.rpc.ftp_server.FtpServerResult ftp_server_result = 1;
  bool has_ftp_server_result() const;
  private:
  bool _internal_has_ftp_server_result() const;
  public:
  void clear_ftp_server_result();
  const ::mavsdk::rpc::ftp_server::FtpServerResult& ftp_server_result() const;
  PROTOBUF_NODISCARD ::mavsdk::rpc::ftp_server::FtpServerResult* release_ftp_server_result();
  ::mavsdk::rpc::ftp_server::FtpServerResult* mutable_ftp_server_result();
  void set_allocated_ftp_server_result(::mavsdk::rpc::ftp_server::FtpServerResult* ftp_server_result);
  private:
  const ::mavsdk::rpc::ftp_server::FtpServerResult& _internal_ftp_server_result() const;
  ::mavsdk::rpc::ftp_server::FtpServerResult* _internal_mutable_ftp_server_result();
  public:
  void unsafe_arena_set_allocated_ftp_server_result(
      ::mavsdk::rpc::ftp_server::FtpServerResult* ftp_server_result);
  ::mavsdk::rpc::ftp_server::FtpServerResult* unsafe_arena_release_ftp_server_result();

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.ftp_server.SetRootDirResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::mavsdk::rpc::ftp_server::FtpServerResult* ftp_server_result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ftp_5fserver_2fftp_5fserver_2eproto;
};
// -------------------------------------------------------------------

class FtpServerResult final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.ftp_server.FtpServerResult) */ {
 public:
  inline FtpServerResult() : FtpServerResult(nullptr) {}
  ~FtpServerResult() override;
  explicit PROTOBUF_CONSTEXPR FtpServerResult(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FtpServerResult(const FtpServerResult& from);
  FtpServerResult(FtpServerResult&& from) noexcept
    : FtpServerResult() {
    *this = ::std::move(from);
  }

  inline FtpServerResult& operator=(const FtpServerResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline FtpServerResult& operator=(FtpServerResult&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FtpServerResult& default_instance() {
    return *internal_default_instance();
  }
  static inline const FtpServerResult* internal_default_instance() {
    return reinterpret_cast<const FtpServerResult*>(
               &_FtpServerResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(FtpServerResult& a, FtpServerResult& b) {
    a.Swap(&b);
  }
  inline void Swap(FtpServerResult* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FtpServerResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FtpServerResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FtpServerResult>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const FtpServerResult& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const FtpServerResult& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FtpServerResult* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mavsdk.rpc.ftp_server.FtpServerResult";
  }
  protected:
  explicit FtpServerResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef FtpServerResult_Result Result;
  static constexpr Result RESULT_UNKNOWN =
    FtpServerResult_Result_RESULT_UNKNOWN;
  static constexpr Result RESULT_SUCCESS =
    FtpServerResult_Result_RESULT_SUCCESS;
  static constexpr Result RESULT_DOES_NOT_EXIST =
    FtpServerResult_Result_RESULT_DOES_NOT_EXIST;
  static constexpr Result RESULT_BUSY =
    FtpServerResult_Result_RESULT_BUSY;
  static inline bool Result_IsValid(int value) {
    return FtpServerResult_Result_IsValid(value);
  }
  static constexpr Result Result_MIN =
    FtpServerResult_Result_Result_MIN;
  static constexpr Result Result_MAX =
    FtpServerResult_Result_Result_MAX;
  static constexpr int Result_ARRAYSIZE =
    FtpServerResult_Result_Result_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Result_descriptor() {
    return FtpServerResult_Result_descriptor();
  }
  template<typename T>
  static inline const std::string& Result_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Result>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Result_Name.");
    return FtpServerResult_Result_Name(enum_t_value);
  }
  static inline bool Result_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Result* value) {
    return FtpServerResult_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kResultStrFieldNumber = 2,
    kResultFieldNumber = 1,
  };
  // string result_str = 2;
  void clear_result_str();
  const std::string& result_str() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_result_str(ArgT0&& arg0, ArgT... args);
  std::string* mutable_result_str();
  PROTOBUF_NODISCARD std::string* release_result_str();
  void set_allocated_result_str(std::string* result_str);
  private:
  const std::string& _internal_result_str() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_result_str(const std::string& value);
  std::string* _internal_mutable_result_str();
  public:

  // .mavsdk.rpc.ftp_server.FtpServerResult.Result result = 1;
  void clear_result();
  ::mavsdk::rpc::ftp_server::FtpServerResult_Result result() const;
  void set_result(::mavsdk::rpc::ftp_server::FtpServerResult_Result value);
  private:
  ::mavsdk::rpc::ftp_server::FtpServerResult_Result _internal_result() const;
  void _internal_set_result(::mavsdk::rpc::ftp_server::FtpServerResult_Result value);
  public:

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.ftp_server.FtpServerResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr result_str_;
  int result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ftp_5fserver_2fftp_5fserver_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SetRootDirRequest

// string path = 1;
inline void SetRootDirRequest::clear_path() {
  path_.ClearToEmpty();
}
inline const std::string& SetRootDirRequest::path() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.ftp_server.SetRootDirRequest.path)
  return _internal_path();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SetRootDirRequest::set_path(ArgT0&& arg0, ArgT... args) {
 
 path_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:mavsdk.rpc.ftp_server.SetRootDirRequest.path)
}
inline std::string* SetRootDirRequest::mutable_path() {
  std::string* _s = _internal_mutable_path();
  // @@protoc_insertion_point(field_mutable:mavsdk.rpc.ftp_server.SetRootDirRequest.path)
  return _s;
}
inline const std::string& SetRootDirRequest::_internal_path() const {
  return path_.Get();
}
inline void SetRootDirRequest::_internal_set_path(const std::string& value) {
  
  path_.Set(value, GetArenaForAllocation());
}
inline std::string* SetRootDirRequest::_internal_mutable_path() {
  
  return path_.Mutable(GetArenaForAllocation());
}
inline std::string* SetRootDirRequest::release_path() {
  // @@protoc_insertion_point(field_release:mavsdk.rpc.ftp_server.SetRootDirRequest.path)
  return path_.Release();
}
inline void SetRootDirRequest::set_allocated_path(std::string* path) {
  if (path != nullptr) {
    
  } else {
    
  }
  path_.SetAllocated(path, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (path_.IsDefault()) {
    path_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mavsdk.rpc.ftp_server.SetRootDirRequest.path)
}

// -------------------------------------------------------------------

// SetRootDirResponse

// .mavsdk.rpc.ftp_server.FtpServerResult ftp_server_result = 1;
inline bool SetRootDirResponse::_internal_has_ftp_server_result() const {
  return this != internal_default_instance() && ftp_server_result_ != nullptr;
}
inline bool SetRootDirResponse::has_ftp_server_result() const {
  return _internal_has_ftp_server_result();
}
inline void SetRootDirResponse::clear_ftp_server_result() {
  if (GetArenaForAllocation() == nullptr && ftp_server_result_ != nullptr) {
    delete ftp_server_result_;
  }
  ftp_server_result_ = nullptr;
}
inline const ::mavsdk::rpc::ftp_server::FtpServerResult& SetRootDirResponse::_internal_ftp_server_result() const {
  const ::mavsdk::rpc::ftp_server::FtpServerResult* p = ftp_server_result_;
  return p != nullptr ? *p : reinterpret_cast<const ::mavsdk::rpc::ftp_server::FtpServerResult&>(
      ::mavsdk::rpc::ftp_server::_FtpServerResult_default_instance_);
}
inline const ::mavsdk::rpc::ftp_server::FtpServerResult& SetRootDirResponse::ftp_server_result() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.ftp_server.SetRootDirResponse.ftp_server_result)
  return _internal_ftp_server_result();
}
inline void SetRootDirResponse::unsafe_arena_set_allocated_ftp_server_result(
    ::mavsdk::rpc::ftp_server::FtpServerResult* ftp_server_result) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(ftp_server_result_);
  }
  ftp_server_result_ = ftp_server_result;
  if (ftp_server_result) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mavsdk.rpc.ftp_server.SetRootDirResponse.ftp_server_result)
}
inline ::mavsdk::rpc::ftp_server::FtpServerResult* SetRootDirResponse::release_ftp_server_result() {
  
  ::mavsdk::rpc::ftp_server::FtpServerResult* temp = ftp_server_result_;
  ftp_server_result_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::mavsdk::rpc::ftp_server::FtpServerResult* SetRootDirResponse::unsafe_arena_release_ftp_server_result() {
  // @@protoc_insertion_point(field_release:mavsdk.rpc.ftp_server.SetRootDirResponse.ftp_server_result)
  
  ::mavsdk::rpc::ftp_server::FtpServerResult* temp = ftp_server_result_;
  ftp_server_result_ = nullptr;
  return temp;
}
inline ::mavsdk::rpc::ftp_server::FtpServerResult* SetRootDirResponse::_internal_mutable_ftp_server_result() {
  
  if (ftp_server_result_ == nullptr) {
    auto* p = CreateMaybeMessage<::mavsdk::rpc::ftp_server::FtpServerResult>(GetArenaForAllocation());
    ftp_server_result_ = p;
  }
  return ftp_server_result_;
}
inline ::mavsdk::rpc::ftp_server::FtpServerResult* SetRootDirResponse::mutable_ftp_server_result() {
  ::mavsdk::rpc::ftp_server::FtpServerResult* _msg = _internal_mutable_ftp_server_result();
  // @@protoc_insertion_point(field_mutable:mavsdk.rpc.ftp_server.SetRootDirResponse.ftp_server_result)
  return _msg;
}
inline void SetRootDirResponse::set_allocated_ftp_server_result(::mavsdk::rpc::ftp_server::FtpServerResult* ftp_server_result) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete ftp_server_result_;
  }
  if (ftp_server_result) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(ftp_server_result);
    if (message_arena != submessage_arena) {
      ftp_server_result = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ftp_server_result, submessage_arena);
    }
    
  } else {
    
  }
  ftp_server_result_ = ftp_server_result;
  // @@protoc_insertion_point(field_set_allocated:mavsdk.rpc.ftp_server.SetRootDirResponse.ftp_server_result)
}

// -------------------------------------------------------------------

// FtpServerResult

// .mavsdk.rpc.ftp_server.FtpServerResult.Result result = 1;
inline void FtpServerResult::clear_result() {
  result_ = 0;
}
inline ::mavsdk::rpc::ftp_server::FtpServerResult_Result FtpServerResult::_internal_result() const {
  return static_cast< ::mavsdk::rpc::ftp_server::FtpServerResult_Result >(result_);
}
inline ::mavsdk::rpc::ftp_server::FtpServerResult_Result FtpServerResult::result() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.ftp_server.FtpServerResult.result)
  return _internal_result();
}
inline void FtpServerResult::_internal_set_result(::mavsdk::rpc::ftp_server::FtpServerResult_Result value) {
  
  result_ = value;
}
inline void FtpServerResult::set_result(::mavsdk::rpc::ftp_server::FtpServerResult_Result value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:mavsdk.rpc.ftp_server.FtpServerResult.result)
}

// string result_str = 2;
inline void FtpServerResult::clear_result_str() {
  result_str_.ClearToEmpty();
}
inline const std::string& FtpServerResult::result_str() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.ftp_server.FtpServerResult.result_str)
  return _internal_result_str();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FtpServerResult::set_result_str(ArgT0&& arg0, ArgT... args) {
 
 result_str_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:mavsdk.rpc.ftp_server.FtpServerResult.result_str)
}
inline std::string* FtpServerResult::mutable_result_str() {
  std::string* _s = _internal_mutable_result_str();
  // @@protoc_insertion_point(field_mutable:mavsdk.rpc.ftp_server.FtpServerResult.result_str)
  return _s;
}
inline const std::string& FtpServerResult::_internal_result_str() const {
  return result_str_.Get();
}
inline void FtpServerResult::_internal_set_result_str(const std::string& value) {
  
  result_str_.Set(value, GetArenaForAllocation());
}
inline std::string* FtpServerResult::_internal_mutable_result_str() {
  
  return result_str_.Mutable(GetArenaForAllocation());
}
inline std::string* FtpServerResult::release_result_str() {
  // @@protoc_insertion_point(field_release:mavsdk.rpc.ftp_server.FtpServerResult.result_str)
  return result_str_.Release();
}
inline void FtpServerResult::set_allocated_result_str(std::string* result_str) {
  if (result_str != nullptr) {
    
  } else {
    
  }
  result_str_.SetAllocated(result_str, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (result_str_.IsDefault()) {
    result_str_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mavsdk.rpc.ftp_server.FtpServerResult.result_str)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ftp_server
}  // namespace rpc
}  // namespace mavsdk

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::mavsdk::rpc::ftp_server::FtpServerResult_Result> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mavsdk::rpc::ftp_server::FtpServerResult_Result>() {
  return ::mavsdk::rpc::ftp_server::FtpServerResult_Result_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ftp_5fserver_2fftp_5fserver_2eproto
