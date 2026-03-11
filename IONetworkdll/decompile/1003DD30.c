/*
 * func-name: ?handle_read_stream@Accept_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1003dd30
 * callers: none
 * callees: 0x100038e0, 0x10007400, 0x10009b30, 0x1000d110, 0x1000d2f0, 0x10016370, 0x10035dd0, 0x1003e800, 0x1004e861, 0x1004e98e, 0x1004f124
 */

void __thiscall Outpop::IONetwork::Accept_Bluider_Process::handle_read_stream(
        int this,
        Outpop::Utility::Stream_Base **a2)
{
  Outpop::Utility::Stream_Base *v2; // esi
  int v4; // eax
  int v5; // esi
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Lock *v15; // ebx
  Outpop::Utility::Logger *v16; // eax
  wchar_t *v17; // edi
  int v18; // esi
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // eax
  int v22; // eax
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Lock *v24; // eax
  Outpop::IONetwork::Security *v25; // eax
  Outpop::Utility::Lock *v26; // esi
  int readable; // eax
  Outpop::Utility::Stream_Base *v28; // ebx
  const char *ptr; // eax
  int v30; // ebx
  Outpop::Utility::Ref_Object *v31; // ecx
  int v32; // esi
  Outpop::IONetwork::INET_Addr *v33; // ebx
  char v34; // bl
  Outpop::Utility::Logger *v35; // eax
  int v36; // esi
  Outpop::Utility::Logger *v37; // eax
  Outpop::Utility::Logger *v38; // eax
  wchar_t *v39; // eax
  int v40; // esi
  Outpop::Utility::Ref_Object *v41; // ecx
  Outpop::Utility::Ref_Object *v42; // ecx
  bool v43; // zf
  Outpop::Utility::Lock *v44; // ebx
  Outpop::Utility::Logger *v45; // eax
  wchar_t *v46; // edi
  int v47; // eax
  int v48; // esi
  Outpop::Utility::Logger *v49; // eax
  Outpop::Utility::Logger *v50; // eax
  wchar_t *v51; // eax
  int v52; // eax
  Outpop::Utility::Logger *v53; // eax
  void (__thiscall ***v54)(_DWORD, int); // ecx
  int v55; // esi
  char *base_ptr; // eax
  Outpop::Utility::Binary_Stream *v57; // eax
  Outpop::Utility::Ref_Object *v58; // esi
  Outpop::Utility::Ref_Object *v59; // edi
  Outpop::Utility::Logger *v60; // eax
  wchar_t *v61; // ebx
  int v62; // eax
  int v63; // edi
  Outpop::Utility::Logger *v64; // eax
  Outpop::Utility::Logger *v65; // eax
  wchar_t *v66; // eax
  int v67; // eax
  Outpop::Utility::Logger *v68; // eax
  void (__thiscall ***v69)(_DWORD, int); // ebp
  Outpop::Utility::Ref_Object *v70; // [esp+Ch] [ebp-140h] BYREF
  int v71; // [esp+10h] [ebp-13Ch]
  char v72[4]; // [esp+14h] [ebp-138h] BYREF
  wchar_t *tm; // [esp+18h] [ebp-134h]
  DWORD CurrentProcessId; // [esp+1Ch] [ebp-130h]
  DWORD CurrentThreadId; // [esp+20h] [ebp-12Ch]
  DWORD LastError; // [esp+24h] [ebp-128h]
  char *v77; // [esp+28h] [ebp-124h]
  unsigned int v78; // [esp+2Ch] [ebp-120h]
  Outpop::Utility::Ref_Object *v79; // [esp+30h] [ebp-11Ch] BYREF
  int totallength; // [esp+34h] [ebp-118h]
  Outpop::Utility::Lock *v81; // [esp+44h] [ebp-108h]
  Outpop::Utility::Ref_Object **v82; // [esp+48h] [ebp-104h] BYREF
  Outpop::Utility::Binary_Stream *v83; // [esp+4Ch] [ebp-100h]
  Outpop::Utility::Ref_Object **v84; // [esp+50h] [ebp-FCh] BYREF
  char *v85; // [esp+54h] [ebp-F8h] BYREF
  _BYTE v86[28]; // [esp+58h] [ebp-F4h] BYREF
  char v87[200]; // [esp+74h] [ebp-D8h] BYREF
  int v88; // [esp+148h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+14Ch] [ebp+0h]

  v2 = *a2;
  v78 = this + 12;
  v77 = (char *)(this + 8);
  v82 = 0;
  v4 = sub_10035DD0((int)v2, (char *)&v82);
  v5 = sub_10035DD0(v4, v77);
  sub_10035DD0(v5, (char *)v78);
  if ( (int)Outpop::Utility::Stream_Base::get_readable(*a2) < 32 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v81 = v6;
      Outpop::Utility::Lock::lock(v6);
      v88 = 0;
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v10);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v11);
      v13 = sub_10007400(
              0xFFFF - v9,
              &log_buffer[v9],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
              54)
          + v9;
      sub_10007400(
        0xFFFF - v13,
        &log_buffer[v13],
        L"Accept_Bluider_Process::handle_read_stream stream->get_readable() < 32");
