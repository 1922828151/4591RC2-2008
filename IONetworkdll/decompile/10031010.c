/*
 * func-name: ?process_system_packet@Dgram_Channel@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10031010
 * callers: 0x1002f880
 * callees: 0x10007400, 0x1000ce40, 0x1002efa0, 0x10033240, 0x10033cf0, 0x10035a80, 0x1003ba70
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::process_system_packet(_DWORD *this, int a2)
{
  int v2; // ebx
  Outpop::Utility::Stream_Base **v3; // edi
  Outpop::Utility::Stream_Base **v4; // esi
  bool v5; // cc
  Outpop::Utility::Thread_Mutex *v6; // esi
  char v7; // bl
  bool v8; // cf
  char *v9; // esi
  Outpop::Utility::Lock *v10; // edi
  Outpop::Utility::Logger *v11; // eax
  wchar_t *v12; // ebx
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *v16; // eax
  int v17; // esi
  int v18; // ecx
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Lock *v20; // edi
  Outpop::Utility::Logger *v21; // eax
  wchar_t *log_buffer; // ebx
  int v23; // esi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *dt; // eax
  int v27; // eax
  Outpop::Utility::Logger *v28; // eax
  wchar_t *v29; // [esp-18h] [ebp-64h]
  wchar_t *tm; // [esp-18h] [ebp-64h]
  DWORD v31; // [esp-14h] [ebp-60h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-60h]
  DWORD v33; // [esp-10h] [ebp-5Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-5Ch]
  DWORD v35; // [esp-Ch] [ebp-58h]
  DWORD v36; // [esp-Ch] [ebp-58h]
  char v37; // [esp+17h] [ebp-35h] BYREF
  _DWORD *v38; // [esp+18h] [ebp-34h]
  DWORD LastError; // [esp+1Ch] [ebp-30h]
  Outpop::Utility::Lock *v40; // [esp+20h] [ebp-2Ch]
  Outpop::Utility::Stream_Base **v41; // [esp+28h] [ebp-24h]
  char v42[4]; // [esp+2Ch] [ebp-20h] BYREF
  int v43; // [esp+30h] [ebp-1Ch]
  int v44; // [esp+34h] [ebp-18h]
  int v45; // [esp+38h] [ebp-14h]
  int v46; // [esp+48h] [ebp-4h]

  v38 = this;
  v2 = a2;
  v3 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v4 = *(Outpop::Utility::Stream_Base ***)(v2 + 8);
    v5 = *(_DWORD *)(v2 + 4) <= (unsigned int)v4;
    v41 = v3;
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    if ( *((_BYTE *)v38 + 200) )
    {
      v6 = (Outpop::Utility::Thread_Mutex *)(v38 + 33);
      Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v38 + 33));
      if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 8) )
        invalid_parameter_noinfo();
      v7 = Outpop::IONetwork::Security_Processer::unprocess(v3, v38[45], *((unsigned __int8 *)v38 + 201));
      Outpop::Utility::Thread_Mutex::release(v6);
      if ( !v7 )
      {
        LastError = GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v20 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v40 = v20;
          Outpop::Utility::Lock::lock(v20);
          v46 = 0;
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v21);
          v23 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          v36 = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v24);
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v25);
          v27 = sub_10007400(
                  0xFFFF - v23,
                  &log_buffer[v23],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  v36,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
                  828);
          sub_10007400(
            0xFFFF - (v27 + v23),
            &log_buffer[v27 + v23],
            L"Dgram_Channel::process_system_packet unprocess Error:%d",
            LastError);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v28);
          }
          v46 = -1;
          Outpop::Utility::Lock::unlock(v20);
        }
        (*(void (__thiscall **)(_DWORD *))(*v38 + 24))(v38);
        return;
      }
      v2 = a2;
    }
    v8 = (unsigned int)v3 < *(_DWORD *)(v2 + 8);
    v37 = 0;
    if ( !v8 )
      invalid_parameter_noinfo();
    sub_10035A80(&v37);
    if ( v37 == 5 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 8) )
        invalid_parameter_noinfo();
      v9 = (char *)(v38 + 72);
      sub_10033240(v38 + 72, v3);
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 1;
      sub_10033CF0(v9, v42);
      if ( v43 && (v44 - v43) >> 2 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v10 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v40 = v10;
          Outpop::Utility::Lock::lock(v10);
          LOBYTE(v46) = 2;
          v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v12 = Outpop::Utility::Logger::get_log_buffer(v11);
          v13 = sub_10007400(0xFFFFu, v12, L"\n%s", L"LOG_DEBUG");
          v35 = GetLastError();
          v33 = GetCurrentThreadId();
          v31 = GetCurrentProcessId();
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v29 = Outpop::Utility::Logger::make_tm(v14);
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v16 = Outpop::Utility::Logger::make_dt(v15);
          v17 = sub_10007400(
                  0xFFFF - v13,
                  &v12[v13],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v16,
                  v29,
                  v31,
                  v33,
                  v35,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
                  847)
              + v13;
          if ( v43 )
            v18 = (v44 - v43) >> 2;
          else
            v18 = 0;
          sub_10007400(0xFFFF - v17, &v12[v17], L"Dgram_Channel::process_system_packet send:%d", v18);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v12);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v19);
          }
          LOBYTE(v46) = 1;
          Outpop::Utility::Lock::unlock(v10);
          v3 = v41;
        }
        Outpop::IONetwork::Dgram_Channel::send_unite_quence((int)v38, (int)v42);
      }
      v46 = -1;
      sub_1003BA70();
      v2 = a2;
    }
    if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 8) )
      invalid_parameter_noinfo();
    ++v3;
  }
}
