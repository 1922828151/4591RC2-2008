/*
 * func-name: ?send@Stream_Channel@IONetwork@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x1000f9b0
 * callers: none
 * callees: 0x10007400, 0x100091d0, 0x1000ac30, 0x1000b2b0, 0x1000cc60, 0x10010b40, 0x1003ba70, 0x1004e870
 */

char __thiscall Outpop::IONetwork::Stream_Channel::send(int this, int a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  int v4; // eax
  Outpop::Utility::Stream_Base **v5; // esi
  Outpop::Utility::Stream_Base **v6; // ebx
  Outpop::Utility::Stream_Base *v7; // edi
  int v8; // eax
  Outpop::Utility::Thread_Mutex *v9; // esi
  const char *v10; // eax
  Outpop::Utility::Thread_Mutex **v11; // ebx
  Outpop::Utility::Stream_Base *v12; // edi
  Outpop::Utility::Logger *v13; // eax
  wchar_t *log_buffer; // ebx
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *dt; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  int v21; // edi
  unsigned int v22; // esi
  unsigned int v23; // esi
  Outpop::Utility::Binary_Stream *v24; // esi
  Outpop::Utility::Ref_Object **v25; // ebx
  int totallength; // eax
  Outpop::Utility::Stream_Base *v27; // edi
  Outpop::Utility::Ref_Object *v28; // esi
  const char *ptr; // eax
  Outpop::Utility::Ref_Object **v30; // ebx
  int v31; // esi
  char v32; // bl
  Outpop::Utility::Logger *v33; // eax
  wchar_t *v34; // ebx
  int v35; // esi
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  wchar_t *v38; // eax
  int v39; // eax
  Outpop::Utility::Logger *v40; // eax
  int v41; // edi
  unsigned int v42; // esi
  unsigned int v43; // esi
  unsigned int v44; // eax
  unsigned int v45; // ecx
  int v46; // edi
  int v47; // ebx
  unsigned int v48; // ebx
  Outpop::Utility::Lock *v49; // edi
  Outpop::Utility::Logger *v50; // eax
  wchar_t *v51; // ebx
  int v52; // esi
  Outpop::Utility::Logger *v53; // eax
  Outpop::Utility::Logger *v54; // eax
  wchar_t *v55; // eax
  int v56; // esi
  int v57; // ecx
  Outpop::Utility::Logger *v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // eax
  int v61; // ebx
  int v62; // edi
  Outpop::Utility::Ref_Object **v63; // esi
  Outpop::Utility::Ref_Object **v64; // edi
  wchar_t *tm; // [esp-Ch] [ebp-84h]
  wchar_t *v67; // [esp-Ch] [ebp-84h]
  wchar_t *v68; // [esp-Ch] [ebp-84h]
  DWORD CurrentProcessId; // [esp-8h] [ebp-80h]
  DWORD v70; // [esp-8h] [ebp-80h]
  DWORD v71; // [esp-8h] [ebp-80h]
  DWORD CurrentThreadId; // [esp-4h] [ebp-7Ch]
  DWORD v73; // [esp-4h] [ebp-7Ch]
  DWORD v74; // [esp-4h] [ebp-7Ch]
  DWORD LastError; // [esp+0h] [ebp-78h]
  DWORD v76; // [esp+0h] [ebp-78h]
  DWORD v77; // [esp+0h] [ebp-78h]
  int v78; // [esp+Ch] [ebp-6Ch]
  Outpop::Utility::Stream_Base *v80; // [esp+24h] [ebp-54h] BYREF
  Outpop::Utility::Thread_Mutex *v81; // [esp+28h] [ebp-50h]
  Outpop::Utility::Ref_Object *v82; // [esp+2Ch] [ebp-4Ch] BYREF
  Outpop::Utility::Lock *v83; // [esp+30h] [ebp-48h] BYREF
  Outpop::Utility::Stream_Base *v84; // [esp+34h] [ebp-44h] BYREF
  Outpop::Utility::Binary_Stream *v85; // [esp+38h] [ebp-40h] BYREF
  Outpop::Utility::Stream_Base **j; // [esp+3Ch] [ebp-3Ch]
  Outpop::Utility::Thread_Mutex *v87; // [esp+40h] [ebp-38h] BYREF
  unsigned int i; // [esp+44h] [ebp-34h]
  int v89; // [esp+48h] [ebp-30h] BYREF
  Outpop::Utility::Ref_Object **v90; // [esp+4Ch] [ebp-2Ch]
  unsigned int v91; // [esp+50h] [ebp-28h]
  int v92; // [esp+54h] [ebp-24h]
  int v93; // [esp+58h] [ebp-20h] BYREF
  unsigned int v94; // [esp+5Ch] [ebp-1Ch]
  unsigned int v95; // [esp+60h] [ebp-18h]
  int v96; // [esp+64h] [ebp-14h]
  int v97; // [esp+74h] [ebp-4h]

  v3 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v87 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v81 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132)) - 1;
  i = v4;
  v97 = 0;
  if ( v4 != -1 )
  {
    if ( *(_BYTE *)(this + 209) )
    {
      *(_BYTE *)(this + 209) = 0;
      v97 = -1;
      i = -1;
      Outpop::Utility::Thread_Mutex::release(v3);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v12 = (Outpop::Utility::Stream_Base *)(Outpop::Utility::Logger::instance() + 144);
        v84 = v12;
        Outpop::Utility::Lock::lock(v12);
        v97 = 5;
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v13);
        v15 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v16);
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v17);
        v19 = sub_10007400(
                0xFFFF - v15,
                &log_buffer[v15],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                233);
        sub_10007400(
          0xFFFF - (v19 + v15),
          &log_buffer[v19 + v15],
          L" Stream_Channel::send(std::vector<Smart_Ptr<Binary_Stream> >& streams) id  is %d",
          *(_DWORD *)(this + 112));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v20);
        }
        v97 = -1;
        Outpop::Utility::Lock::unlock(v12);
      }
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v97 = 6;
      v21 = a2;
      v22 = *(_DWORD *)(a2 + 4);
      if ( v22 > *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      i = v22;
      while ( 1 )
      {
        v23 = *(_DWORD *)(v21 + 8);
        if ( *(_DWORD *)(v21 + 4) > v23 )
          invalid_parameter_noinfo();
        if ( i == v23 )
          break;
        v24 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
        v85 = v24;
        LOBYTE(v97) = 7;
        if ( v24 )
        {
          if ( i >= *(_DWORD *)(v21 + 8) )
            invalid_parameter_noinfo();
          v25 = (Outpop::Utility::Ref_Object **)i;
          totallength = Outpop::Utility::Stream_Base::get_totallength(*(Outpop::Utility::Stream_Base **)i);
          Outpop::Utility::Binary_Stream::Binary_Stream(v24, totallength + 30);
          *(_DWORD *)v24 = &Outpop::Utility::Binary_Stream::`vftable';
          v27 = v24;
        }
        else
        {
          v25 = (Outpop::Utility::Ref_Object **)i;
          v27 = 0;
        }
        LOBYTE(v97) = 6;
        v80 = v27;
        if ( v27 )
          Outpop::Utility::Ref_Object::addref(v27);
        LOBYTE(v97) = 8;
        Outpop::Utility::Stream_Base::move_write_pos(v27, 10);
        Outpop::Utility::Stream_Base::move_read_pos(v27, 10);
        if ( (unsigned int)v25 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        Outpop::Utility::Binary_Stream::set_all_protepoty(v27, v25);
        if ( (unsigned int)v25 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v28 = *v25;
        v82 = *v25;
        if ( v82 )
          Outpop::Utility::Ref_Object::addref(v28);
        LOBYTE(v97) = 9;
        while ( v28 )
        {
          Outpop::Utility::Stream_Base::get_readable(v28);
          ptr = Outpop::Utility::Stream_Base::get_read_ptr(v28);
          Outpop::Utility::Stream_Base::write(v27, ptr, v78);
          v30 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(v28, &v83);
          LOBYTE(v97) = 10;
          Outpop::Utility::Ref_Object::release(v28);
          v28 = *v30;
          v82 = *v30;
          if ( v82 )
            Outpop::Utility::Ref_Object::addref(v28);
          LOBYTE(v97) = 9;
          if ( v83 )
            Outpop::Utility::Ref_Object::release(v83);
        }
        LOBYTE(v97) = 8;
        v31 = this;
        if ( *(_BYTE *)(this + 192) )
        {
          Outpop::Utility::Thread_Mutex::acquire(v81);
          v32 = Outpop::IONetwork::Security_Processer::process(
                  &v80,
                  *(_DWORD *)(this + 204),
                  *(unsigned __int8 *)(this + 193));
          Outpop::Utility::Thread_Mutex::release(v81);
          if ( !v32 )
          {
            v84 = (Outpop::Utility::Stream_Base *)GetLastError();
            if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
               || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
              && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
            {
              v83 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
              Outpop::Utility::Lock::lock(v83);
              LOBYTE(v97) = 11;
              v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v34 = Outpop::Utility::Logger::get_log_buffer(v33);
              v35 = sub_10007400(0xFFFFu, v34, L"\n%s", L"LOG_ERROR");
              v76 = GetLastError();
              v73 = GetCurrentThreadId();
              v70 = GetCurrentProcessId();
              v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v67 = Outpop::Utility::Logger::make_tm(v36);
              v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              v38 = Outpop::Utility::Logger::make_dt(v37);
              v39 = sub_10007400(
                      0xFFFF - v35,
                      &v34[v35],
                      L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                      v38,
                      v67,
                      v70,
                      v73,
                      v76,
                      L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                      257);
              sub_10007400(
                0xFFFF - (v39 + v35),
                &v34[v39 + v35],
                L"Stream_Channel::send(std::vector<Smart_Ptr<Binary_Stream> >& streams)  process Error:%d",
                v84);
              if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
                wprintf(L"%s", v34);
              if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
              {
                v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
                Outpop::Utility::Logger::write_file(v40);
              }
              LOBYTE(v97) = 8;
              Outpop::Utility::Lock::unlock(v83);
              v31 = this;
            }
            if ( *(_DWORD *)(v31 + 196) != -1 )
            {
              closesocket(*(_DWORD *)(v31 + 196));
              *(_DWORD *)(v31 + 196) = -1;
            }
            LOBYTE(v97) = 6;
            if ( v27 )
              Outpop::Utility::Ref_Object::release(v27);
            v97 = -1;
            LOBYTE(v4) = sub_1003BA70();
            return v4;
          }
        }
        Outpop::IONetwork::Stream_Protocol_Head_Process::make_head(
          &v84,
          &v80,
          0,
          *(unsigned __int8 *)(this + 193),
          *(_BYTE *)(this + 192),
          *(_DWORD *)(this + 160));
        LOBYTE(v97) = 8;
        if ( v84 )
          Outpop::Utility::Ref_Object::release(v84);
        sub_1000AC30((int)&v80, &v89);
        LOBYTE(v97) = 6;
        if ( v27 )
          Outpop::Utility::Ref_Object::release(v27);
        if ( i >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        i += 4;
        v21 = a2;
      }
      v41 = 0;
      if ( v90 && (int)(v91 - (_DWORD)v90) >> 2 )
      {
        if ( (unsigned int)((int)(v91 - (_DWORD)v90) >> 2) >= 0x200 )
        {
          v94 = 0;
          v95 = 0;
          v96 = 0;
          LOBYTE(v97) = 13;
          v42 = (unsigned int)v90;
          if ( (unsigned int)v90 > v91 )
            invalid_parameter_noinfo();
          for ( i = v42; ; i += 4 )
          {
            v43 = v91;
            if ( (unsigned int)v90 > v91 )
              invalid_parameter_noinfo();
            if ( i == v43 )
              break;
            if ( v41 >= 512 )
            {
              Outpop::IONetwork::Stream_Channel::send_unite_quence(&v93);
              v44 = v95;
              v45 = v94;
              v46 = v95;
              if ( v94 > v95 )
              {
                invalid_parameter_noinfo();
                v44 = v95;
                v45 = v94;
              }
              v47 = v45;
              if ( v45 > v44 )
                invalid_parameter_noinfo();
              sub_1000B2B0((int)&v93, &v85, (int)&v93, v47, (int)&v93, v46);
              v41 = 0;
            }
            ++v41;
            if ( i >= v91 )
              invalid_parameter_noinfo();
            v48 = i;
            sub_1000AC30(i, &v93);
            if ( v48 >= v91 )
              invalid_parameter_noinfo();
          }
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
          {
            v49 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            v85 = v49;
            Outpop::Utility::Lock::lock(v49);
            LOBYTE(v97) = 14;
            v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v51 = Outpop::Utility::Logger::get_log_buffer(v50);
            v52 = sub_10007400(0xFFFFu, v51, L"\n%s", L"LOG_WARNING");
            v77 = GetLastError();
            v74 = GetCurrentThreadId();
            v71 = GetCurrentProcessId();
            v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v68 = Outpop::Utility::Logger::make_tm(v53);
            v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v55 = Outpop::Utility::Logger::make_dt(v54);
            v56 = sub_10007400(
                    0xFFFF - v52,
                    &v51[v52],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    v55,
                    v68,
                    v71,
                    v74,
                    v77,
                    L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                    290)
                + v52;
            if ( v90 )
              v57 = (int)(v91 - (_DWORD)v90) >> 2;
            else
              v57 = 0;
            sub_10007400(0xFFFF - v56, &v51[v56], L"TCP  send  vectorsize is more than 512,size is %d", v57);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v51);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v58 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v58);
            }
            LOBYTE(v97) = 13;
            Outpop::Utility::Lock::unlock(v49);
          }
          LOBYTE(v97) = 6;
          sub_1003BA70();
        }
        else
        {
          Outpop::IONetwork::Stream_Channel::send_unite_quence(&v89);
        }
        v59 = v91;
        v60 = (unsigned int)v90;
        v61 = v91;
        if ( (unsigned int)v90 > v91 )
        {
          invalid_parameter_noinfo();
          v59 = v91;
          v60 = (unsigned int)v90;
        }
        v62 = v60;
        if ( v60 > v59 )
          invalid_parameter_noinfo();
        sub_1000B2B0((int)&v89, &v87, (int)&v89, v62, (int)&v89, v61);
      }
      v97 = -1;
      v63 = v90;
      if ( v90 )
      {
        v64 = (Outpop::Utility::Ref_Object **)v91;
        if ( v90 != (Outpop::Utility::Ref_Object **)v91 )
        {
          do
          {
            if ( *v63 )
              Outpop::Utility::Ref_Object::release(*v63);
            ++v63;
          }
          while ( v63 != v64 );
          v63 = v90;
        }
        operator delete(v63);
      }
      LOBYTE(v4) = 0;
    }
    else
    {
      v5 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
      if ( (unsigned int)v5 > *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      for ( j = v5; ; v5 = j )
      {
        v6 = *(Outpop::Utility::Stream_Base ***)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) > (unsigned int)v6 )
          invalid_parameter_noinfo();
        if ( v5 == v6 )
          break;
        v7 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
        v84 = v7;
        LOBYTE(v97) = 1;
        if ( v7 )
        {
          if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
            invalid_parameter_noinfo();
          v8 = Outpop::Utility::Stream_Base::get_totallength(*v5);
          Outpop::Utility::Binary_Stream::Binary_Stream(v7, v8 + 30);
          *(_DWORD *)v7 = &Outpop::Utility::Binary_Stream::`vftable';
        }
        else
        {
          v7 = 0;
        }
        LOBYTE(v97) = 0;
        v82 = v7;
        if ( v7 )
          Outpop::Utility::Ref_Object::addref(v7);
        LOBYTE(v97) = 2;
        Outpop::Utility::Stream_Base::move_write_pos(v7, 10);
        Outpop::Utility::Stream_Base::move_read_pos(v7, 10);
        if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        Outpop::Utility::Binary_Stream::set_all_protepoty(v7, v5);
        if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v9 = *v5;
        v81 = v9;
        if ( v9 )
          Outpop::Utility::Ref_Object::addref(v9);
        LOBYTE(v97) = 3;
        while ( v9 )
        {
          Outpop::Utility::Stream_Base::get_readable(v9);
          v10 = Outpop::Utility::Stream_Base::get_read_ptr(v9);
          Outpop::Utility::Stream_Base::write(v7, v10, v78);
          v11 = (Outpop::Utility::Thread_Mutex **)Outpop::Utility::Binary_Stream::cont(v9, &v80);
          LOBYTE(v97) = 4;
          Outpop::Utility::Ref_Object::release(v9);
          v9 = *v11;
          v81 = *v11;
          if ( v81 )
            Outpop::Utility::Ref_Object::addref(v9);
          LOBYTE(v97) = 3;
          if ( v80 )
            Outpop::Utility::Ref_Object::release(v80);
        }
        LOBYTE(v97) = 2;
        sub_1000AC30((int)&v82, (_DWORD *)(this + 212));
        LOBYTE(v97) = 0;
        if ( v7 )
          Outpop::Utility::Ref_Object::release(v7);
        if ( (unsigned int)j >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        ++j;
        v3 = v87;
      }
      v97 = -1;
      i = -1;
      LOBYTE(v4) = Outpop::Utility::Thread_Mutex::release(v3);
    }
  }
  return v4;
}