LABEL_6:
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v78 = (unsigned int)log_buffer;
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14);
      }
      v88 = -1;
      Outpop::Utility::Lock::unlock(v6);
      goto LABEL_11;
    }
    goto LABEL_11;
  }
  if ( v82 == (Outpop::Utility::Ref_Object **)1 )
  {
    sub_10035DD0((int)*a2, (char *)&v85);
    memset(v87, 0, sizeof(v87));
    Outpop::Utility::Stream_Base::read(*a2, v87, v85);
    v24 = (Outpop::Utility::Lock *)operator new(48);
    v81 = v24;
    v88 = 1;
    if ( v24 )
      v25 = Outpop::IONetwork::Security::Security(v24);
    else
      v25 = 0;
    v88 = -1;
    v78 = (unsigned int)v85;
    v77 = v87;
    *(_DWORD *)(this + 16) = v25;
    Outpop::IONetwork::Security::first_set_rsapubkey(v25, v77, v78);
    if ( Outpop::Utility::Stream_Base::get_readable(*a2) )
    {
      v26 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v81 = v26;
      v88 = 2;
      if ( v26 )
      {
        readable = Outpop::Utility::Stream_Base::get_readable(*a2);
        Outpop::Utility::Binary_Stream::Binary_Stream(v26, readable);
        *(_DWORD *)v26 = &Outpop::Utility::Binary_Stream::`vftable';
      }
      else
      {
        v26 = 0;
      }
      v88 = -1;
      v81 = v26;
      if ( v26 )
        Outpop::Utility::Ref_Object::addref(v26);
      v88 = 3;
      v28 = *a2;
      Outpop::Utility::Stream_Base::get_readable(*a2);
      ptr = Outpop::Utility::Stream_Base::get_read_ptr(v28);
      Outpop::Utility::Stream_Base::write(v26, ptr);
      v30 = *(_DWORD *)(this + 4);
      v31 = *(Outpop::Utility::Ref_Object **)(v30 + 8);
      if ( v31 )
        Outpop::Utility::Ref_Object::release(v31);
      *(_DWORD *)(v30 + 8) = v26;
      if ( v26 )
        Outpop::Utility::Ref_Object::addref(v26);
      v88 = -1;
      if ( v26 )
        Outpop::Utility::Ref_Object::release(v26);
    }
    v32 = *(_DWORD *)(*(_DWORD *)(this + 24) + 184);
    v33 = sub_10016370(*(_DWORD *)(this + 4), (Outpop::IONetwork::INET_Addr *)v86);
    v88 = 4;
    v84 = *(Outpop::Utility::Ref_Object ***)(this + 24);
    if ( v84 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v84);
    LOBYTE(v88) = 5;
    v34 = (*(int (__thiscall **)(int, Outpop::Utility::Ref_Object ***, Outpop::IONetwork::INET_Addr *, _DWORD, _DWORD, int))(*(_DWORD *)v32 + 16))(
            v32,
            &v84,
            v33,
            *(_DWORD *)(this + 8),
            *(_DWORD *)(this + 12),
            *(_DWORD *)(this + 4) + 8);
    LOBYTE(v88) = 4;
    if ( v84 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v84);
    v88 = -1;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v86);
    if ( !v34 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v81 = v6;
        Outpop::Utility::Lock::lock(v6);
        v88 = 6;
        v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v35);
        v36 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v37);
        v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v39 = Outpop::Utility::Logger::make_dt(v38);
        v40 = sub_10007400(
                0xFFFF - v36,
                &log_buffer[v36],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v39,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
                84)
            + v36;
        sub_10007400(
          0xFFFF - v40,
          &log_buffer[v40],
          L"Accept_Bluider_Process::handle_read_stream validate_connector  false");
        goto LABEL_6;
      }
LABEL_11:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(*(_DWORD *)(this + 4));
      return;
    }
    Outpop::Utility::Stream_Base::reset_all(*a2);
    Outpop::Utility::Stream_Base::move_write_pos(*a2, 4);
    sub_10009B30((int *)*a2, (const char *)&v82);
    v81 = (Outpop::Utility::Lock *)v72;
    std::string::string(v72, v87);
    v88 = 7;
    v71 = *(_DWORD *)(this + 16);
    v70 = v41;
    v42 = *a2;
    v43 = *a2 == 0;
    v83 = (Outpop::Utility::Binary_Stream *)&v70;
    v70 = v42;
    if ( !v43 )
      Outpop::Utility::Ref_Object::addref(v42);
    v88 = -1;
    if ( (unsigned __int8)Outpop::IONetwork::Accept_Bluider_Process::make_respond_packet(
                            v70,
                            v71,
                            v72[0],
                            tm,
                            CurrentProcessId,
                            CurrentThreadId,
                            LastError,
                            v77,
                            v78) )
    {
      v55 = Outpop::Utility::Stream_Base::get_readable(*a2) - 4;
      base_ptr = Outpop::Utility::Stream_Base::get_base_ptr(*a2);
      v78 = 72;
      *(_DWORD *)base_ptr = v55;
      v57 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(v78);
      v58 = v57;
      v83 = v57;
      v88 = 10;
      if ( v57 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v57, 10);
        *(_DWORD *)v58 = &Outpop::Utility::Binary_Stream::`vftable';
      }
      else
      {
        v58 = 0;
      }
      v88 = -1;
      v83 = v58;
      if ( v58 )
        Outpop::Utility::Ref_Object::addref(v58);
      v88 = 11;
      v78 = 4;
      Outpop::Utility::Stream_Base::write(v58, "0001");
      v59 = *a2;
      v82 = &v79;
      v79 = v59;
      if ( v59 )
        Outpop::Utility::Ref_Object::addref(v59);
      LOBYTE(retaddr) = 11;
      Outpop::Utility::Binary_Stream::cont(v58, v79);
      totallength = 0;
      totallength = Outpop::Utility::Stream_Base::get_totallength(v58);
      v84 = &v79;
      v79 = v58;
      if ( v58 )
        Outpop::Utility::Ref_Object::addref(v58);
      if ( (*(int (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object *, int))(**(_DWORD **)(this + 4) + 8))(
             *(_DWORD *)(this + 4),
             v79,
             totallength) == -1 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v81 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v81);
          LOBYTE(v88) = 14;
          v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v61 = Outpop::Utility::Logger::get_log_buffer(v60);
          v62 = sub_10007400(0xFFFFu, v61, L"\n%s", L"LOG_ERROR");
          v78 = 113;
          v77 = (char *)L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp";
          v63 = v62;
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v64 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v64);
          v65 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v66 = Outpop::Utility::Logger::make_dt(v65);
          v67 = sub_10007400(
                  0xFFFF - v63,
                  &v61[v63],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v66);
          sub_10007400(
            0xFFFF - (v67 + v63),
            &v61[v67 + v63],
            L"Accept_Bluider_Process::handle_read_stream this->channel_->asynch_send_stream failed");
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v61);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v78 = (unsigned int)v61;
            v68 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v68);
          }
          LOBYTE(v88) = 11;
          Outpop::Utility::Lock::unlock(v81);
        }
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(*(_DWORD *)(this + 4));
        v69 = *(void (__thiscall ****)(_DWORD, int))(this + 16);
        if ( v69 )
          (**v69)(v69, 1);
      }
      v88 = -1;
      if ( v58 )
        Outpop::Utility::Ref_Object::release(v58);
    }
    else
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v44 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v83 = v44;
        Outpop::Utility::Lock::lock(v44);
        v88 = 9;
        v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v46 = Outpop::Utility::Logger::get_log_buffer(v45);
        v47 = sub_10007400(0xFFFFu, v46, L"\n%s", L"LOG_ERROR");
        v78 = 96;
        v77 = (char *)L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp";
        v48 = v47;
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v49);
        v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v51 = Outpop::Utility::Logger::make_dt(v50);
        v52 = sub_10007400(0xFFFF - v48, &v46[v48], L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:", v51);
        sub_10007400(
          0xFFFF - (v52 + v48),
          &v46[v52 + v48],
          L"Accept_Bluider_Process::handle_read_stream make_respond_packet  false");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v46);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v78 = (unsigned int)v46;
          v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v53);
        }
        v88 = -1;
        Outpop::Utility::Lock::unlock(v44);
      }
      v54 = *(void (__thiscall ****)(_DWORD, int))(this + 16);
      if ( v54 )
        (**v54)(v54, 1);
      *(_DWORD *)(this + 16) = 0;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(*(_DWORD *)(this + 4));
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(*(_DWORD *)(this + 4));
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v15 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v81 = v15;
      Outpop::Utility::Lock::lock(v15);
      v88 = 15;
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v17 = Outpop::Utility::Logger::get_log_buffer(v16);
      v18 = sub_10007400(0xFFFFu, v17, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v19);
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v21 = Outpop::Utility::Logger::make_dt(v20);
      v22 = sub_10007400(
              0xFFFF - v18,
              &v17[v18],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v21,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
              123);
      sub_10007400(
        0xFFFF - (v22 + v18),
        &v17[v22 + v18],
        L"Error,Accept_Bluider_Process::handle_read_stream(Stream_Type_Ref stream) step Exception,value is %d",
        v82);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v17);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v78 = (unsigned int)v17;
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v23);
      }
      v88 = -1;
      Outpop::Utility::Lock::unlock(v15);
    }
  }
}
