/*
 * func-name: sub_10016CA0
 * func-address: 0x10016ca0
 * callers: none
 * callees: 0x10004250, 0x10016a70, 0x1001bb10, 0x10023490, 0x100295c0
 */

void __thiscall sub_10016CA0(void *this, Outpop::Message::Message **a2)
{
  void *v2; // esi
  Outpop::Message::Message *v4; // ecx
  char v5; // al
  int v6; // eax
  int v7; // eax
  Outpop::Utility::Lock *v8; // ebx
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // edi
  int v11; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // eax
  int v15; // eax
  Outpop::Utility::Logger *v16; // eax
  unsigned __int8 v17; // dl
  int v18; // eax
  _DWORD *v19; // eax
  Outpop::Utility::Lock *v20; // ebp
  Outpop::Utility::Logger *v21; // eax
  wchar_t *log_buffer; // edi
  int v23; // esi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *dt; // eax
  int v27; // esi
  unsigned __int16 type; // ax
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Lock *v30; // ebp
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // edi
  int v33; // esi
  Outpop::Utility::Logger *v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *v36; // eax
  int v37; // esi
  Outpop::Message::Message *v38; // eax
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // cx
  Outpop::Utility::Logger *v41; // eax
  Outpop::Utility::Lock *v42; // ebp
  Outpop::Utility::Logger *v43; // eax
  wchar_t *v44; // edi
  int v45; // esi
  Outpop::Utility::Logger *v46; // eax
  Outpop::Utility::Logger *v47; // eax
  wchar_t *v48; // eax
  int v49; // esi
  unsigned __int16 v50; // ax
  Outpop::Utility::Logger *v51; // eax
  Outpop::Utility::Lock *v52; // ebp
  Outpop::Utility::Logger *v53; // eax
  wchar_t *v54; // edi
  int v55; // esi
  Outpop::Utility::Logger *v56; // eax
  Outpop::Utility::Logger *v57; // eax
  wchar_t *v58; // eax
  int v59; // esi
  unsigned __int16 v60; // ax
  Outpop::Utility::Logger *v61; // eax
  Outpop::Utility::Thread_Message *v62; // eax
  Outpop::Utility::Ref_Object *v63; // eax
  wchar_t *v64; // [esp-18h] [ebp-48h]
  wchar_t *tm; // [esp-18h] [ebp-48h]
  wchar_t *v66; // [esp-18h] [ebp-48h]
  wchar_t *v67; // [esp-18h] [ebp-48h]
  wchar_t *v68; // [esp-18h] [ebp-48h]
  DWORD v69; // [esp-14h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-44h]
  DWORD v71; // [esp-14h] [ebp-44h]
  DWORD v72; // [esp-14h] [ebp-44h]
  DWORD v73; // [esp-14h] [ebp-44h]
  DWORD v74; // [esp-10h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-40h]
  DWORD v76; // [esp-10h] [ebp-40h]
  DWORD v77; // [esp-10h] [ebp-40h]
  DWORD v78; // [esp-10h] [ebp-40h]
  DWORD v79; // [esp-Ch] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-3Ch]
  DWORD v81; // [esp-Ch] [ebp-3Ch]
  DWORD v82; // [esp-Ch] [ebp-3Ch]
  DWORD v83; // [esp-Ch] [ebp-3Ch]
  Outpop::Utility::Ref_Object *v85; // [esp+18h] [ebp-18h] BYREF
  Outpop::Utility::Ref_Object *v86; // [esp+1Ch] [ebp-14h] BYREF
  Outpop::Utility::Lock *v87; // [esp+20h] [ebp-10h]
  int v88; // [esp+2Ch] [ebp-4h]
  bool v89; // [esp+34h] [ebp+4h]
  unsigned __int8 v90; // [esp+34h] [ebp+4h]
  unsigned __int8 v91; // [esp+34h] [ebp+4h]
  unsigned __int8 v92; // [esp+34h] [ebp+4h]

  v2 = this;
  v4 = *a2;
  v5 = **((_BYTE **)*a2 + 25);
  if ( (v5 & 4) != 0 )
    v6 = 1;
  else
    v6 = (v5 & 8) != 8 ? 0 : 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v17 = *((_BYTE *)v4 + 97) & 0xF;
        if ( v17 )
          v18 = *(_DWORD *)(v17 + *((_DWORD *)v4 + 25));
        else
          v18 = -1;
        v19 = (_DWORD *)sub_1001BB10(&v86, v18);
        v88 = 5;
        v89 = *v19 == 0;
        v88 = -1;
        if ( v86 )
          Outpop::Utility::Ref_Object::release(v86);
        if ( v89 )
        {
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
          {
            v20 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            v87 = v20;
            Outpop::Utility::Lock::lock(v20);
            v88 = 6;
            v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            log_buffer = Outpop::Utility::Logger::get_log_buffer(v21);
            v23 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
            LastError = GetLastError();
            CurrentThreadId = GetCurrentThreadId();
            CurrentProcessId = GetCurrentProcessId();
            v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            tm = Outpop::Utility::Logger::make_tm(v24);
            v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            dt = Outpop::Utility::Logger::make_dt(v25);
            v27 = sub_10023490(
                    &log_buffer[v23],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    dt,
                    tm,
                    CurrentProcessId,
                    CurrentThreadId,
                    LastError,
                    L"D:\\R3\\OutpopGameProject\\MessageService\\Default_Type_Handler.cpp",
                    78)
                + v23;
            v90 = *(_BYTE *)(*((_DWORD *)*a2 + 25) + 1);
            type = Outpop::Message::Message::get_type(*a2);
            sub_10023490(
              &log_buffer[v27],
              L"Defalut_Type_Handler dispatch Ack default Context handler catalog is %d type is %d",
              v90,
              type);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", log_buffer);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v29);
            }
            v88 = -1;
            Outpop::Utility::Lock::unlock(v20);
            v2 = this;
          }
          (*(void (__thiscall **)(_DWORD, Outpop::Message::Message **))(**((_DWORD **)v2 + 4) + 4))(
            *((_DWORD *)v2 + 4),
            a2);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, Outpop::Message::Message **))(**((_DWORD **)v2 + 5) + 4))(
            *((_DWORD *)v2 + 5),
            a2);
        }
      }
      else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
              || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
             && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v8);
        v88 = 7;
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v10 = Outpop::Utility::Logger::get_log_buffer(v9);
        v11 = sub_10023490(v10, L"\n%s", L"LOG_DEBUG");
        v79 = GetLastError();
        v74 = GetCurrentThreadId();
        v69 = GetCurrentProcessId();
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v64 = Outpop::Utility::Logger::make_tm(v12);
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v14 = Outpop::Utility::Logger::make_dt(v13);
        v15 = sub_10023490(
                &v10[v11],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v14,
                v64,
                v69,
                v74,
                v79,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Default_Type_Handler.cpp",
                88);
        sub_10023490(&v10[v15 + v11], L"Defalut_Type_Handler::handle_message unknown message type!");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v10);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v16);
        }
        v88 = -1;
        Outpop::Utility::Lock::unlock(v8);
      }
    }
    else
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v30 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v30);
        v88 = 4;
        v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v32 = Outpop::Utility::Logger::get_log_buffer(v31);
        v33 = sub_10023490(v32, L"\n%s", L"LOG_DEBUG");
        v81 = GetLastError();
        v76 = GetCurrentThreadId();
        v71 = GetCurrentProcessId();
        v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v66 = Outpop::Utility::Logger::make_tm(v34);
        v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v36 = Outpop::Utility::Logger::make_dt(v35);
        v37 = sub_10023490(
                &v32[v33],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v36,
                v66,
                v71,
                v76,
                v81,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Default_Type_Handler.cpp",
                69)
            + v33;
        v38 = *a2;
        v39 = *((_WORD *)*a2 + 48) >> 12;
        if ( v39 )
          v40 = *(_WORD *)(v39 + *((_DWORD *)v38 + 25));
        else
          v40 = -1;
        sub_10023490(
          &v32[v37],
          L"Defalut_Type_Handler dispatch Reqeust default Context handler catalog is %d type is %d",
          *(unsigned __int8 *)(*((_DWORD *)v38 + 25) + 1),
          v40);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v32);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v41);
        }
        v88 = -1;
        Outpop::Utility::Lock::unlock(v30);
        v2 = this;
      }
      (*(void (__thiscall **)(_DWORD, Outpop::Message::Message **))(**((_DWORD **)v2 + 3) + 4))(*((_DWORD *)v2 + 3), a2);
    }
  }
  else if ( *((_DWORD *)v2 + 6) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v52 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v87 = v52;
      Outpop::Utility::Lock::lock(v52);
      v88 = 1;
      v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v54 = Outpop::Utility::Logger::get_log_buffer(v53);
      v55 = sub_10023490(v54, L"\n%s", L"LOG_DEBUG");
      v83 = GetLastError();
      v78 = GetCurrentThreadId();
      v73 = GetCurrentProcessId();
      v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v68 = Outpop::Utility::Logger::make_tm(v56);
      v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v58 = Outpop::Utility::Logger::make_dt(v57);
      v59 = sub_10023490(
              &v54[v55],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v58,
              v68,
              v73,
              v78,
              v83,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Default_Type_Handler.cpp",
              63)
          + v55;
      v92 = *(_BYTE *)(*((_DWORD *)*a2 + 25) + 1);
      v60 = Outpop::Message::Message::get_type(*a2);
      sub_10023490(
        &v54[v59],
        L"Defalut_Type_Handler dispatch SimpleMessage default Post handler catalog is %d type is %d",
        v92,
        v60);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v54);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v61 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v61);
      }
      v88 = -1;
      Outpop::Utility::Lock::unlock(v52);
      v2 = this;
    }
    v62 = (Outpop::Utility::Thread_Message *)operator new(0x10u);
    v88 = 2;
    if ( v62 )
      v63 = sub_10016A70(v62, *((_DWORD *)v2 + 2), a2);
    else
      v63 = 0;
    v88 = -1;
    v85 = v63;
    if ( v63 )
      Outpop::Utility::Ref_Object::addref(v63);
    v88 = 3;
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**((_DWORD **)v2 + 7) + 8))(
      *((_DWORD *)v2 + 7),
      &v85);
    v88 = -1;
    if ( v85 )
      Outpop::Utility::Ref_Object::release(v85);
  }
  else
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v42 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v87 = v42;
      Outpop::Utility::Lock::lock(v42);
      v88 = 0;
      v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v44 = Outpop::Utility::Logger::get_log_buffer(v43);
      v45 = sub_10023490(v44, L"\n%s", L"LOG_DEBUG");
      v82 = GetLastError();
      v77 = GetCurrentThreadId();
      v72 = GetCurrentProcessId();
      v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v67 = Outpop::Utility::Logger::make_tm(v46);
      v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v48 = Outpop::Utility::Logger::make_dt(v47);
      v49 = sub_10023490(
              &v44[v45],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v48,
              v67,
              v72,
              v77,
              v82,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Default_Type_Handler.cpp",
              58)
          + v45;
      v91 = *(_BYTE *)(*((_DWORD *)*a2 + 25) + 1);
      v50 = Outpop::Message::Message::get_type(*a2);
      sub_10023490(
        &v44[v49],
        L"Defalut_Type_Handler dispatch SimpleMessage default Context handler catalog is %d type is %d",
        v91,
        v50);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v44);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v51);
      }
      v88 = -1;
      Outpop::Utility::Lock::unlock(v42);
      v2 = this;
    }
    (*(void (__thiscall **)(_DWORD, Outpop::Message::Message **))(**((_DWORD **)v2 + 2) + 4))(*((_DWORD *)v2 + 2), a2);
  }
}
