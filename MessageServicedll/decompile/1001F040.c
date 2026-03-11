/*
 * func-name: ?dispatch_message_handler@Handler_Manager@Message@Outpop@@QAEXEGAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x1001f040
 * callers: 0x100119c0, 0x10019990
 * callees: 0x1000b5b0, 0x1001e850, 0x10023490, 0x10029110
 */

void __thiscall Outpop::Message::Handler_Manager::dispatch_message_handler(
        Outpop::Utility::Lock *this,
        unsigned __int8 a2,
        unsigned __int16 a3,
        Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Lock *v4; // esi
  Outpop::Utility::Lock *v5; // edi
  int v6; // eax
  void (__cdecl *v7)(); // esi
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  int v16; // ebx
  Outpop::Utility::Lock *v17; // edi
  int v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // edi
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // eax
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Sect_Block_Allocator *v27; // eax
  Outpop::Utility::Lock *v28; // ebx
  int v29; // eax
  Outpop::Utility::Ref_Object *v30; // eax
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // edi
  int v33; // esi
  Outpop::Utility::Logger *v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *v36; // eax
  int v37; // eax
  Outpop::Utility::Logger *v38; // eax
  Outpop::Utility::Lock *v39; // ecx
  Outpop::Utility::Logger *v40; // eax
  wchar_t *v41; // edi
  int v42; // esi
  Outpop::Utility::Logger *v43; // eax
  Outpop::Utility::Logger *v44; // eax
  wchar_t *v45; // eax
  int v46; // eax
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  wchar_t *v49; // edi
  int v50; // esi
  Outpop::Utility::Logger *v51; // eax
  Outpop::Utility::Logger *v52; // eax
  wchar_t *v53; // eax
  int v54; // eax
  Outpop::Utility::Logger *v55; // eax
  wchar_t *tm; // [esp-18h] [ebp-54h]
  wchar_t *v57; // [esp-18h] [ebp-54h]
  wchar_t *v58; // [esp-18h] [ebp-54h]
  wchar_t *v59; // [esp-18h] [ebp-54h]
  wchar_t *v60; // [esp-18h] [ebp-54h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  DWORD v62; // [esp-14h] [ebp-50h]
  DWORD v63; // [esp-14h] [ebp-50h]
  DWORD v64; // [esp-14h] [ebp-50h]
  DWORD v65; // [esp-14h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD v67; // [esp-10h] [ebp-4Ch]
  DWORD v68; // [esp-10h] [ebp-4Ch]
  DWORD v69; // [esp-10h] [ebp-4Ch]
  DWORD v70; // [esp-10h] [ebp-4Ch]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  DWORD v72; // [esp-Ch] [ebp-48h]
  DWORD v73; // [esp-Ch] [ebp-48h]
  DWORD v74; // [esp-Ch] [ebp-48h]
  DWORD v75; // [esp-Ch] [ebp-48h]
  Outpop::Utility::Ref_Object *v76; // [esp+14h] [ebp-28h] BYREF
  Outpop::Utility::Lock *v77; // [esp+18h] [ebp-24h]
  int v78; // [esp+1Ch] [ebp-20h]
  Outpop::Utility::Lock *v79; // [esp+20h] [ebp-1Ch]
  Outpop::Utility::Lock *v80; // [esp+24h] [ebp-18h] BYREF
  int v81; // [esp+28h] [ebp-14h]
  int v82; // [esp+38h] [ebp-4h]

  v4 = this;
  v79 = this;
  v76 = (Outpop::Utility::Ref_Object *)((a2 << 16) + a3);
  sub_10029110(&v80, &v76);
  v5 = v80;
  v78 = *((_DWORD *)v4 + 3);
  if ( !v80 || v80 != (Outpop::Utility::Lock *)((char *)v4 + 8) )
    invalid_parameter_noinfo();
  v6 = v81;
  if ( v81 != v78 )
  {
    v7 = invalid_parameter_noinfo;
    if ( !v5 )
    {
      invalid_parameter_noinfo();
      v6 = v81;
    }
    if ( v6 == *((_DWORD *)v5 + 1) )
    {
      invalid_parameter_noinfo();
      v6 = v81;
    }
    if ( !*(_DWORD *)(v6 + 16) )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v76 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v76);
        v82 = 0;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v11);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v12);
        v14 = sub_10023490(
                &log_buffer[v10],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Handler_Manager.cpp",
                203);
        sub_10023490(
          &log_buffer[v14 + v10],
          L"Handler_Manager dispatch Context handler catalog is %d type is %d",
          a2,
          a3);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        v82 = -1;
        Outpop::Utility::Lock::unlock(v76);
        v5 = v80;
        v7 = invalid_parameter_noinfo;
      }
      v16 = v81;
      if ( v81 == *((_DWORD *)v5 + 1) )
        v7();
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(v16 + 20) + 4))(
        *(_DWORD *)(v16 + 20),
        a4);
      return;
    }
    if ( v6 == *((_DWORD *)v5 + 1) )
    {
      invalid_parameter_noinfo();
      v6 = v81;
    }
    v77 = *(Outpop::Utility::Lock **)(v6 + 12);
    v17 = v77;
    v18 = Outpop::Utility::Logger::instance();
    if ( v17 )
    {
      if ( (*(_BYTE *)(v18 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v76 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v76);
        v82 = 1;
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v20 = Outpop::Utility::Logger::get_log_buffer(v19);
        v21 = sub_10023490(v20, L"\n%s", L"LOG_DEBUG");
        v72 = GetLastError();
        v67 = GetCurrentThreadId();
        v62 = GetCurrentProcessId();
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v57 = Outpop::Utility::Logger::make_tm(v22);
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v24 = Outpop::Utility::Logger::make_dt(v23);
        v25 = sub_10023490(
                &v20[v21],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v24,
                v57,
                v62,
                v67,
                v72,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Handler_Manager.cpp",
                211);
        sub_10023490(&v20[v25 + v21], L"Handler_Manager dispatch Post handler catalog is %d type is %d", a2, a3);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v20);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v26);
        }
        v82 = -1;
        Outpop::Utility::Lock::unlock(v76);
        v17 = v77;
      }
      v27 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(16);
      v28 = (Outpop::Utility::Lock *)Outpop::Utility::Sect_Block_Allocator::malloc(v27);
      v79 = v28;
      v82 = 2;
      if ( v28 )
      {
        v29 = sub_1000B5B0(&v80);
        v30 = sub_1001E850(v28, *(_DWORD *)(v29 + 12), a4);
      }
      else
      {
        v30 = 0;
      }
      v82 = -1;
      v76 = v30;
      if ( v30 )
        Outpop::Utility::Ref_Object::addref(v30);
      v82 = 3;
      (*(void (__thiscall **)(Outpop::Utility::Lock *, Outpop::Utility::Ref_Object **))(*(_DWORD *)v17 + 8))(v17, &v76);
      v82 = -1;
      if ( v76 )
        Outpop::Utility::Ref_Object::release(v76);
      return;
    }
    if ( *(_BYTE *)(v18 + 136) != 1 && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return;
    }
    v77 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v77);
    v82 = 4;
    v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v32 = Outpop::Utility::Logger::get_log_buffer(v31);
    v33 = sub_10023490(v32, L"\n%s", L"LOG_ERROR");
    v73 = GetLastError();
    v68 = GetCurrentThreadId();
    v63 = GetCurrentProcessId();
    v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v58 = Outpop::Utility::Logger::make_tm(v34);
    v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v36 = Outpop::Utility::Logger::make_dt(v35);
    v37 = sub_10023490(
            &v32[v33],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v36,
            v58,
            v63,
            v68,
            v73,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Handler_Manager.cpp",
            216);
    sub_10023490(
      &v32[v37 + v33],
      L"Handler_Manager dispatch Post handler but dispatch thread not find catalog is %d type is %d",
      a2,
      a3);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v32);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v38);
    }
    v82 = -1;
    v39 = v77;
