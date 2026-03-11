/*
 * func-name: StartAddress
 * func-address: 0x10001360
 * callers: 0x100016b0
 * callees: 0x10001120, 0x100018c0, 0x10019750, 0x10019760
 */

DWORD __stdcall StartAddress(HANDLE *lpThreadParameter)
{
  int v1; // eax
  HANDLE v2; // edx
  HANDLE (__stdcall *v3)(); // esi
  HANDLE v4; // eax
  HANDLE CurrentProcess; // eax
  HANDLE v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  HANDLE v19; // eax
  void *v21; // [esp+4h] [ebp-774h]
  HANDLE v22; // [esp+4h] [ebp-774h]
  PVOID (__stdcall *v23)(HANDLE, DWORD); // [esp+14h] [ebp-764h]
  DWORD Offset; // [esp+14h] [ebp-764h]
  PVOID (__stdcall *v25)(HANDLE, DWORD); // [esp+14h] [ebp-764h]
  DWORD (__stdcall *v26)(HANDLE, DWORD); // [esp+18h] [ebp-760h]
  DWORD v27; // [esp+18h] [ebp-760h]
  DWORD (__stdcall *v28)(HANDLE, DWORD); // [esp+18h] [ebp-760h]
  int v29; // [esp+34h] [ebp-744h] BYREF
  int v30; // [esp+38h] [ebp-740h] BYREF
  int v31; // [esp+3Ch] [ebp-73Ch]
  DWORD pdwDisplacement; // [esp+40h] [ebp-738h] BYREF
  _BYTE v33[8]; // [esp+44h] [ebp-734h] BYREF
  _BYTE v34[8]; // [esp+4Ch] [ebp-72Ch] BYREF
  struct _tagSTACKFRAME lpAddress; // [esp+54h] [ebp-724h] BYREF
  _DWORD v36[34]; // [esp+F8h] [ebp-680h] BYREF
  CONTEXT Context; // [esp+180h] [ebp-5F8h] BYREF
  CHAR Filename[260]; // [esp+44Ch] [ebp-32Ch] BYREF
  struct _IMAGEHLP_SYMBOL Symbol; // [esp+550h] [ebp-228h] BYREF
  int v40; // [esp+774h] [ebp-4h]

  SuspendThread(lpThreadParameter[15]);
  v1 = std::string::c_str(lpThreadParameter);
  std::ofstream::ofstream(v36, v1, 10, 64, 1);
  v2 = lpThreadParameter[15];
  v40 = 0;
  Context.ContextFlags = 65537;
  GetThreadContext(v2, &Context);
  memset(&lpAddress, 0, sizeof(lpAddress));
  v3 = GetCurrentProcess;
  lpAddress.AddrStack.Offset = Context.Esp;
  v26 = SymGetModuleBase_0;
  lpAddress.AddrPC.Mode = AddrModeFlat;
  lpAddress.AddrStack.Mode = AddrModeFlat;
  lpAddress.AddrFrame.Mode = AddrModeFlat;
  v23 = SymFunctionTableAccess_0;
  v4 = lpThreadParameter[15];
  lpAddress.AddrPC.Offset = Context.Eip;
  lpAddress.AddrFrame.Offset = Context.Ebp;
  v21 = v4;
  v31 = 0;
  CurrentProcess = GetCurrentProcess();
  if ( StackWalk_0(0x14Cu, CurrentProcess, v21, &lpAddress, &Context, 0, v23, v26, 0) )
  {
    do
    {
      if ( !lpAddress.AddrFrame.Offset )
        break;
      if ( ++v31 > 2 )
      {
        Offset = lpAddress.AddrPC.Offset;
        Symbol.SizeOfStruct = 536;
        Symbol.MaxNameLength = 512;
        v6 = v3();
        if ( SymGetSymFromAddr_0(v6, Offset, &pdwDisplacement, &Symbol) )
        {
          v27 = pdwDisplacement;
          v7 = sub_100018C0((int)v36, (int)Symbol.Name);
          v8 = sub_100018C0(v7, (int)" + ");
          v9 = std::ostream::operator<<(v8, sub_10001720);
          v10 = std::ostream::operator<<(v9, v27);
          sub_100018C0(v10, (int)"\r\n");
        }
        else
        {
          v29 = 0;
          v30 = 0;
          sub_10001120((char *)lpAddress.AddrPC.Offset, Filename, 0x104u, &v29, &v30);
          v11 = std::setw(v34, 4);
          (*(void (__cdecl **)(char *, _DWORD))v11)((char *)v36 + *(_DWORD *)(v36[0] + 4), *(_DWORD *)(v11 + 4));
          v12 = std::setw(v33, 8);
          v13 = std::ostream::operator<<(v36, v29);
          v14 = sub_100018C0(v13, (int)":");
          v15 = v14;
          if ( v14 )
            v14 += *(_DWORD *)(*(_DWORD *)v14 + 4);
          (*(void (__cdecl **)(int, _DWORD))v12)(v14, *(_DWORD *)(v12 + 4));
          v16 = std::ostream::operator<<(v15, v30);
          v17 = sub_100018C0(v16, (int)&unk_1001B329);
          v18 = sub_100018C0(v17, (int)Filename);
          sub_100018C0(v18, (int)"\r\n");
          v3 = GetCurrentProcess;
        }
      }
      v28 = SymGetModuleBase_0;
      v25 = SymFunctionTableAccess_0;
      v22 = lpThreadParameter[15];
      v19 = v3();
    }
    while ( StackWalk_0(0x14Cu, v19, v22, &lpAddress, &Context, 0, v25, v28, 0) );
  }
  sub_100018C0((int)v36, (int)"\r\n");
  std::ofstream::close(v36);
  ResumeThread(lpThreadParameter[15]);
  SetEvent(lpThreadParameter[14]);
  v40 = -1;
  std::ofstream::`vbase destructor'(v36);
  return 0;
}
