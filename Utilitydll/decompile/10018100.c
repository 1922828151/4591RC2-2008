/*
 * func-name: ?Run@CServiceBase@Utility@Outpop@@SA_NXZ
 * func-address: 0x10018100
 * callers: none
 * callees: 0x10018e16, 0x10018e1c
 */

bool __cdecl Outpop::Utility::CServiceBase::Run()
{
  int v0; // eax
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // ebp
  _DWORD *v4; // ebx
  void (__cdecl *v5)(); // ebx
  int v6; // eax
  bool started; // bl
  SERVICE_TABLE_ENTRYA *lpServiceStartTable; // [esp+14h] [ebp-4h]

  lpServiceStartTable = (SERVICE_TABLE_ENTRYA *)operator new[](
                                                  8
                                                * (*(_DWORD *)(Outpop::Utility::CServiceBase::pServiceEntryList + 8) + 1));
  v0 = Outpop::Utility::CServiceBase::pServiceEntryList;
  v1 = **(_DWORD ***)(Outpop::Utility::CServiceBase::pServiceEntryList + 4);
  v2 = Outpop::Utility::CServiceBase::pServiceEntryList;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD **)(v0 + 4);
    if ( !v2 || v2 != v0 )
      invalid_parameter_noinfo();
    if ( v1 == v4 )
      break;
    v5 = invalid_parameter_noinfo;
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v1 == *(_DWORD **)(v2 + 4) )
      invalid_parameter_noinfo();
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)v1[2] + 40))(*(_DWORD *)v1[2]) == 1 )
    {
      if ( v1 == *(_DWORD **)(v2 + 4) )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(v1[2] + 28) < 0x10u )
        v6 = v1[2] + 8;
      else
        v6 = *(_DWORD *)(v1[2] + 8);
      lpServiceStartTable[v3].lpServiceName = (LPSTR)v6;
      if ( v1 == *(_DWORD **)(v2 + 4) )
        invalid_parameter_noinfo();
      lpServiceStartTable[v3].lpServiceProc = *(LPSERVICE_MAIN_FUNCTIONA *)(v1[2] + 32);
      v5 = invalid_parameter_noinfo;
      ++v3;
    }
    if ( v1 == *(_DWORD **)(v2 + 4) )
      v5();
    v1 = (_DWORD *)*v1;
    v0 = Outpop::Utility::CServiceBase::pServiceEntryList;
  }
  lpServiceStartTable[v3].lpServiceName = 0;
  lpServiceStartTable[v3].lpServiceProc = 0;
  started = StartServiceCtrlDispatcherA(lpServiceStartTable);
  operator delete[](lpServiceStartTable);
  return started;
}
