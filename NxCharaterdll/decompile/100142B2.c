/*
 * func-name: sub_100142B2
 * func-address: 0x100142b2
 * callers: 0x1000c349, 0x10010ae4
 * callees: 0x1000c522, 0x1000c585, 0x1000c58e, 0x1000db38, 0x1000db6f, 0x1000fc12
 */

int __cdecl sub_100142B2(int a1, int a2, int a3)
{
  HMODULE LibraryA; // eax
  HMODULE v4; // edi
  int (__stdcall *MessageBoxA)(HWND, LPCSTR, LPCSTR, UINT); // eax
  HWND (__stdcall *GetActiveWindow)(); // eax
  HWND (__stdcall *GetLastActivePopup)(HWND); // eax
  BOOL (__stdcall *GetUserObjectInformationA)(HANDLE, int, PVOID, DWORD, LPDWORD); // eax
  HWINSTA (__stdcall *GetProcessWindowStation)(); // eax
  int v11; // esi
  int (*v12)(void); // eax
  int v13; // eax
  int (__stdcall *v14)(int, int, _BYTE *, int, _BYTE *); // eax
  int (*v15)(void); // eax
  int (__stdcall *v16)(LPCSTR); // eax
  int (__stdcall *v17)(int, int, int, int); // eax
  int v18; // [esp-10h] [ebp-40h]
  int v19; // [esp-Ch] [ebp-3Ch]
  LPCSTR lpProcName; // [esp+0h] [ebp-30h]
  _BYTE v21[12]; // [esp+10h] [ebp-20h] BYREF
  _BYTE v22[4]; // [esp+1Ch] [ebp-14h] BYREF
  int v23; // [esp+20h] [ebp-10h]
  unsigned int v24; // [esp+24h] [ebp-Ch] BYREF
  int v25; // [esp+28h] [ebp-8h] BYREF
  int v26; // [esp+2Ch] [ebp-4h]

  v23 = _encoded_null();
  v26 = 0;
  v25 = 0;
  v24 = 0;
  if ( !dword_100301C4 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v4 = LibraryA;
    if ( !LibraryA )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( !MessageBoxA )
      return 0;
    dword_100301C4 = _encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v4, "GetActiveWindow");
    dword_100301C8 = _encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v4, "GetLastActivePopup");
    dword_100301CC = _encode_pointer(GetLastActivePopup);
    if ( sub_1000DB38(&v25) )
      _invoke_watson(0, 0, 0, 0, 0);
    if ( v25 == 2 )
    {
      GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                            v4,
                                                                                            "GetUserObjectInformationA");
      dword_100301D4 = _encode_pointer(GetUserObjectInformationA);
      if ( dword_100301D4 )
      {
        GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v4, "GetProcessWindowStation");
        dword_100301D0 = _encode_pointer(GetProcessWindowStation);
      }
    }
  }
  v11 = v23;
  if ( dword_100301D0 == v23
    || dword_100301D4 == v23
    || (v12 = (int (*)(void))_decode_pointer(dword_100301D0), (v13 = v12()) != 0)
    && (v18 = v13,
        v14 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))_decode_pointer(dword_100301D4),
        v14(v18, 1, v21, 12, v22))
    && (v21[8] & 1) != 0 )
  {
    if ( dword_100301C8 != v11 )
    {
      v15 = (int (*)(void))_decode_pointer(dword_100301C8);
      v26 = v15();
      if ( v26 )
      {
        if ( dword_100301CC != v11 )
        {
          lpProcName = (LPCSTR)v26;
          v16 = (int (__stdcall *)(LPCSTR))_decode_pointer(dword_100301CC);
          v26 = v16(lpProcName);
        }
      }
    }
  }
  else
  {
    if ( sub_1000DB6F(&v24) )
      _invoke_watson(0, 0, 0, 0, 0);
    if ( v24 < 4 )
      a3 |= 0x40000u;
    else
      a3 |= 0x200000u;
  }
  v19 = v26;
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer(dword_100301C4);
  return v17(v19, a1, a2, a3);
}
