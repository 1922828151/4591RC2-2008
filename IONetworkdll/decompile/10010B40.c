/*
 * func-name: ?send_unite_quence@Stream_Channel@IONetwork@Outpop@@QAE_NAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10010b40
 * callers: 0x1000f9b0, 0x10010440
 * callees: 0x10007400, 0x10015700
 */

char __thiscall Outpop::IONetwork::Stream_Channel::send_unite_quence(void *this, int a2)
{
  bool v2; // cc
  Outpop::Utility::Ref_Object **v3; // ebx
  Outpop::Utility::Ref_Object **v4; // esi
  bool v5; // cf
  Outpop::Utility::Ref_Object **v6; // esi
  Outpop::Utility::Ref_Object *v7; // ecx
  bool v8; // zf
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Ref_Object *v10; // esi
  bool v11; // al
  Outpop::Utility::Stream_Base **v12; // ebx
  Outpop::Utility::Stream_Base *v13; // ebx
  SOCKET *v14; // esi
  int totallength; // eax
  Outpop::Utility::Stream_Base **v16; // ebx
  Outpop::Utility::Lock *v17; // ebx
  Outpop::Utility::Logger *v18; // eax
  wchar_t *log_buffer; // edi
  int v20; // eax
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *dt; // eax
  int v25; // eax
  Outpop::Utility::Logger *v26; // eax
  LONG v27; // eax
  wchar_t *tm; // [esp-18h] [ebp-54h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD v32; // [esp-Ch] [ebp-48h]
  const wchar_t *v33; // [esp-8h] [ebp-44h] BYREF
  _DWORD v34[5]; // [esp-4h] [ebp-40h] BYREF
  Outpop::Utility::Stream_Base **v35; // [esp+10h] [ebp-2Ch]
  DWORD LastError; // [esp+14h] [ebp-28h]
  SOCKET *v37; // [esp+18h] [ebp-24h]
  const wchar_t **v38; // [esp+1Ch] [ebp-20h]
  Outpop::Utility::Ref_Object **v39; // [esp+20h] [ebp-1Ch]
  Outpop::Utility::Thread_Mutex *v40; // [esp+24h] [ebp-18h]
  int v41; // [esp+28h] [ebp-14h]
  int v42; // [esp+38h] [ebp-4h]

  LastError = (DWORD)this;
  v2 = *(_DWORD *)(a2 + 4) <= *(_DWORD *)(a2 + 8);
  v35 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  if ( !v2 )
    invalid_parameter_noinfo();
  if ( *(_DWORD *)(a2 + 4) > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v3 = *(Outpop::Utility::Ref_Object ***)(a2 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v4 = *(Outpop::Utility::Ref_Object ***)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) > (unsigned int)v4 )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    v5 = (unsigned int)v3 < *(_DWORD *)(a2 + 8);
    v39 = v3;
    if ( !v5 )
      invalid_parameter_noinfo();
    v6 = *(Outpop::Utility::Ref_Object ***)(a2 + 8);
    ++v3;
    if ( *(_DWORD *)(a2 + 4) > (unsigned int)v6 )
      invalid_parameter_noinfo();
    if ( v3 == v6 )
    {
      v37 = v34;
      v34[0] = 0;
      v42 = 1;
      if ( !a2 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v39 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
    }
    else
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      v34[0] = this;
      v7 = *v3;
      v8 = *v3 == 0;
      v37 = v34;
      v34[0] = v7;
      if ( !v8 )
        Outpop::Utility::Ref_Object::addref(v7);
      v42 = 0;
      if ( !a2 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v39 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
    }
    v9 = *v39;
    v42 = -1;
    Outpop::Utility::Binary_Stream::cont(v9, v34[0]);
  }
  v10 = (Outpop::Utility::Ref_Object *)LastError;
  v40 = (Outpop::Utility::Thread_Mutex *)(LastError + 132);
  v41 = 0;
  v11 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(LastError + 132));
  v41 = v11 - 1;
  v42 = 2;
  if ( !v11 )
    return 0;
  v34[0] = 0;
  v38 = &v33;
  v33 = (const wchar_t *)v10;
  if ( v10 )
    Outpop::Utility::Ref_Object::addref(v10);
  LOBYTE(v42) = 3;
  v12 = v35;
  if ( (unsigned int)v35 >= *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v13 = *v12;
  if ( (unsigned int)v35 >= *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v14 = (SOCKET *)((char *)v10 + 196);
  v37 = v14;
  totallength = Outpop::Utility::Stream_Base::get_totallength(v13);
  v16 = v35;
  LOBYTE(v42) = 2;
  if ( sub_10015700(v14, v35, totallength, v33, v34[0]) == -1 )
  {
    LastError = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v38 = (const wchar_t **)v17;
      Outpop::Utility::Lock::lock(v17);
      LOBYTE(v42) = 4;
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v18);
      v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v34[0] = 367;
      v33 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp";
      v21 = v20;
      v32 = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v22);
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v23);
      v25 = sub_10007400(
              0xFFFF - v21,
              &log_buffer[v21],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              v32);
      sub_10007400(
        0xFFFF - (v25 + v21),
        &log_buffer[v25 + v21],
        L"Stream_Channel::send_unite_quence socket_.asynch_send2 Error:%d",
        LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v34[0] = log_buffer;
        v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v26);
      }
      LOBYTE(v42) = 2;
      Outpop::Utility::Lock::unlock(v17);
      v14 = v37;
    }
    if ( *v14 != -1 )
    {
      closesocket(*v14);
      *v14 = -1;
    }
  }
  else
  {
    if ( (unsigned int)v16 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    v27 = Outpop::Utility::Stream_Base::get_totallength(*v16);
    InterlockedExchangeAdd((volatile LONG *)(LastError + 188), v27);
  }
  v42 = -1;
  v41 = -1;
  Outpop::Utility::Thread_Mutex::release(v40);
  return 1;
}
