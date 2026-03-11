/*
 * func-name: ?catch_send@Stream_Channel@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10010440
 * callers: 0x10013430
 * callees: 0x10007400, 0x100091d0, 0x1000b220, 0x1000b2b0, 0x1000cc60, 0x10010b40, 0x1003c480, 0x1004e870
 */

int __thiscall Outpop::IONetwork::Stream_Channel::catch_send(int this, int a2)
{
  int v2; // edi
  Outpop::Utility::Stream_Base *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  int v12; // ebx
  Outpop::Utility::Stream_Base **v13; // esi
  Outpop::Utility::Stream_Base **v14; // eax
  Outpop::Utility::Thread_Mutex *v15; // edi
  char v16; // bl
  Outpop::Utility::Lock *v17; // ebx
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // edi
  int v20; // esi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  Outpop::Utility::Logger *v25; // eax
  int result; // eax
  int v27; // ecx
  unsigned int v28; // edi
  unsigned int v29; // esi
  bool v30; // cc
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // ebx
  int v34; // edi
  int v35; // esi
  Outpop::Utility::Stream_Base *v36; // ebx
  Outpop::Utility::Logger *v37; // eax
  wchar_t *v38; // edi
  int v39; // esi
  Outpop::Utility::Logger *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // eax
  int v43; // esi
  int v44; // eax
  int v45; // ecx
  Outpop::Utility::Logger *v46; // eax
  Outpop::Utility::Ref_Object **v47; // esi
  Outpop::Utility::Ref_Object **v48; // edi
  wchar_t *tm; // [esp-18h] [ebp-6Ch]
  wchar_t *v50; // [esp-18h] [ebp-6Ch]
  wchar_t *v51; // [esp-18h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-68h]
  DWORD v53; // [esp-14h] [ebp-68h]
  DWORD v54; // [esp-14h] [ebp-68h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-64h]
  DWORD v56; // [esp-10h] [ebp-64h]
  DWORD v57; // [esp-10h] [ebp-64h]
  DWORD LastError; // [esp-Ch] [ebp-60h]
  DWORD v59; // [esp-Ch] [ebp-60h]
  DWORD v60; // [esp-Ch] [ebp-60h]
  Outpop::Utility::Stream_Base **v62; // [esp+14h] [ebp-40h]
  int v63; // [esp+14h] [ebp-40h]
  Outpop::Utility::Stream_Base *v64; // [esp+18h] [ebp-3Ch] BYREF
  unsigned int v65; // [esp+20h] [ebp-34h]
  int v66; // [esp+24h] [ebp-30h] BYREF
  int v67; // [esp+2Ch] [ebp-28h] BYREF
  int v68; // [esp+34h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object **v69; // [esp+38h] [ebp-1Ch]
  unsigned int v70; // [esp+3Ch] [ebp-18h]
  int v71; // [esp+40h] [ebp-14h]
  int v72; // [esp+50h] [ebp-4h]

  v2 = this;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v3 = (Outpop::Utility::Stream_Base *)(Outpop::Utility::Logger::instance() + 144);
    v64 = v3;
    Outpop::Utility::Lock::lock(v3);
    v72 = 0;
    v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
    v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v7);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v8);
    v10 = sub_10007400(
            0xFFFF - v6,
            &log_buffer[v6],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
            299);
    sub_10007400(
      0xFFFF - (v10 + v6),
      &log_buffer[v10 + v6],
      L"Stream_Channel::catch_send  channel id is %d",
      *(_DWORD *)(this + 112));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v11);
    }
    v72 = -1;
    Outpop::Utility::Lock::unlock(v3);
    v2 = this;
  }
  v12 = a2;
  v13 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  if ( (unsigned int)v13 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v14 = *(Outpop::Utility::Stream_Base ***)(v12 + 8);
    v62 = v14;
    if ( *(_DWORD *)(v12 + 4) > (unsigned int)v14 )
    {
      invalid_parameter_noinfo();
      v14 = v62;
    }
    if ( v13 == v14 )
      break;
    if ( *(_BYTE *)(v2 + 192) )
    {
      v15 = (Outpop::Utility::Thread_Mutex *)(v2 + 132);
      Outpop::Utility::Thread_Mutex::acquire(v15);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 8) )
        invalid_parameter_noinfo();
      v16 = Outpop::IONetwork::Security_Processer::process(
              v13,
              *(_DWORD *)(this + 204),
              *(unsigned __int8 *)(this + 193));
      Outpop::Utility::Thread_Mutex::release(v15);
      if ( !v16 )
      {
        v64 = (Outpop::Utility::Stream_Base *)GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v17);
          v72 = 1;
          v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v19 = Outpop::Utility::Logger::get_log_buffer(v18);
          v20 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
          v59 = GetLastError();
          v56 = GetCurrentThreadId();
          v53 = GetCurrentProcessId();
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v50 = Outpop::Utility::Logger::make_tm(v21);
          v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v23 = Outpop::Utility::Logger::make_dt(v22);
          v24 = sub_10007400(
                  0xFFFF - v20,
                  &v19[v20],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v23,
                  v50,
                  v53,
                  v56,
                  v59,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
                  310);
          sub_10007400(0xFFFF - (v24 + v20), &v19[v24 + v20], L"Stream_Channel::catch_send  process Error %d", v64);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v19);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v25);
          }
          v72 = -1;
          Outpop::Utility::Lock::unlock(v17);
        }
        result = *(_DWORD *)(this + 196);
        if ( result != -1 )
        {
          result = closesocket(*(_DWORD *)(this + 196));
          *(_DWORD *)(this + 196) = -1;
        }
        return result;
      }
      v12 = a2;
      v2 = this;
    }
    if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    Outpop::IONetwork::Stream_Protocol_Head_Process::make_head(
      &v64,
      v13,
      0,
      *(unsigned __int8 *)(v2 + 193),
      *(_BYTE *)(v2 + 192),
      *(_DWORD *)(v2 + 160));
    v72 = -1;
    if ( v64 )
      Outpop::Utility::Ref_Object::release(v64);
    if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    ++v13;
  }
  v27 = *(_DWORD *)(v12 + 4);
  if ( !v27 || (unsigned int)((*(_DWORD *)(v12 + 8) - v27) >> 2) < 0x200 )
    return Outpop::IONetwork::Stream_Channel::send_unite_quence(v12);
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 3;
  v28 = *(_DWORD *)(v12 + 4);
  v63 = 0;
  if ( v28 > *(_DWORD *)(v12 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v29 = *(_DWORD *)(v12 + 8);
    v30 = *(_DWORD *)(v12 + 4) <= v29;
    v65 = v28;
    if ( !v30 )
      invalid_parameter_noinfo();
    if ( v28 == v29 )
      break;
    if ( v63 >= 512 )
    {
      Outpop::IONetwork::Stream_Channel::send_unite_quence(&v68);
      v31 = v70;
      v32 = (unsigned int)v69;
      v33 = v70;
      if ( (unsigned int)v69 > v70 )
      {
        invalid_parameter_noinfo();
        v31 = v70;
        v32 = (unsigned int)v69;
      }
      v34 = v32;
      if ( v32 > v31 )
        invalid_parameter_noinfo();
      sub_1000B2B0((int)&v68, &v66, (int)&v68, v34, (int)&v68, v33);
      v28 = v65;
      v12 = a2;
      v63 = 0;
    }
    ++v63;
    if ( v28 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    v35 = v70;
    if ( v69 && (int)(v70 - (_DWORD)v69) >> 2 < (unsigned int)((v71 - (int)v69) >> 2) )
    {
      LOBYTE(v64) = 0;
      sub_1003C480(v70, 1);
      v70 = v35 + 4;
    }
    else
    {
      if ( (unsigned int)v69 > v70 )
        invalid_parameter_noinfo();
      sub_1000B220((int)&v68, &v67, v28, (int)&v68, v35);
    }
    if ( v28 >= *(_DWORD *)(v12 + 8) )
      invalid_parameter_noinfo();
    v28 += 4;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) == 1 )
  {
    v36 = (Outpop::Utility::Stream_Base *)(Outpop::Utility::Logger::instance() + 144);
    v64 = v36;
    Outpop::Utility::Lock::lock(v36);
    LOBYTE(v72) = 4;
    v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v38 = Outpop::Utility::Logger::get_log_buffer(v37);
    v39 = sub_10007400(0xFFFFu, v38, L"\n%s", L"LOG_WARNING");
    v60 = GetLastError();
    v57 = GetCurrentThreadId();
    v54 = GetCurrentProcessId();
    v40 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v51 = Outpop::Utility::Logger::make_tm(v40);
    v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v42 = Outpop::Utility::Logger::make_dt(v41);
    v43 = sub_10007400(
            0xFFFF - v39,
            &v38[v39],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v42,
            v51,
            v54,
            v57,
            v60,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
            339)
        + v39;
    v44 = *(_DWORD *)(a2 + 4);
    if ( v44 )
      v45 = (*(_DWORD *)(a2 + 8) - v44) >> 2;
    else
      v45 = 0;
    sub_10007400(0xFFFF - v43, &v38[v43], L"TCP  send  vectorsize is more than 512,size is %d", v45);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v38);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v46);
    }
    LOBYTE(v72) = 3;
    Outpop::Utility::Lock::unlock(v36);
  }
  v72 = -1;
  v47 = v69;
  result = 0;
  if ( v69 )
  {
    v48 = (Outpop::Utility::Ref_Object **)v70;
    if ( v69 != (Outpop::Utility::Ref_Object **)v70 )
    {
      do
      {
        if ( *v47 )
          Outpop::Utility::Ref_Object::release(*v47);
        ++v47;
      }
      while ( v47 != v48 );
      v47 = v69;
    }
    operator delete(v47);
    return 0;
  }
  return result;
}
