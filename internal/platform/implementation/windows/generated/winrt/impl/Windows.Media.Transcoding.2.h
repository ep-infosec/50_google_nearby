// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Windows_Media_Transcoding_2_H
#define WINRT_Windows_Media_Transcoding_2_H
#include "winrt/impl/Windows.Media.Transcoding.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Transcoding
{
    struct __declspec(empty_bases) MediaTranscoder : winrt::Windows::Media::Transcoding::IMediaTranscoder,
        impl::require<MediaTranscoder, winrt::Windows::Media::Transcoding::IMediaTranscoder2>
    {
        MediaTranscoder(std::nullptr_t) noexcept {}
        MediaTranscoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Transcoding::IMediaTranscoder(ptr, take_ownership_from_abi) {}
        MediaTranscoder();
    };
    struct __declspec(empty_bases) PrepareTranscodeResult : winrt::Windows::Media::Transcoding::IPrepareTranscodeResult
    {
        PrepareTranscodeResult(std::nullptr_t) noexcept {}
        PrepareTranscodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Transcoding::IPrepareTranscodeResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
