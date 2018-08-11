/*** Autogenerated by WIDL 1.8-rc4 from htiface.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __htiface_h__
#define __htiface_h__

/* Forward declarations */

#ifndef __ITargetFrame_FWD_DEFINED__
#define __ITargetFrame_FWD_DEFINED__
typedef interface ITargetFrame ITargetFrame;
#ifdef __cplusplus
interface ITargetFrame;
#endif /* __cplusplus */
#endif

#ifndef __ITargetFramePriv_FWD_DEFINED__
#define __ITargetFramePriv_FWD_DEFINED__
typedef interface ITargetFramePriv ITargetFramePriv;
#ifdef __cplusplus
interface ITargetFramePriv;
#endif /* __cplusplus */
#endif

#ifndef __ITargetFramePriv2_FWD_DEFINED__
#define __ITargetFramePriv2_FWD_DEFINED__
typedef interface ITargetFramePriv2 ITargetFramePriv2;
#ifdef __cplusplus
interface ITargetFramePriv2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>
#include <urlmon.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <htiframe.h>
/*****************************************************************************
 * ITargetFrame interface
 */
#ifndef __ITargetFrame_INTERFACE_DEFINED__
#define __ITargetFrame_INTERFACE_DEFINED__

typedef ITargetFrame *LPTARGETFRAME;
typedef enum __WIDL_htiface_generated_name_00000010 {
    NAVIGATEFRAME_FL_RECORD = 0x1,
    NAVIGATEFRAME_FL_POST = 0x2,
    NAVIGATEFRAME_FL_NO_DOC_CACHE = 0x4,
    NAVIGATEFRAME_FL_NO_IMAGE_CACHE = 0x8,
    NAVIGATEFRAME_FL_AUTH_FAIL_CACHE_OK = 0x10,
    NAVIGATEFRAME_FL_SENDING_FROM_FORM = 0x20,
    NAVIGATEFRAME_FL_REALLY_SENDING_FROM_FORM = 0x40
} NAVIGATEFRAME_FLAGS;
typedef struct tagNavigateData {
    ULONG ulTarget;
    ULONG ulURL;
    ULONG ulRefURL;
    ULONG ulPostData;
    DWORD dwFlags;
} NAVIGATEDATA;
DEFINE_GUID(IID_ITargetFrame, 0xd5f78c80, 0x5252, 0x11cf, 0x90,0xfa, 0x00,0xaa,0x00,0x42,0x10,0x6e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d5f78c80-5252-11cf-90fa-00aa0042106e")
ITargetFrame : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetFrameName(
        LPCWSTR pszFrameName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFrameName(
        LPWSTR *ppszFrameName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetParentFrame(
        IUnknown **ppunkParent) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindFrame(
        LPCWSTR pszTargetName,
        IUnknown *ppunkContextFrame,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFrameSrc(
        LPCWSTR pszFrameSrc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFrameSrc(
        LPWSTR *ppszFrameSrc) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITargetFrame, 0xd5f78c80, 0x5252, 0x11cf, 0x90,0xfa, 0x00,0xaa,0x00,0x42,0x10,0x6e)
#endif
#else
typedef struct ITargetFrameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITargetFrame *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITargetFrame *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITargetFrame *This);

    /*** ITargetFrame methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFrameName)(
        ITargetFrame *This,
        LPCWSTR pszFrameName);

    HRESULT (STDMETHODCALLTYPE *GetFrameName)(
        ITargetFrame *This,
        LPWSTR *ppszFrameName);

    HRESULT (STDMETHODCALLTYPE *GetParentFrame)(
        ITargetFrame *This,
        IUnknown **ppunkParent);

    HRESULT (STDMETHODCALLTYPE *FindFrame)(
        ITargetFrame *This,
        LPCWSTR pszTargetName,
        IUnknown *ppunkContextFrame,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame);

    HRESULT (STDMETHODCALLTYPE *SetFrameSrc)(
        ITargetFrame *This,
        LPCWSTR pszFrameSrc);

    HRESULT (STDMETHODCALLTYPE *GetFrameSrc)(
        ITargetFrame *This,
        LPWSTR *ppszFrameSrc);

    END_INTERFACE
} ITargetFrameVtbl;

interface ITargetFrame {
    CONST_VTBL ITargetFrameVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITargetFrame_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITargetFrame_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITargetFrame_Release(This) (This)->lpVtbl->Release(This)
/*** ITargetFrame methods ***/
#define ITargetFrame_SetFrameName(This,pszFrameName) (This)->lpVtbl->SetFrameName(This,pszFrameName)
#define ITargetFrame_GetFrameName(This,ppszFrameName) (This)->lpVtbl->GetFrameName(This,ppszFrameName)
#define ITargetFrame_GetParentFrame(This,ppunkParent) (This)->lpVtbl->GetParentFrame(This,ppunkParent)
#define ITargetFrame_FindFrame(This,pszTargetName,ppunkContextFrame,dwFlags,ppunkTargetFrame) (This)->lpVtbl->FindFrame(This,pszTargetName,ppunkContextFrame,dwFlags,ppunkTargetFrame)
#define ITargetFrame_SetFrameSrc(This,pszFrameSrc) (This)->lpVtbl->SetFrameSrc(This,pszFrameSrc)
#define ITargetFrame_GetFrameSrc(This,ppszFrameSrc) (This)->lpVtbl->GetFrameSrc(This,ppszFrameSrc)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITargetFrame_QueryInterface(ITargetFrame* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITargetFrame_AddRef(ITargetFrame* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITargetFrame_Release(ITargetFrame* This) {
    return This->lpVtbl->Release(This);
}
/*** ITargetFrame methods ***/
static FORCEINLINE HRESULT ITargetFrame_SetFrameName(ITargetFrame* This,LPCWSTR pszFrameName) {
    return This->lpVtbl->SetFrameName(This,pszFrameName);
}
static FORCEINLINE HRESULT ITargetFrame_GetFrameName(ITargetFrame* This,LPWSTR *ppszFrameName) {
    return This->lpVtbl->GetFrameName(This,ppszFrameName);
}
static FORCEINLINE HRESULT ITargetFrame_GetParentFrame(ITargetFrame* This,IUnknown **ppunkParent) {
    return This->lpVtbl->GetParentFrame(This,ppunkParent);
}
static FORCEINLINE HRESULT ITargetFrame_FindFrame(ITargetFrame* This,LPCWSTR pszTargetName,IUnknown *ppunkContextFrame,DWORD dwFlags,IUnknown **ppunkTargetFrame) {
    return This->lpVtbl->FindFrame(This,pszTargetName,ppunkContextFrame,dwFlags,ppunkTargetFrame);
}
static FORCEINLINE HRESULT ITargetFrame_SetFrameSrc(ITargetFrame* This,LPCWSTR pszFrameSrc) {
    return This->lpVtbl->SetFrameSrc(This,pszFrameSrc);
}
static FORCEINLINE HRESULT ITargetFrame_GetFrameSrc(ITargetFrame* This,LPWSTR *ppszFrameSrc) {
    return This->lpVtbl->GetFrameSrc(This,ppszFrameSrc);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ITargetFrame_SetFrameName_Proxy(
    ITargetFrame* This,
    LPCWSTR pszFrameName);
void __RPC_STUB ITargetFrame_SetFrameName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFrame_GetFrameName_Proxy(
    ITargetFrame* This,
    LPWSTR *ppszFrameName);
void __RPC_STUB ITargetFrame_GetFrameName_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFrame_GetParentFrame_Proxy(
    ITargetFrame* This,
    IUnknown **ppunkParent);
void __RPC_STUB ITargetFrame_GetParentFrame_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFrame_FindFrame_Proxy(
    ITargetFrame* This,
    LPCWSTR pszTargetName,
    IUnknown *ppunkContextFrame,
    DWORD dwFlags,
    IUnknown **ppunkTargetFrame);
void __RPC_STUB ITargetFrame_FindFrame_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFrame_SetFrameSrc_Proxy(
    ITargetFrame* This,
    LPCWSTR pszFrameSrc);
void __RPC_STUB ITargetFrame_SetFrameSrc_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFrame_GetFrameSrc_Proxy(
    ITargetFrame* This,
    LPWSTR *ppszFrameSrc);
void __RPC_STUB ITargetFrame_GetFrameSrc_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITargetFrame_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITargetFramePriv interface
 */
#ifndef __ITargetFramePriv_INTERFACE_DEFINED__
#define __ITargetFramePriv_INTERFACE_DEFINED__

typedef ITargetFramePriv *LPTARGETFRAMEPRIV;
DEFINE_GUID(IID_ITargetFramePriv, 0x9216e421, 0x2bf5, 0x11d0, 0x82,0xb4, 0x00,0xa0,0xc9,0x0c,0x29,0xc5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9216e421-2bf5-11d0-82b4-00a0c90c29c5")
ITargetFramePriv : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE FindFrameDownwards(
        LPCWSTR pszTargetName,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindFrameInContext(
        LPCWSTR pszTargetName,
        IUnknown *punkContextFrame,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnChildFrameActivate(
        IUnknown *pUnkChildFrame) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnChildFrameDeactivate(
        IUnknown *pUnkChildFrame) = 0;

    virtual HRESULT STDMETHODCALLTYPE NavigateHack(
        DWORD grfHLNF,
        LPBC pbc,
        IBindStatusCallback *pibsc,
        LPCWSTR pszTargetName,
        LPCWSTR pszUrl,
        LPCWSTR pszLocation) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindBrowserByIndex(
        DWORD dwID,
        IUnknown **ppunkBrowser) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITargetFramePriv, 0x9216e421, 0x2bf5, 0x11d0, 0x82,0xb4, 0x00,0xa0,0xc9,0x0c,0x29,0xc5)
#endif
#else
typedef struct ITargetFramePrivVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITargetFramePriv *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITargetFramePriv *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITargetFramePriv *This);

    /*** ITargetFramePriv methods ***/
    HRESULT (STDMETHODCALLTYPE *FindFrameDownwards)(
        ITargetFramePriv *This,
        LPCWSTR pszTargetName,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame);

    HRESULT (STDMETHODCALLTYPE *FindFrameInContext)(
        ITargetFramePriv *This,
        LPCWSTR pszTargetName,
        IUnknown *punkContextFrame,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame);

    HRESULT (STDMETHODCALLTYPE *OnChildFrameActivate)(
        ITargetFramePriv *This,
        IUnknown *pUnkChildFrame);

    HRESULT (STDMETHODCALLTYPE *OnChildFrameDeactivate)(
        ITargetFramePriv *This,
        IUnknown *pUnkChildFrame);

    HRESULT (STDMETHODCALLTYPE *NavigateHack)(
        ITargetFramePriv *This,
        DWORD grfHLNF,
        LPBC pbc,
        IBindStatusCallback *pibsc,
        LPCWSTR pszTargetName,
        LPCWSTR pszUrl,
        LPCWSTR pszLocation);

    HRESULT (STDMETHODCALLTYPE *FindBrowserByIndex)(
        ITargetFramePriv *This,
        DWORD dwID,
        IUnknown **ppunkBrowser);

    END_INTERFACE
} ITargetFramePrivVtbl;

interface ITargetFramePriv {
    CONST_VTBL ITargetFramePrivVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITargetFramePriv_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITargetFramePriv_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITargetFramePriv_Release(This) (This)->lpVtbl->Release(This)
/*** ITargetFramePriv methods ***/
#define ITargetFramePriv_FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame) (This)->lpVtbl->FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame)
#define ITargetFramePriv_FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame) (This)->lpVtbl->FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame)
#define ITargetFramePriv_OnChildFrameActivate(This,pUnkChildFrame) (This)->lpVtbl->OnChildFrameActivate(This,pUnkChildFrame)
#define ITargetFramePriv_OnChildFrameDeactivate(This,pUnkChildFrame) (This)->lpVtbl->OnChildFrameDeactivate(This,pUnkChildFrame)
#define ITargetFramePriv_NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation) (This)->lpVtbl->NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation)
#define ITargetFramePriv_FindBrowserByIndex(This,dwID,ppunkBrowser) (This)->lpVtbl->FindBrowserByIndex(This,dwID,ppunkBrowser)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITargetFramePriv_QueryInterface(ITargetFramePriv* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITargetFramePriv_AddRef(ITargetFramePriv* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITargetFramePriv_Release(ITargetFramePriv* This) {
    return This->lpVtbl->Release(This);
}
/*** ITargetFramePriv methods ***/
static FORCEINLINE HRESULT ITargetFramePriv_FindFrameDownwards(ITargetFramePriv* This,LPCWSTR pszTargetName,DWORD dwFlags,IUnknown **ppunkTargetFrame) {
    return This->lpVtbl->FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv_FindFrameInContext(ITargetFramePriv* This,LPCWSTR pszTargetName,IUnknown *punkContextFrame,DWORD dwFlags,IUnknown **ppunkTargetFrame) {
    return This->lpVtbl->FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv_OnChildFrameActivate(ITargetFramePriv* This,IUnknown *pUnkChildFrame) {
    return This->lpVtbl->OnChildFrameActivate(This,pUnkChildFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv_OnChildFrameDeactivate(ITargetFramePriv* This,IUnknown *pUnkChildFrame) {
    return This->lpVtbl->OnChildFrameDeactivate(This,pUnkChildFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv_NavigateHack(ITargetFramePriv* This,DWORD grfHLNF,LPBC pbc,IBindStatusCallback *pibsc,LPCWSTR pszTargetName,LPCWSTR pszUrl,LPCWSTR pszLocation) {
    return This->lpVtbl->NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation);
}
static FORCEINLINE HRESULT ITargetFramePriv_FindBrowserByIndex(ITargetFramePriv* This,DWORD dwID,IUnknown **ppunkBrowser) {
    return This->lpVtbl->FindBrowserByIndex(This,dwID,ppunkBrowser);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ITargetFramePriv_FindFrameDownwards_Proxy(
    ITargetFramePriv* This,
    LPCWSTR pszTargetName,
    DWORD dwFlags,
    IUnknown **ppunkTargetFrame);
void __RPC_STUB ITargetFramePriv_FindFrameDownwards_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFramePriv_FindFrameInContext_Proxy(
    ITargetFramePriv* This,
    LPCWSTR pszTargetName,
    IUnknown *punkContextFrame,
    DWORD dwFlags,
    IUnknown **ppunkTargetFrame);
void __RPC_STUB ITargetFramePriv_FindFrameInContext_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFramePriv_OnChildFrameActivate_Proxy(
    ITargetFramePriv* This,
    IUnknown *pUnkChildFrame);
void __RPC_STUB ITargetFramePriv_OnChildFrameActivate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFramePriv_OnChildFrameDeactivate_Proxy(
    ITargetFramePriv* This,
    IUnknown *pUnkChildFrame);
void __RPC_STUB ITargetFramePriv_OnChildFrameDeactivate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFramePriv_NavigateHack_Proxy(
    ITargetFramePriv* This,
    DWORD grfHLNF,
    LPBC pbc,
    IBindStatusCallback *pibsc,
    LPCWSTR pszTargetName,
    LPCWSTR pszUrl,
    LPCWSTR pszLocation);
void __RPC_STUB ITargetFramePriv_NavigateHack_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITargetFramePriv_FindBrowserByIndex_Proxy(
    ITargetFramePriv* This,
    DWORD dwID,
    IUnknown **ppunkBrowser);
void __RPC_STUB ITargetFramePriv_FindBrowserByIndex_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITargetFramePriv_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITargetFramePriv2 interface
 */
#ifndef __ITargetFramePriv2_INTERFACE_DEFINED__
#define __ITargetFramePriv2_INTERFACE_DEFINED__

typedef ITargetFramePriv2 *LPTARGETFRAMEPRIV2;
DEFINE_GUID(IID_ITargetFramePriv2, 0xb2c867e6, 0x69d6, 0x46f2, 0xa6,0x11, 0xde,0xd9,0xa4,0xbd,0x7f,0xef);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b2c867e6-69d6-46f2-a611-ded9a4bd7fef")
ITargetFramePriv2 : public ITargetFramePriv
{
    virtual HRESULT STDMETHODCALLTYPE AggregatedNavigation2(
        DWORD grfHLNF,
        LPBC pbc,
        IBindStatusCallback *pibsc,
        LPCWSTR pszTargetName,
        IUri *pUri,
        LPCWSTR pszLocation) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITargetFramePriv2, 0xb2c867e6, 0x69d6, 0x46f2, 0xa6,0x11, 0xde,0xd9,0xa4,0xbd,0x7f,0xef)
#endif
#else
typedef struct ITargetFramePriv2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITargetFramePriv2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITargetFramePriv2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITargetFramePriv2 *This);

    /*** ITargetFramePriv methods ***/
    HRESULT (STDMETHODCALLTYPE *FindFrameDownwards)(
        ITargetFramePriv2 *This,
        LPCWSTR pszTargetName,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame);

    HRESULT (STDMETHODCALLTYPE *FindFrameInContext)(
        ITargetFramePriv2 *This,
        LPCWSTR pszTargetName,
        IUnknown *punkContextFrame,
        DWORD dwFlags,
        IUnknown **ppunkTargetFrame);

    HRESULT (STDMETHODCALLTYPE *OnChildFrameActivate)(
        ITargetFramePriv2 *This,
        IUnknown *pUnkChildFrame);

    HRESULT (STDMETHODCALLTYPE *OnChildFrameDeactivate)(
        ITargetFramePriv2 *This,
        IUnknown *pUnkChildFrame);

    HRESULT (STDMETHODCALLTYPE *NavigateHack)(
        ITargetFramePriv2 *This,
        DWORD grfHLNF,
        LPBC pbc,
        IBindStatusCallback *pibsc,
        LPCWSTR pszTargetName,
        LPCWSTR pszUrl,
        LPCWSTR pszLocation);

    HRESULT (STDMETHODCALLTYPE *FindBrowserByIndex)(
        ITargetFramePriv2 *This,
        DWORD dwID,
        IUnknown **ppunkBrowser);

    /*** ITargetFramePriv2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AggregatedNavigation2)(
        ITargetFramePriv2 *This,
        DWORD grfHLNF,
        LPBC pbc,
        IBindStatusCallback *pibsc,
        LPCWSTR pszTargetName,
        IUri *pUri,
        LPCWSTR pszLocation);

    END_INTERFACE
} ITargetFramePriv2Vtbl;

interface ITargetFramePriv2 {
    CONST_VTBL ITargetFramePriv2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITargetFramePriv2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITargetFramePriv2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITargetFramePriv2_Release(This) (This)->lpVtbl->Release(This)
/*** ITargetFramePriv methods ***/
#define ITargetFramePriv2_FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame) (This)->lpVtbl->FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame)
#define ITargetFramePriv2_FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame) (This)->lpVtbl->FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame)
#define ITargetFramePriv2_OnChildFrameActivate(This,pUnkChildFrame) (This)->lpVtbl->OnChildFrameActivate(This,pUnkChildFrame)
#define ITargetFramePriv2_OnChildFrameDeactivate(This,pUnkChildFrame) (This)->lpVtbl->OnChildFrameDeactivate(This,pUnkChildFrame)
#define ITargetFramePriv2_NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation) (This)->lpVtbl->NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation)
#define ITargetFramePriv2_FindBrowserByIndex(This,dwID,ppunkBrowser) (This)->lpVtbl->FindBrowserByIndex(This,dwID,ppunkBrowser)
/*** ITargetFramePriv2 methods ***/
#define ITargetFramePriv2_AggregatedNavigation2(This,grfHLNF,pbc,pibsc,pszTargetName,pUri,pszLocation) (This)->lpVtbl->AggregatedNavigation2(This,grfHLNF,pbc,pibsc,pszTargetName,pUri,pszLocation)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITargetFramePriv2_QueryInterface(ITargetFramePriv2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITargetFramePriv2_AddRef(ITargetFramePriv2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITargetFramePriv2_Release(ITargetFramePriv2* This) {
    return This->lpVtbl->Release(This);
}
/*** ITargetFramePriv methods ***/
static FORCEINLINE HRESULT ITargetFramePriv2_FindFrameDownwards(ITargetFramePriv2* This,LPCWSTR pszTargetName,DWORD dwFlags,IUnknown **ppunkTargetFrame) {
    return This->lpVtbl->FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv2_FindFrameInContext(ITargetFramePriv2* This,LPCWSTR pszTargetName,IUnknown *punkContextFrame,DWORD dwFlags,IUnknown **ppunkTargetFrame) {
    return This->lpVtbl->FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv2_OnChildFrameActivate(ITargetFramePriv2* This,IUnknown *pUnkChildFrame) {
    return This->lpVtbl->OnChildFrameActivate(This,pUnkChildFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv2_OnChildFrameDeactivate(ITargetFramePriv2* This,IUnknown *pUnkChildFrame) {
    return This->lpVtbl->OnChildFrameDeactivate(This,pUnkChildFrame);
}
static FORCEINLINE HRESULT ITargetFramePriv2_NavigateHack(ITargetFramePriv2* This,DWORD grfHLNF,LPBC pbc,IBindStatusCallback *pibsc,LPCWSTR pszTargetName,LPCWSTR pszUrl,LPCWSTR pszLocation) {
    return This->lpVtbl->NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation);
}
static FORCEINLINE HRESULT ITargetFramePriv2_FindBrowserByIndex(ITargetFramePriv2* This,DWORD dwID,IUnknown **ppunkBrowser) {
    return This->lpVtbl->FindBrowserByIndex(This,dwID,ppunkBrowser);
}
/*** ITargetFramePriv2 methods ***/
static FORCEINLINE HRESULT ITargetFramePriv2_AggregatedNavigation2(ITargetFramePriv2* This,DWORD grfHLNF,LPBC pbc,IBindStatusCallback *pibsc,LPCWSTR pszTargetName,IUri *pUri,LPCWSTR pszLocation) {
    return This->lpVtbl->AggregatedNavigation2(This,grfHLNF,pbc,pibsc,pszTargetName,pUri,pszLocation);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ITargetFramePriv2_AggregatedNavigation2_Proxy(
    ITargetFramePriv2* This,
    DWORD grfHLNF,
    LPBC pbc,
    IBindStatusCallback *pibsc,
    LPCWSTR pszTargetName,
    IUri *pUri,
    LPCWSTR pszLocation);
void __RPC_STUB ITargetFramePriv2_AggregatedNavigation2_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITargetFramePriv2_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __htiface_h__ */
