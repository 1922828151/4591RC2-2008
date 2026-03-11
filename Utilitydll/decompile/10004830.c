/*
 * func-name: ?svc@Timer_Queue@Utility@Outpop@@UAEHXZ
 * func-address: 0x10004830
 * callers: none
 * callees: 0x10001730, 0x10001760, 0x100018c0, 0x10001940, 0x10002410, 0x10004660, 0x10005380, 0x10005480, 0x10005b10, 0x10005b50, 0x100064b0, 0x1000cd90, 0x10016850, 0x10018e10
 */

int __thiscall Outpop::Utility::Timer_Queue::svc(Outpop::Utility::Timer_Queue *this)
{
  Outpop::Utility::Timer_Queue *v1; // edi
  struct _RTL_CRITICAL_SECTION *v2; // ebx
  wchar_t *v3; // esi
  wchar_t **v4; // eax
  int v5; // ebp
  wchar_t **v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  Outpop::Utility::Logger *v9; // eax
  int v10; // ebp
  char v11; // bl
  unsigned int v12; // eax
  int *v13; // ebp
  bool v14; // cf
  int v15; // eax
  int v16; // eax
  Outpop::Utility::Time_Value *v17; // eax
  int v18; // ecx
  int v19; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  DWORD v23; // eax
  int v24; // edi
  volatile LONG *v25; // ebp
  Outpop::Utility::Timer_Queue *v26; // ebx
  int *v27; // esi
  char *v28; // ebx
  bool v29; // cf
  int v30; // esi
  int v31; // eax
  int *v32; // esi
  bool v33; // cf
  _DWORD *v34; // eax
  void (__thiscall ***v35)(_DWORD, int); // esi
  int v36; // esi
  void (__thiscall ***v37)(_DWORD, int); // esi
  _DWORD *v38; // eax
  _DWORD *v39; // eax
  void (__thiscall ***v40)(_DWORD, int); // esi
  void (__thiscall ***v41)(_DWORD, int); // esi
  struct _RTL_CRITICAL_SECTION *v42; // ebp
  wchar_t *v43; // ebx
  int v44; // esi
  wchar_t **v45; // eax
  wchar_t **v46; // eax
  int v47; // edi
  DWORD CurrentProcessId; // eax
  int v49; // esi
  DWORD v50; // eax
  Outpop::Utility::Logger *v51; // eax
  struct _RTL_CRITICAL_SECTION *v53; // ebx
  wchar_t *v54; // esi
  wchar_t **v55; // eax
  int v56; // ebp
  wchar_t **v57; // eax
  _DWORD *v58; // eax
  int v59; // eax
  Outpop::Utility::Logger *v60; // eax
  DWORD CurrentThreadId; // [esp-10h] [ebp-94h]
  DWORD LastError; // [esp-Ch] [ebp-90h]
  int v63; // [esp+14h] [ebp-70h] BYREF
  Outpop::Utility::Timer_Queue *v64; // [esp+18h] [ebp-6Ch]
  int v65; // [esp+1Ch] [ebp-68h]
  int v66; // [esp+20h] [ebp-64h] BYREF
  int v67; // [esp+24h] [ebp-60h]
  _DWORD *v68; // [esp+28h] [ebp-5Ch]
  volatile LONG *v69; // [esp+2Ch] [ebp-58h] BYREF
  _DWORD *v70; // [esp+30h] [ebp-54h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [esp+34h] [ebp-50h]
  struct _RTL_CRITICAL_SECTION *v72; // [esp+38h] [ebp-4Ch]
  int v73; // [esp+3Ch] [ebp-48h] BYREF
  int v74; // [esp+40h] [ebp-44h]
  int v75; // [esp+44h] [ebp-40h] BYREF
  int v76; // [esp+48h] [ebp-3Ch]
  int v77; // [esp+4Ch] [ebp-38h] BYREF
  int v78; // [esp+50h] [ebp-34h]
  int v79[2]; // [esp+54h] [ebp-30h] BYREF
  char v80[8]; // [esp+5Ch] [ebp-28h] BYREF
  char v81[8]; // [esp+64h] [ebp-20h] BYREF
  char v82[12]; // [esp+6Ch] [ebp-18h] BYREF
  int v83; // [esp+80h] [ebp-4h]

  v1 = this;
  v64 = this;
  v73 = 0;
  v74 = 0;
  Outpop::Utility::Time_Value::normalize((Outpop::Utility::Time_Value *)&v73);
  if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
     || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
    && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
    lpCriticalSection = v2;
    EnterCriticalSection(v2);
    v83 = 0;
    Outpop::Utility::Logger::instance();
    v3 = *(wchar_t **)sub_10005380();
    Outpop::Utility::Logger::instance();
    v4 = (wchar_t **)sub_10005480();
    wstrtime_s(*v4, 0x80u);
    v5 = *(_DWORD *)sub_10005480();
    Outpop::Utility::Logger::instance();
    v6 = (wchar_t **)sub_10005480();
    wstrdate_s(*v6, 0x80u);
    v7 = (_DWORD *)sub_10005480();
    v8 = sub_1000CD90(v3, L"\nLOGINFO %s:%s Message:", *v7, v5);
    sub_1000CD90(&v3[v8], L"Timer Queue begin service...");
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v3);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
    {
      v9 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v9, v3);
    }
    v83 = -1;
    LeaveCriticalSection(v2);
    v1 = v64;
  }
  WaitForSingleObject(*((HANDLE *)v1 + 30), 0xFFFFFFFF);
  if ( !*((_BYTE *)v1 + 132) )
  {
LABEL_92:
    if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
       || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
      && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v53 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
      v72 = v53;
      EnterCriticalSection(v53);
      v83 = 9;
      Outpop::Utility::Logger::instance();
      v54 = *(wchar_t **)sub_10005380();
      Outpop::Utility::Logger::instance();
      v55 = (wchar_t **)sub_10005480();
      wstrtime_s(*v55, 0x80u);
      v56 = *(_DWORD *)sub_10005480();
      Outpop::Utility::Logger::instance();
      v57 = (wchar_t **)sub_10005480();
      wstrdate_s(*v57, 0x80u);
      v58 = (_DWORD *)sub_10005480();
      v59 = sub_1000CD90(v54, L"\nLOGINFO %s:%s Message:", *v58, v56);
      sub_1000CD90(&v54[v59], L"Timer Queue end service...");
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v54);
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
      {
        v60 = Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v60, v54);
      }
      v83 = -1;
      LeaveCriticalSection(v53);
    }
    return 1;
  }
  while ( 1 )
  {
    v10 = v73;
    v11 = 0;
    v72 = (struct _RTL_CRITICAL_SECTION *)((char *)v1 + 76);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 76));
    v83 = 1;
    v12 = *((_DWORD *)v1 + 26);
    if ( v12 && (int)(*((_DWORD *)v1 + 27) - v12) >> 2 )
    {
      v13 = (int *)*((_DWORD *)v1 + 26);
      v14 = v12 < *((_DWORD *)v1 + 27);
      if ( v12 > *((_DWORD *)v1 + 27) )
      {
        invalid_parameter_noinfo();
        v14 = (unsigned int)v13 < *((_DWORD *)v1 + 27);
      }
      if ( !v14 )
        invalid_parameter_noinfo();
      v15 = *v13;
      v10 = *(_DWORD *)(*v13 + 12);
      v16 = *(_DWORD *)(v15 + 16);
      v73 = v10;
      v74 = v16;
    }
    else
    {
      v11 = 1;
    }
    v83 = -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 76));
    if ( v11 == 1 )
    {
      WaitForSingleObject(*((HANDLE *)v1 + 30), 0xFFFFFFFF);
      goto LABEL_81;
    }
    v17 = Outpop::Utility::Time_Value::gettimeofday((Outpop::Utility::Time_Value *)v80);
    v18 = *(_DWORD *)v17;
    v19 = *((_DWORD *)v17 + 1);
    v79[0] = v18;
    v79[1] = v19;
    if ( v10 > v18 || v10 == v18 && v74 > v19 )
    {
      v20 = (int *)Outpop::Utility::operator-((Outpop::Utility::Time_Value *)v81, &v73, v79);
      v21 = *v20;
      v22 = v20[1];
    }
    else
    {
      v21 = Outpop::Utility::Time_Value::zero;
      v22 = dword_100339B8;
    }
    ++*((_DWORD *)v1 + 45);
    v23 = WaitForSingleObject(*((HANDLE *)v1 + 30), 1000 * v21 + v22 / 1000);
    if ( !v23 )
      goto LABEL_81;
    if ( v23 != 258 )
      break;
    v24 = 0;
    v66 = 0;
    v83 = 4;
    v75 = v73;
    v76 = v74;
    v77 = Outpop::Utility::Time_Value::zero;
    v78 = dword_100339B8;
    v68 = 0;
    v63 = 0;
    v25 = 0;
    v67 = 0;
    v69 = 0;
    v26 = v64;
    v65 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v64 + 76);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v64 + 76));
    LOBYTE(v83) = 5;
    v27 = (int *)*((_DWORD *)v26 + 26);
    v28 = (char *)v26 + 100;
    v29 = (unsigned int)v27 < *((_DWORD *)v28 + 2);
    if ( (unsigned int)v27 > *((_DWORD *)v28 + 2) )
    {
      invalid_parameter_noinfo();
      v29 = (unsigned int)v27 < *((_DWORD *)v28 + 2);
    }
    if ( !v29 )
      invalid_parameter_noinfo();
    v30 = *v27;
    v31 = *(_DWORD *)(v30 + 12);
    if ( v75 <= v31 && (v75 != v31 || v76 < *(_DWORD *)(v30 + 16)) )
      goto LABEL_53;
    v32 = (int *)*((_DWORD *)v28 + 1);
    v33 = (unsigned int)v32 < *((_DWORD *)v28 + 2);
    if ( (unsigned int)v32 > *((_DWORD *)v28 + 2) )
    {
      invalid_parameter_noinfo();
      v33 = (unsigned int)v32 < *((_DWORD *)v28 + 2);
    }
    if ( !v33 )
      invalid_parameter_noinfo();
    v24 = *v32;
    v66 = *v32;
    if ( v66 )
      InterlockedIncrement((volatile LONG *)(v24 + 4));
    sub_10005B50();
    v77 = *(_DWORD *)(v24 + 12);
    v78 = *(_DWORD *)(v24 + 16);
    if ( *(_BYTE *)(v24 + 28) == 1 && *(_BYTE *)(v24 + 44) == 1 )
    {
      v34 = (_DWORD *)Outpop::Utility::operator+((Outpop::Utility::Time_Value *)v82, &v75, (_DWORD *)(v24 + 20));
      *(_DWORD *)(v24 + 12) = *v34;
      *(_DWORD *)(v24 + 16) = v34[1];
      sub_10005B10(&v66);
    }
    else
    {
      sub_100064B0((int)v64 + 136);
    }
    if ( *(_BYTE *)(v24 + 44) == 1 )
    {
      v68 = *(_DWORD **)(v24 + 32);
      if ( v63 )
      {
        v35 = (void (__thiscall ***)(_DWORD, int))v63;
        if ( !InterlockedDecrement((volatile LONG *)(v63 + 4)) )
          (**v35)(v35, 1);
      }
      v63 = *(_DWORD *)(v24 + 40);
      if ( v63 )
        InterlockedIncrement((volatile LONG *)(v63 + 4));
      v36 = *(_DWORD *)(v24 + 48);
      v69 = *(volatile LONG **)(v24 + 8);
      v25 = v69;
      if ( v69 )
        InterlockedIncrement(v69 + 1);
      v65 = *(_DWORD *)(v24 + 36);
    }
    else
    {
LABEL_53:
      v36 = v67;
    }
    LOBYTE(v83) = 4;
    LeaveCriticalSection(lpCriticalSection);
    if ( v25 )
    {
      if ( v68 )
      {
        if ( v65 )
        {
          v38 = operator new(0x24u);
          v68 = v38;
          LOBYTE(v83) = 6;
          if ( v38 )
            v39 = sub_10004660((int *)&v69, &v77, v38, v36, &v63, &v75);
          else
            v39 = 0;
          LOBYTE(v83) = 4;
          v70 = v39;
          if ( v39 )
            InterlockedIncrement(v39 + 1);
          LOBYTE(v83) = 7;
          (*(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)v65 + 8))(v65, &v70);
          LOBYTE(v83) = 4;
          if ( v70 )
          {
            v40 = (void (__thiscall ***)(_DWORD, int))v70;
            if ( !InterlockedDecrement(v70 + 1) )
              (**v40)(v40, 1);
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(volatile LONG *, int *, int *, int *, int))(*v25 + 4))(v25, &v75, &v77, &v63, v36);
      }
      LOBYTE(v83) = 3;
      if ( !InterlockedDecrement(v25 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v25)(v25, 1);
      LOBYTE(v83) = 2;
      v41 = (void (__thiscall ***)(_DWORD, int))v63;
      if ( v63 && !InterlockedDecrement((volatile LONG *)(v63 + 4)) && v41 )
        (**v41)(v41, 1);
      v83 = -1;
      if ( v24 )
      {
LABEL_79:
        if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) )
          (**(void (__thiscall ***)(int, int))v24)(v24, 1);
      }
    }
    else
    {
      LOBYTE(v83) = 2;
      v37 = (void (__thiscall ***)(_DWORD, int))v63;
      if ( v63 && !InterlockedDecrement((volatile LONG *)(v63 + 4)) && v37 )
        (**v37)(v37, 1);
      v83 = -1;
      if ( v24 )
        goto LABEL_79;
    }
