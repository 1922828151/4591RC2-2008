/*
 * func-name: sub_10004AC0
 * func-address: 0x10004ac0
 * callers: 0x100042f0, 0x10004ef0
 * callees: 0x10004a20, 0x10019750, 0x10019760, 0x10019940
 */

int __cdecl sub_10004AC0(char *Buffer, int a2, int a3)
{
  DWORD *v3; // esi
  HANDLE CurrentProcess; // edi
  int v6; // ecx
  unsigned int v7; // kr0C_4
  int v8; // [esp-10h] [ebp-F8h] BYREF
  _tagSTACKFRAME StackFrame; // [esp+0h] [ebp-E8h] BYREF
  _IMAGEHLP_LINE Line; // [esp+A4h] [ebp-44h] BYREF
  DWORD *v11; // [esp+BCh] [ebp-2Ch]
  HANDLE hThread; // [esp+C0h] [ebp-28h]
  char *v13; // [esp+C4h] [ebp-24h]
  DWORD pdwDisplacement; // [esp+C8h] [ebp-20h] BYREF
  HANDLE hProcess; // [esp+CCh] [ebp-1Ch]
  int *v16; // [esp+D0h] [ebp-18h]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+D8h] [ebp-10h]
  int (__cdecl *v18)(int, int, int, int); // [esp+DCh] [ebp-Ch]
  _EH4_SCOPETABLE *v19; // [esp+E0h] [ebp-8h]
  int v20; // [esp+E4h] [ebp-4h]
  _IMAGEHLP_MODULE ModuleInfo; // [esp+E8h] [ebp+0h] BYREF
  char v22[1024]; // [esp+324h] [ebp+23Ch] BYREF
  char v23[1024]; // [esp+724h] [ebp+63Ch] BYREF
  char v24[1024]; // [esp+B24h] [ebp+A3Ch] BYREF
  _IMAGEHLP_SYMBOL Symbol; // [esp+F24h] [ebp+E3Ch] BYREF

  v20 = -2;
  v19 = stru_10034DA0;
  v18 = _except_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v19 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_10034DA0);
  v16 = &v8;
  v13 = Buffer;
  v20 = 0;
  v11 = *(DWORD **)(a3 + 4);
  v3 = v11;
  CurrentProcess = GetCurrentProcess();
  hProcess = CurrentProcess;
  hThread = GetCurrentThread();
  sprintf(Buffer, "\n\nCall stack:\n");
  memset(&StackFrame, 0, sizeof(StackFrame));
  StackFrame.AddrPC.Offset = v3[46];
  StackFrame.AddrPC.Mode = AddrModeFlat;
  StackFrame.AddrStack.Offset = v3[49];
  StackFrame.AddrStack.Mode = AddrModeFlat;
  StackFrame.AddrFrame.Offset = v3[45];
  StackFrame.AddrFrame.Mode = AddrModeFlat;
  if ( sub_10004A20(CurrentProcess) )
  {
    *Buffer = 0;
    while ( StackWalk(0x14Cu, CurrentProcess, hThread, &StackFrame, v3, 0, SymFunctionTableAccess, SymGetModuleBase, 0) )
    {
      if ( !StackFrame.AddrFrame.Offset )
        return 1;
      v6 = dword_10038508--;
      if ( v6 <= 0 )
      {
        pdwDisplacement = 0;
        Symbol.SizeOfStruct = 536;
        Symbol.MaxNameLength = 512;
        if ( SymGetSymFromAddr(CurrentProcess, StackFrame.AddrPC.Offset, &pdwDisplacement, &Symbol) )
        {
          sprintf(v22, "%s() ", Symbol.Name);
          if ( a2 <= (int)(strlen(Buffer) + strlen(v22)) )
            return 1;
          strcat(Buffer, v22);
          CurrentProcess = hProcess;
        }
        else
        {
          GetLastError();
        }
        if ( SymGetLineFromAddr(CurrentProcess, StackFrame.AddrPC.Offset, &pdwDisplacement, &Line) )
          sprintf(
            v24,
            "0x%-8x + %d bytes [File=%sline=%d] ",
            StackFrame.AddrPC.Offset,
            pdwDisplacement,
            Line.FileName,
            Line.LineNumber);
        else
          sprintf(v24, "Address = 0x%-8x (filenamenot found) ", StackFrame.AddrPC.Offset);
        if ( a2 <= (int)(strlen(Buffer) + strlen(v24)) || !strlen(v24) )
          return 1;
        strcat(Buffer, v24);
        if ( SymGetModuleInfo(hProcess, StackFrame.AddrPC.Offset, &ModuleInfo) )
          sprintf(v23, "[in %s]", ModuleInfo.ImageName);
        else
          GetLastError();
        v7 = strlen(v23);
        if ( a2 > (int)(v7 + strlen(Buffer)) && v7 && v23[0] != -52 )
          strcat(Buffer, v23);
        *(_WORD *)&Buffer[strlen(Buffer)] = 10;
        v3 = v11;
        CurrentProcess = hProcess;
      }
    }
    GetLastError();
    return 1;
  }
  else
  {
    strcpy(Buffer, "PSAPI.DLL is not installed on this machine. Cannot create stack trace");
    v20 = -2;
    return 0;
  }
}
