/*
 * func-name: ?send@Dgram_Channel@IONetwork@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x1002e210
 * callers: none
 * callees: 0x10007400, 0x10009580, 0x1000b220, 0x1000cc60, 0x10023270, 0x1002efa0, 0x10032340, 0x10033f30, 0x1003c480, 0x1004e870
 */

unsigned int __thiscall Outpop::IONetwork::Dgram_Channel::send(Outpop::Utility::Stream_Base *this, int a2)
{
  struct in_addr *v2; // edi
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // ebx
  u_short v9; // ax
  char *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  int v12; // ebx
  Outpop::Utility::Stream_Base **v13; // esi
  Outpop::Utility::Stream_Base **v14; // esi
  Outpop::Utility::Lock *v15; // esi
  Outpop::Utility::Ref_Object **v16; // edi
  int totallength; // eax
  Outpop::Utility::Stream_Base *v18; // ebx
  Outpop::Utility::Ref_Object *v19; // esi
  const char *ptr; // eax
  Outpop::Utility::Ref_Object **v21; // edi
  Outpop::Utility::Stream_Base *v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  volatile signed __int16 *v26; // ecx
  int v27; // eax
  int v28; // eax
  Outpop::Utility::Binary_Stream *v29; // edi
  Outpop::Utility::Lock *v30; // esi
  Outpop::Utility::Lock *v31; // esi
  Outpop::Utility::Binary_Stream **v32; // esi
  Outpop::Utility::Logger *v33; // eax
  wchar_t *v34; // edi
  int v35; // eax
  int v36; // esi
  Outpop::Utility::Logger *v37; // eax
  Outpop::Utility::Logger *v38; // eax
  wchar_t *v39; // eax
  int v40; // eax
  Outpop::Utility::Logger *v41; // eax
  Outpop::Utility::Ref_Object **v42; // esi
  Outpop::Utility::Ref_Object **v43; // ebx
  Outpop::Utility::Ref_Object **v44; // esi
  Outpop::Utility::Ref_Object **v45; // ebx
  unsigned int result; // eax
  Outpop::Utility::Lock *v47; // ecx
  Outpop::Utility::Binary_Stream **v48; // esi
  Outpop::Utility::Binary_Stream **v49; // ebx
  Outpop::Utility::Binary_Stream *v50; // ecx
  ULONG v51; // ebx
  char sequence_id; // al
  LONG ack_stream; // eax
  Outpop::Utility::Logger *v54; // eax
  wchar_t *v55; // esi
  Outpop::Utility::Logger *v56; // eax
  Outpop::Utility::Logger *v57; // eax
  wchar_t *v58; // eax
  int v59; // eax
  Outpop::Utility::Logger *v60; // eax
  Outpop::Utility::Ref_Object **v61; // esi
  unsigned int v62; // ecx
  Outpop::Utility::Stream_Base **v63; // esi
  Outpop::Utility::Stream_Base **v64; // ebx
  Outpop::Utility::Binary_Stream *v65; // ebx
  char v66; // al
  LONG v67; // eax
  Outpop::Utility::Logger *v68; // eax
  wchar_t *v69; // esi
  Outpop::Utility::Logger *v70; // eax
  Outpop::Utility::Logger *v71; // eax
  wchar_t *v72; // eax
  int v73; // eax
  Outpop::Utility::Logger *v74; // eax
  Outpop::Utility::Ref_Object **v75; // esi
  Outpop::Utility::Ref_Object **v76; // edi
  Outpop::Utility::Ref_Object **v77; // esi
  Outpop::Utility::Ref_Object **v78; // edi
  wchar_t *tm; // [esp-10h] [ebp-B4h]
  DWORD CurrentProcessId; // [esp-Ch] [ebp-B0h]
  DWORD CurrentThreadId; // [esp-8h] [ebp-ACh]
  DWORD v82; // [esp-4h] [ebp-A8h]
  struct in_addr v83[5]; // [esp+4h] [ebp-A0h] BYREF
  int v84; // [esp+18h] [ebp-8Ch]
  Outpop::Utility::Stream_Base *v85; // [esp+1Ch] [ebp-88h] BYREF
  Outpop::Utility::Stream_Base *v86; // [esp+20h] [ebp-84h] BYREF
  Outpop::Utility::Lock *v87; // [esp+24h] [ebp-80h]
  Outpop::Utility::Ref_Object *v88; // [esp+28h] [ebp-7Ch]
  Outpop::Utility::Ref_Object *v89; // [esp+2Ch] [ebp-78h] BYREF
  Outpop::Utility::Stream_Base *v90; // [esp+30h] [ebp-74h] BYREF
  ULONG v91; // [esp+34h] [ebp-70h]
  ULONG v92; // [esp+38h] [ebp-6Ch]
  Outpop::Utility::Ref_Object *LastError; // [esp+3Ch] [ebp-68h] BYREF
  Outpop::Utility::Lock *v94; // [esp+40h] [ebp-64h]
  Outpop::Utility::Lock *v95; // [esp+44h] [ebp-60h]
  Outpop::Utility::Stream_Base *v96; // [esp+48h] [ebp-5Ch] BYREF
  Outpop::Utility::Stream_Base **v97; // [esp+4Ch] [ebp-58h]
  Outpop::Utility::Lock *v98; // [esp+50h] [ebp-54h]
  int v99; // [esp+54h] [ebp-50h] BYREF
  int v100; // [esp+5Ch] [ebp-48h] BYREF
  int v101; // [esp+64h] [ebp-40h] BYREF
  Outpop::Utility::Ref_Object **v102; // [esp+68h] [ebp-3Ch]
  Outpop::Utility::Lock *v103; // [esp+6Ch] [ebp-38h]
  int v104; // [esp+70h] [ebp-34h]
  int v105; // [esp+74h] [ebp-30h] BYREF
  Outpop::Utility::Ref_Object **v106; // [esp+78h] [ebp-2Ch]
  Outpop::Utility::Lock *v107; // [esp+7Ch] [ebp-28h]
  int v108; // [esp+80h] [ebp-24h]
  int v109; // [esp+84h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object **v110; // [esp+88h] [ebp-1Ch]
  Outpop::Utility::Lock *v111; // [esp+8Ch] [ebp-18h]
  int v112; // [esp+90h] [ebp-14h]
  int v113; // [esp+A0h] [ebp-4h]

  v2 = (struct in_addr *)this;
  v86 = this;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v87 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v87);
    v113 = 0;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v83[0].S_un.S_addr = (ULONG)Outpop::Utility::Logger::make_tm(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v6);
    v8 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, v83[0].S_un.S_addr);
    v9 = ntohs(v2[23].S_un.S_un_w.s_w2);
    v83[0] = v2[24];
    v85 = (Outpop::Utility::Stream_Base *)v9;
    v10 = inet_ntoa(v83[0]);
    sub_10007400(
      0xFFFF - v8,
      &log_buffer[v8],
      L"Dgram_Channel  send  vector channel id is %d,ip is %S,port is %d",
      v2[28].S_un.S_addr,
      v10,
      (unsigned __int16)v85);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v83[0].S_un.S_addr = (ULONG)log_buffer;
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    v113 = -1;
    Outpop::Utility::Lock::unlock(v87);
  }
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v113 = 2;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v12 = a2;
  v13 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  if ( (unsigned int)v13 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v97 = v13;
  while ( 1 )
  {
    v14 = *(Outpop::Utility::Stream_Base ***)(v12 + 8);
    if ( *(_DWORD *)(v12 + 4) > (unsigned int)v14 )
      invalid_parameter_noinfo();
    if ( v97 == v14 )
      break;
    v15 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v98 = v15;
    LOBYTE(v113) = 3;
    if ( v15 )
    {
      if ( (unsigned int)v97 >= *(_DWORD *)(v12 + 8) )
        invalid_parameter_noinfo();
      v16 = v97;
      totallength = Outpop::Utility::Stream_Base::get_totallength(*v97);
      Outpop::Utility::Binary_Stream::Binary_Stream(v15, totallength + 30);
      *(_DWORD *)v15 = &Outpop::Utility::Binary_Stream::`vftable';
      v18 = v15;
    }
    else
    {
      v16 = v97;
      v18 = 0;
    }
    LOBYTE(v113) = 2;
    v90 = v18;
    if ( v18 )
      Outpop::Utility::Ref_Object::addref(v18);
    LOBYTE(v113) = 4;
    if ( (unsigned int)v16 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    Outpop::Utility::Binary_Stream::set_all_protepoty(v18, v16);
    if ( (unsigned int)v16 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    v19 = *v16;
    v88 = *v16;
    if ( v88 )
      Outpop::Utility::Ref_Object::addref(v19);
    LOBYTE(v113) = 5;
    while ( v19 )
    {
      v83[0].S_un.S_addr = Outpop::Utility::Stream_Base::get_readable(v19);
      ptr = Outpop::Utility::Stream_Base::get_read_ptr(v19);
      Outpop::Utility::Stream_Base::write(v18, ptr, v83[1].S_un.S_addr);
      v21 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(v19, &v89);
      LOBYTE(v113) = 6;
      Outpop::Utility::Ref_Object::release(v19);
      v19 = *v21;
      v88 = *v21;
      if ( v88 )
        Outpop::Utility::Ref_Object::addref(v19);
      LOBYTE(v113) = 5;
      if ( v89 )
        Outpop::Utility::Ref_Object::release(v89);
    }
    LOBYTE(v113) = 4;
    v22 = v86;
    if ( *((_BYTE *)v86 + 200) )
    {
      Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Stream_Base *)((char *)v86 + 132));
      HIBYTE(v84) = Outpop::IONetwork::Security_Processer::process(
                      &v90,
                      *((_DWORD *)v22 + 45),
                      *((unsigned __int8 *)v22 + 201));
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Stream_Base *)((char *)v22 + 132));
      if ( !HIBYTE(v84) )
      {
        LastError = (Outpop::Utility::Ref_Object *)GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v94 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v94);
          LOBYTE(v113) = 7;
          v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v34 = Outpop::Utility::Logger::get_log_buffer(v33);
          v35 = sub_10007400(0xFFFFu, v34, L"\n%s", L"LOG_ERROR");
          v83[0].S_un.S_addr = 344;
          v36 = v35;
          v82 = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v37);
          v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v39 = Outpop::Utility::Logger::make_dt(v38);
          v40 = sub_10007400(
                  0xFFFF - v36,
                  &v34[v36],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v39,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  v82,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp");
          sub_10007400(0xFFFF - (v40 + v36), &v34[v40 + v36], L" Dgram_Channel::send  process  Error : %d", LastError);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v34);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v83[0].S_un.S_addr = (ULONG)v34;
            v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v41);
          }
          LOBYTE(v113) = 4;
          Outpop::Utility::Lock::unlock(v94);
          v22 = v86;
        }
        (*(void (__thiscall **)(Outpop::Utility::Stream_Base *))(*(_DWORD *)v22 + 24))(v22);
        LOBYTE(v113) = 2;
        if ( v18 )
          Outpop::Utility::Ref_Object::release(v18);
        LOBYTE(v113) = 1;
        v42 = v106;
        if ( v106 )
        {
          v43 = (Outpop::Utility::Ref_Object **)v107;
          if ( v106 != (Outpop::Utility::Ref_Object **)v107 )
          {
            do
            {
              if ( *v42 )
                Outpop::Utility::Ref_Object::release(*v42);
              ++v42;
            }
            while ( v42 != v43 );
            v42 = v106;
          }
          operator delete(v42);
        }
        v106 = 0;
        v107 = 0;
        v108 = 0;
        v113 = -1;
        v44 = v102;
        if ( v102 )
        {
          v45 = (Outpop::Utility::Ref_Object **)v103;
          if ( v102 != (Outpop::Utility::Ref_Object **)v103 )
          {
            do
            {
              if ( *v44 )
                Outpop::Utility::Ref_Object::release(*v44);
              ++v44;
            }
            while ( v44 != v45 );
            v44 = v102;
          }
          operator delete(v44);
        }
        result = 0;
        v102 = 0;
        v103 = 0;
        v104 = 0;
        return result;
      }
    }
    v23 = Outpop::Utility::Binary_Stream::sequence(v18);
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_51;
      v24 = Outpop::Utility::Binary_Stream::priority(v18) - 1;
      if ( v24 )
      {
        v25 = v24 - 2;
        if ( v25 )
        {
          if ( v25 != 2 )
            goto LABEL_51;
          v26 = (volatile signed __int16 *)((char *)v22 + 202);
        }
        else
        {
          v26 = (volatile signed __int16 *)((char *)v22 + 204);
        }
      }
      else
      {
        v26 = (volatile signed __int16 *)((char *)v22 + 206);
      }
    }
    else
    {
      v27 = Outpop::Utility::Binary_Stream::priority(v18) - 1;
      if ( v27 )
      {
        v28 = v27 - 2;
        if ( v28 )
        {
          if ( v28 != 2 )
            goto LABEL_51;
          v26 = (volatile signed __int16 *)((char *)v22 + 208);
        }
        else
        {
          v26 = (volatile signed __int16 *)((char *)v22 + 210);
        }
      }
      else
      {
        v26 = (volatile signed __int16 *)((char *)v22 + 212);
      }
    }
    Outpop::Utility::Binary_Stream::set_sequence_id(v18, _InterlockedIncrement16(v26));
LABEL_51:
    v98 = (Outpop::Utility::Lock *)v83;
    v83[0].S_un.S_addr = (ULONG)v18;
    if ( v18 )
      Outpop::Utility::Ref_Object::addref(v18);
    LOBYTE(v113) = 4;
    Outpop::IONetwork::Comminute_Container::conminute_stream(
      (volatile signed __int16 *)v22 + 110,
      (Outpop::Utility::Stream_Base *)v83[0].S_un.S_addr);
    v29 = v18;
    v85 = v18;
    if ( v18 )
      Outpop::Utility::Ref_Object::addref(v18);
    LOBYTE(v113) = 9;
    if ( v18 )
    {
      do
      {
        if ( Outpop::Utility::Binary_Stream::get_reliable(v29) )
        {
          if ( v102 && (v103 - (Outpop::Utility::Lock *)v102) >> 2 < (unsigned int)((v104 - (int)v102) >> 2) )
          {
            LOBYTE(v91) = 0;
            v83[0].S_un.S_addr = v91;
            v30 = v103;
            sub_1003C480(v103, 1);
            v103 = (Outpop::Utility::Lock *)((char *)v30 + 4);
          }
          else
          {
            v87 = v103;
            if ( v102 > (Outpop::Utility::Ref_Object **)v103 )
              invalid_parameter_noinfo();
            sub_1000B220((int)&v101, &v99, (int)&v85, (int)&v101, (int)v87);
          }
        }
        else if ( v106 && (v107 - (Outpop::Utility::Lock *)v106) >> 2 < (unsigned int)((v108 - (int)v106) >> 2) )
        {
          LOBYTE(v92) = 0;
          v83[0].S_un.S_addr = v92;
          v31 = v107;
          sub_1003C480(v107, 1);
          v107 = (Outpop::Utility::Lock *)((char *)v31 + 4);
        }
        else
        {
          v87 = v107;
          if ( v106 > (Outpop::Utility::Ref_Object **)v107 )
            invalid_parameter_noinfo();
          sub_1000B220((int)&v105, &v100, (int)&v85, (int)&v105, (int)v87);
        }
        v32 = (Outpop::Utility::Binary_Stream **)Outpop::Utility::Binary_Stream::cont(v29, &LastError);
        LOBYTE(v113) = 10;
        if ( v29 )
          Outpop::Utility::Ref_Object::release(v29);
        v29 = *v32;
        v85 = *v32;
        if ( v85 )
          Outpop::Utility::Ref_Object::addref(v29);
        LOBYTE(v113) = 9;
        if ( LastError )
          Outpop::Utility::Ref_Object::release(LastError);
      }
      while ( v29 );
    }
    LOBYTE(v113) = 4;
    if ( v29 )
      Outpop::Utility::Ref_Object::release(v29);
    LOBYTE(v113) = 2;
    if ( v18 )
      Outpop::Utility::Ref_Object::release(v18);
    if ( (unsigned int)v97 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    ++v97;
    v12 = a2;
    v2 = (struct in_addr *)v86;
  }
  result = (unsigned int)v102;
  if ( v102 )
  {
    v47 = v103;
    if ( (v103 - (Outpop::Utility::Lock *)v102) >> 2 )
    {
      v48 = v102;
      if ( v102 <= (Outpop::Utility::Ref_Object **)v103 )
        goto LABEL_113;
      invalid_parameter_noinfo();
      v47 = v103;
      while ( 1 )
      {
        result = (unsigned int)v102;
LABEL_113:
        v49 = (Outpop::Utility::Binary_Stream **)v47;
        if ( result > (unsigned int)v47 )
          invalid_parameter_noinfo();
        if ( v48 == v49 )
          break;
        v98 = (Outpop::Utility::Lock *)v83;
        v83[0].S_un.S_addr = 0;
        LOBYTE(v113) = 11;
        if ( v48 >= (Outpop::Utility::Binary_Stream **)v103 )
          invalid_parameter_noinfo();
        v50 = *v48;
        LOBYTE(v113) = 2;
        Outpop::Utility::Binary_Stream::cont(v50, v83[0].S_un.S_addr);
        v51 = (unsigned __int16)_InterlockedIncrement16((volatile signed __int16 *)&v2[48]);
        if ( v48 >= (Outpop::Utility::Binary_Stream **)v103 )
          invalid_parameter_noinfo();
        Outpop::Utility::Binary_Stream::set_reliable_id(*v48, v51);
        if ( v48 >= (Outpop::Utility::Binary_Stream **)v103 )
          invalid_parameter_noinfo();
        v94 = *v48;
        if ( v48 >= (Outpop::Utility::Binary_Stream **)v103 )
          invalid_parameter_noinfo();
        v83[0].S_un.S_addr = v51;
        sequence_id = Outpop::Utility::Binary_Stream::get_sequence_id(v94);
        Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(
          &v86,
          v48,
          0,
          v2[50].S_un.S_un_b.s_b2,
          0,
          sequence_id,
          v83[0].S_un.S_un_b.s_b1);
        LOBYTE(v113) = 2;
        if ( v86 )
          Outpop::Utility::Ref_Object::release(v86);
        v47 = v103;
        if ( v48 >= (Outpop::Utility::Binary_Stream **)v103 )
        {
          invalid_parameter_noinfo();
          v47 = v103;
        }
        ++v48;
      }
      v110 = 0;
      v111 = 0;
      v112 = 0;
      LOBYTE(v113) = 13;
      sub_10033F30(&v101, &v109);
      ack_stream = Outpop::IONetwork::Dgram_Channel::get_ack_stream(&v109);
      if ( ack_stream
        && !(InterlockedExchangeAdd((volatile LONG *)&v2[174], ack_stream) % 100)
        && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v95 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v95);
        LOBYTE(v113) = 14;
        v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v55 = Outpop::Utility::Logger::get_log_buffer(v54);
        v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v83[0].S_un.S_addr = (ULONG)Outpop::Utility::Logger::make_tm(v56);
        v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v58 = Outpop::Utility::Logger::make_dt(v57);
        v59 = sub_10007400(0xFFFFu, v55, L"\nLOGINFO %s:%s Message:", v58);
        sub_10007400(
          0xFFFF - v59,
          &v55[v59],
          L"Dgram_Channel::send(std::vector<Smart_Ptr<Binary_Stream> >& streams) reliable_container  send  ack  pakcet 1,c"
           "hannel id is %d,num is:%d",
          v2[28].S_un.S_addr,
          v2[174].S_un.S_addr);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v55);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v83[0].S_un.S_addr = (ULONG)v55;
          v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v60);
        }
        LOBYTE(v113) = 13;
        Outpop::Utility::Lock::unlock(v95);
      }
      result = (unsigned int)v110;
      if ( v110 && (v111 - (Outpop::Utility::Lock *)v110) >> 2 )
        result = Outpop::IONetwork::Dgram_Channel::send_unite_quence(&v109);
      LOBYTE(v113) = 2;
      v61 = v110;
      if ( v110 )
      {
        v95 = v111;
        if ( v110 != (Outpop::Utility::Ref_Object **)v111 )
        {
          do
          {
            if ( *v61 )
              Outpop::Utility::Ref_Object::release(*v61);
            ++v61;
          }
          while ( v61 != (Outpop::Utility::Ref_Object **)v95 );
          v61 = v110;
        }
        result = operator delete(v61);
      }
      v110 = 0;
      v111 = 0;
      v112 = 0;
    }
  }
  v62 = (unsigned int)v106;
  if ( v106 )
  {
    result = (unsigned int)v107;
    if ( (v107 - (Outpop::Utility::Lock *)v106) >> 2 )
    {
      v63 = v106;
      if ( v106 <= (Outpop::Utility::Ref_Object **)v107 )
        goto LABEL_155;
      invalid_parameter_noinfo();
      result = (unsigned int)v107;
      while ( 1 )
      {
        v62 = (unsigned int)v106;
LABEL_155:
        v64 = (Outpop::Utility::Stream_Base **)result;
        if ( v62 > result )
        {
          invalid_parameter_noinfo();
          result = (unsigned int)v107;
        }
        if ( v63 == v64 )
          break;
        if ( (unsigned int)v63 >= result )
        {
          invalid_parameter_noinfo();
          result = (unsigned int)v107;
        }
        v65 = *v63;
        if ( (unsigned int)v63 >= result )
          invalid_parameter_noinfo();
        v83[0].S_un.S_addr = 0;
        v66 = Outpop::Utility::Binary_Stream::get_sequence_id(v65);
        Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(
          &v96,
          v63,
          0,
          v2[50].S_un.S_un_b.s_b2,
          0,
          v66,
          v83[0].S_un.S_un_b.s_b1);
        LOBYTE(v113) = 2;
        if ( v96 )
          Outpop::Utility::Ref_Object::release(v96);
        result = (unsigned int)v107;
        if ( v63 >= (Outpop::Utility::Stream_Base **)v107 )
        {
          invalid_parameter_noinfo();
          result = (unsigned int)v107;
        }
        ++v63;
      }
      v67 = Outpop::IONetwork::Dgram_Channel::get_ack_stream(&v105);
      if ( v67
        && !(InterlockedExchangeAdd((volatile LONG *)&v2[174], v67) % 100)
        && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v98 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v98);
        LOBYTE(v113) = 16;
        v68 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v69 = Outpop::Utility::Logger::get_log_buffer(v68);
        v70 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v83[0].S_un.S_addr = (ULONG)Outpop::Utility::Logger::make_tm(v70);
        v71 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v72 = Outpop::Utility::Logger::make_dt(v71);
        v73 = sub_10007400(0xFFFFu, v69, L"\nLOGINFO %s:%s Message:", v72);
        sub_10007400(
          0xFFFF - v73,
          &v69[v73],
          L"Dgram_Channel::send(std::vector<Smart_Ptr<Binary_Stream> >& streams) reliable_container  send  ack  pakcet 2,num is:%d",
          v2[174].S_un.S_addr);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v69);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v83[0].S_un.S_addr = (ULONG)v69;
          v74 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v74);
        }
        LOBYTE(v113) = 2;
        Outpop::Utility::Lock::unlock(v98);
      }
      result = Outpop::IONetwork::Dgram_Channel::send_unite_quence(&v105);
    }
  }
  LOBYTE(v113) = 1;
  v75 = v106;
  if ( v106 )
  {
    v76 = (Outpop::Utility::Ref_Object **)v107;
    if ( v106 != (Outpop::Utility::Ref_Object **)v107 )
    {
      do
      {
        if ( *v75 )
          Outpop::Utility::Ref_Object::release(*v75);
        ++v75;
      }
      while ( v75 != v76 );
      v75 = v106;
    }
    result = operator delete(v75);
  }
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v113 = -1;
  v77 = v102;
  if ( v102 )
  {
    v78 = (Outpop::Utility::Ref_Object **)v103;
    if ( v102 != (Outpop::Utility::Ref_Object **)v103 )
    {
      do
      {
        if ( *v77 )
          Outpop::Utility::Ref_Object::release(*v77);
        ++v77;
      }
      while ( v77 != v78 );
      v77 = v102;
    }
    return operator delete(v77);
  }
  return result;
}
