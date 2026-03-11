/*
 * func-name: ?svc@ShellRunTask@Utility@Outpop@@UAEHXZ
 * func-address: 0x10018720
 * callers: none
 * callees: 0x100023b0, 0x100023e0, 0x10002410, 0x10005380, 0x10005480, 0x1000cd90, 0x10016850
 */

int __thiscall Outpop::Utility::ShellRunTask::svc(HANDLE *this)
{
  DWORD v2; // eax
  struct _RTL_CRITICAL_SECTION *v3; // ebp
  struct Outpop::Utility::Logger *v4; // eax
  wchar_t *v5; // esi
  char *v6; // edi
  wchar_t **v7; // eax
  int v8; // ebx
  char *v9; // edi
  wchar_t **v10; // eax
  _DWORD *v11; // eax
  int v12; // edi
  DWORD LastError; // eax
  Outpop::Utility::Logger *v14; // eax
  struct _RTL_CRITICAL_SECTION *v15; // ebx
  struct Outpop::Utility::Logger *v16; // edi
  wchar_t *v17; // esi
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // eax
  int v21; // eax
  Outpop::Utility::Logger *v22; // eax
  struct _RTL_CRITICAL_SECTION *v23; // ebx
  struct Outpop::Utility::Logger *v24; // edi
  wchar_t *v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *dt; // eax
  int v29; // eax
  struct Outpop::Utility::Logger *v30; // edi
  Outpop::Utility::Logger *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // eax
  int v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *v37; // [esp-4h] [ebp-38h]
  wchar_t *tm; // [esp-4h] [ebp-38h]
  wchar_t *v39; // [esp-4h] [ebp-38h]
  HANDLE Handles[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v41; // [esp+30h] [ebp-4h]

  Handles[0] = this[20];
  Handles[1] = *(HANDLE *)this[21];
  v2 = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
  if ( v2 == -1 )
  {
    if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
       || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
      && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v3 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
      EnterCriticalSection(v3);
      v41 = 0;
      v4 = Outpop::Utility::Logger::instance();
      v5 = *(wchar_t **)sub_10005380((int)v4);
      v6 = (char *)Outpop::Utility::Logger::instance() + 48;
      v7 = (wchar_t **)sub_10005480((int)v6);
      wstrtime_s(*v7, 0x80u);
      v8 = *(_DWORD *)sub_10005480((int)v6);
      v9 = (char *)Outpop::Utility::Logger::instance() + 92;
      v10 = (wchar_t **)sub_10005480((int)v9);
      wstrdate_s(*v10, 0x80u);
      v11 = sub_10005480((int)v9);
      v12 = sub_1000CD90(0xFFFFu, v5, L"\nLOGINFO %s:%s Message:", *v11, v8);
      LastError = GetLastError();
      sub_1000CD90(0xFFFF - v12, &v5[v12], L"ShellRunTask wait handle error %d", LastError);
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v5);
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
      {
        v14 = Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14, v5);
      }
      v41 = -1;
      LeaveCriticalSection(v3);
    }
  }
  else if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) != 1
        && *((_BYTE *)Outpop::Utility::Logger::instance() + 137) != 1
        || *((_BYTE *)Outpop::Utility::Logger::instance() + 141) != 1 )
      {
        return 1;
      }
      v23 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
      EnterCriticalSection(v23);
      v41 = 2;
      v24 = Outpop::Utility::Logger::instance();
      v25 = *(wchar_t **)sub_10005380((int)v24);
      v26 = Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v26);
      v27 = Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v27);
      v29 = sub_1000CD90(0xFFFFu, v25, L"\nLOGINFO %s:%s Message:", dt, tm);
      sub_1000CD90(0xFFFF - v29, &v25[v29], L"ShellRunTask recevie self stop command");
    }
    else
    {
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) != 1
        && *((_BYTE *)Outpop::Utility::Logger::instance() + 137) != 1
        || *((_BYTE *)Outpop::Utility::Logger::instance() + 141) != 1 )
      {
        return 1;
      }
      v23 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
      EnterCriticalSection(v23);
      v41 = 3;
      v30 = Outpop::Utility::Logger::instance();
      v25 = *(wchar_t **)sub_10005380((int)v30);
      v31 = Outpop::Utility::Logger::instance();
      v39 = Outpop::Utility::Logger::make_tm(v31);
      v32 = Outpop::Utility::Logger::instance();
      v33 = Outpop::Utility::Logger::make_dt(v32);
      v34 = sub_1000CD90(0xFFFFu, v25, L"\nLOGINFO %s:%s Message:", v33, v39);
      sub_1000CD90(0xFFFF - v34, &v25[v34], L"ShellRunTask unknown event id");
    }
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v25);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
    {
      v35 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v35, v25);
    }
    v41 = -1;
    LeaveCriticalSection(v23);
  }
  else
  {
    if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
       || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
      && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v15 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
      EnterCriticalSection(v15);
      v41 = 1;
      v16 = Outpop::Utility::Logger::instance();
      v17 = *(wchar_t **)sub_10005380((int)v16);
      v18 = Outpop::Utility::Logger::instance();
      v37 = Outpop::Utility::Logger::make_tm(v18);
      v19 = Outpop::Utility::Logger::instance();
      v20 = Outpop::Utility::Logger::make_dt(v19);
      v21 = sub_1000CD90(0xFFFFu, v17, L"\nLOGINFO %s:%s Message:", v20, v37);
      sub_1000CD90(0xFFFF - v21, &v17[v21], L"ShellRunTask recevie shell control stop command");
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v17);
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
      {
        v22 = Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v22, v17);
      }
      v41 = -1;
      LeaveCriticalSection(v15);
    }
    (*(void (__thiscall **)(HANDLE))(*(_DWORD *)this[19] + 56))(this[19]);
  }
  return 1;
}