LABEL_81:
    if ( !*((_BYTE *)v64 + 132) )
      goto LABEL_92;
    v1 = v64;
  }
  if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
     || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
    && *((_BYTE *)Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v42 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
    v72 = v42;
    EnterCriticalSection(v42);
    v83 = 8;
    Outpop::Utility::Logger::instance();
    v43 = *(wchar_t **)sub_10005380();
    v44 = sub_1000CD90(v43, L"\n%s", L"LOG_ERROR");
    Outpop::Utility::Logger::instance();
    v45 = (wchar_t **)sub_10005480();
    wstrtime_s(*v45, 0x80u);
    lpCriticalSection = *(LPCRITICAL_SECTION *)sub_10005480();
    Outpop::Utility::Logger::instance();
    v46 = (wchar_t **)sub_10005480();
    wstrdate_s(*v46, 0x80u);
    v47 = *(_DWORD *)sub_10005480();
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v49 = sub_1000CD90(
            &v43[v44],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v47,
            lpCriticalSection,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\Utility\\Timer_Queue.cpp",
            229)
        + v44;
    v50 = GetLastError();
    sub_1000CD90(&v43[v49], L"Timer Queue wait error %d", v50);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v43);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
    {
      v51 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v51, v43);
    }
    v83 = -1;
    LeaveCriticalSection(v42);
  }
  return 0;
}
