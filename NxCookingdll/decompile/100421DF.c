/*
 * func-name: sub_100421DF
 * func-address: 0x100421df
 * callers: 0x1003945b
 * callees: 0x10037296, 0x10039208, 0x1003923f, 0x10039a05, 0x10039a73, 0x10039a7c
 */

int __cdecl sub_100421DF(int a1, int a2, int a3)
{
  HMODULE LibraryA; // eax
  HMODULE v4; // edi
  int (__stdcall *MessageBoxA)(HWND, LPCSTR, LPCSTR, UINT); // eax
  HWND (__stdcall *GetActiveWindow)(); // eax
  HWND (__stdcall *GetLastActivePopup)(HWND); // eax
  BOOL (__stdcall *GetUserObjectInformationA)(HANDLE, int, PVOID, DWORD, LPDWORD); // eax
  HWINSTA (__stdcall *GetProcessWindowStation)(); // eax
  int (*v10)(void); // esi
  int (__stdcall *v11)(int, int, _BYTE *, int, _BYTE *); // eax
  int (__stdcall *v12)(int, int, _BYTE *, int, _BYTE *); // edi
  int v13; // eax
  int (*v14)(void); // eax
  int (__stdcall *v15)(int); // eax
  int (__stdcall *v16)(int, int, int, int); // eax
  _BYTE v18[12]; // [esp+10h] [ebp-20h] BYREF
  _BYTE v19[4]; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v20; // [esp+20h] [ebp-10h] BYREF
  int v21; // [esp+24h] [ebp-Ch] BYREF
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  v22 = _encoded_null();
  v23 = 0;
  v21 = 0;
  v20 = 0;
  if ( !dword_1005BE40 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v4 = LibraryA;
    if ( !LibraryA )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( !MessageBoxA )
      return 0;
    dword_1005BE40 = _encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v4, "GetActiveWindow");
    dword_1005BE44 = _encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v4, "GetLastActivePopup");
    dword_1005BE48 = _encode_pointer(GetLastActivePopup);
    if ( sub_10039208(&v21) )
      _invoke_watson(0, 0, 0, 0, 0);
    if ( v21 == 2 )
    {
      GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                            v4,
                                                                                            "GetUserObjectInformationA");
      dword_1005BE50 = _encode_pointer(GetUserObjectInformationA);
      if ( dword_1005BE50 )
      {
        GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v4, "GetProcessWindowStation");
        dword_1005BE4C = _encode_pointer(GetProcessWindowStation);
      }
    }
  }
  if ( dword_1005BE4C == v22
    || dword_1005BE50 == v22
    || (v10 = (int (*)(void))_decode_pointer(dword_1005BE4C),
        v11 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))_decode_pointer(dword_1005BE50),
        v12 = v11,
        !v10)
    || !v11
    || (v13 = v10()) != 0 && v12(v13, 1, v18, 12, v19) && (v18[8] & 1) != 0 )
  {
    if ( dword_1005BE44 != v22 )
    {
      v14 = (int (*)(void))_decode_pointer(dword_1005BE44);
      if ( v14 )
      {
        v23 = v14();
        if ( v23 )
        {
          if ( dword_1005BE48 != v22 )
          {
            v15 = (int (__stdcall *)(int))_decode_pointer(dword_1005BE48);
            if ( v15 )
              v23 = v15(v23);
          }
        }
      }
    }
  }
  else
  {
    if ( sub_1003923F(&v20) )
      _invoke_watson(0, 0, 0, 0, 0);
    if ( v20 < 4 )
      a3 |= 0x40000u;
    else
      a3 |= 0x200000u;
  }
  v16 = (int (__stdcall *)(int, int, int, int))_decode_pointer(dword_1005BE40);
  if ( v16 )
    return v16(v23, a1, a2, a3);
  return 0;
}