LABEL_65:
    Outpop::Utility::Lock::unlock(v39);
    return;
  }
  if ( !*((_DWORD *)v4 + 14) )
  {
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) != 1 )
    {
      return;
    }
    v79 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v79);
    v82 = 6;
    v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v49 = Outpop::Utility::Logger::get_log_buffer(v48);
    v50 = sub_10023490(v49, L"\n%s", L"LOG_DEBUG");
    v75 = GetLastError();
    v70 = GetCurrentThreadId();
    v65 = GetCurrentProcessId();
    v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v60 = Outpop::Utility::Logger::make_tm(v51);
    v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v53 = Outpop::Utility::Logger::make_dt(v52);
    v54 = sub_10023490(
            &v49[v50],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v53,
            v60,
            v65,
            v70,
            v75,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Handler_Manager.cpp",
            229);
    sub_10023490(&v49[v54 + v50], L"Handler_Manager dispatch null handler catalog is %d type is %d", a2, a3);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v49);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v55 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v55);
    }
    v82 = -1;
    v39 = v79;
    goto LABEL_65;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v77 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v77);
    v82 = 5;
    v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v41 = Outpop::Utility::Logger::get_log_buffer(v40);
    v42 = sub_10023490(v41, L"\n%s", L"LOG_DEBUG");
    v74 = GetLastError();
    v69 = GetCurrentThreadId();
    v64 = GetCurrentProcessId();
    v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v59 = Outpop::Utility::Logger::make_tm(v43);
    v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v45 = Outpop::Utility::Logger::make_dt(v44);
    v46 = sub_10023490(
            &v41[v42],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v45,
            v59,
            v64,
            v69,
            v74,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Handler_Manager.cpp",
            224);
    sub_10023490(&v41[v46 + v42], L"Handler_Manager dispatch default handler catalog is %d type is %d", a2, a3);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v41);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v47);
    }
    v82 = -1;
    Outpop::Utility::Lock::unlock(v77);
    v4 = v79;
  }
  (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**((_DWORD **)v4 + 14) + 4))(
    *((_DWORD *)v4 + 14),
    a4);
}
