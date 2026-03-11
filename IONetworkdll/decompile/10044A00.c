/*
 * func-name: ?process_system_packet@P2P_Channel@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10044a00
 * callers: 0x100440d0
 * callees: 0x10007400, 0x10035a80, 0x1003ba70, 0x100434b0, 0x10046320, 0x10047130, 0x10047c70, 0x1004b8f0
 */

int *__thiscall Outpop::IONetwork::P2P_Channel::process_system_packet(char *this, int a2)
{
  char *v2; // edi
  int v3; // esi
  int *v4; // ebx
  int *result; // eax
  bool v6; // cc
  bool v7; // cf
  Outpop::Utility::Lock *v8; // edi
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // ebx
  int v11; // eax
  int v12; // esi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *v15; // eax
  int v16; // esi
  int v17; // ecx
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *log_buffer; // ebx
  int v21; // eax
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *dt; // eax
  int v26; // esi
  char *v27; // ecx
  char *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Ref_Object *v30; // ecx
  Outpop::Utility::Ref_Object *v31; // ecx
  bool v32; // zf
  int v33; // ecx
  Outpop::Utility::Ref_Object *v34; // ecx
  wchar_t *v35; // [esp-18h] [ebp-6Ch]
  wchar_t *tm; // [esp-18h] [ebp-6Ch]
  DWORD v37; // [esp-14h] [ebp-68h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-68h]
  DWORD v39; // [esp-10h] [ebp-64h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-64h]
  DWORD v41; // [esp-Ch] [ebp-60h]
  DWORD LastError; // [esp-Ch] [ebp-60h]
  int v43; // [esp-4h] [ebp-58h] BYREF
  int v44; // [esp+14h] [ebp-40h] BYREF
  Outpop::Utility::Ref_Object *v45; // [esp+18h] [ebp-3Ch] BYREF
  int *v46; // [esp+1Ch] [ebp-38h]
  char *v47; // [esp+20h] [ebp-34h]
  Outpop::Utility::Lock *v48; // [esp+24h] [ebp-30h]
  Outpop::Utility::Lock *v49; // [esp+28h] [ebp-2Ch]
  int *v50; // [esp+30h] [ebp-24h]
  int v51; // [esp+34h] [ebp-20h] BYREF
  int v52; // [esp+38h] [ebp-1Ch]
  int v53; // [esp+3Ch] [ebp-18h]
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+50h] [ebp-4h]

  v2 = this;
  v47 = this;
  v3 = a2;
  v4 = *(int **)(a2 + 4);
  if ( (unsigned int)v4 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    result = *(int **)(v3 + 8);
    v6 = *(_DWORD *)(v3 + 4) <= (unsigned int)result;
    v50 = v4;
    v46 = result;
    if ( !v6 )
    {
      invalid_parameter_noinfo();
      result = v46;
    }
    if ( v4 == result )
      break;
    v7 = (unsigned int)v4 < *(_DWORD *)(v3 + 8);
    HIBYTE(v44) = 0;
    if ( !v7 )
      invalid_parameter_noinfo();
    sub_10035A80(*v4, (char *)&v44 + 3);
    switch ( HIBYTE(v44) )
    {
      case 2u:
        v33 = a2;
        if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v43 = v33;
        v34 = (Outpop::Utility::Ref_Object *)*v4;
        v32 = *v4 == 0;
        v46 = &v43;
        v43 = (int)v34;
        if ( !v32 )
          Outpop::Utility::Ref_Object::addref(v34);
        v55 = -1;
        Outpop::IONetwork::P2P_Channel::process_test_packet(v43);
        break;
      case 3u:
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v48 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v48);
          v55 = 3;
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v19);
          v21 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
          v43 = 526;
          v22 = v21;
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v23);
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v24);
          v26 = sub_10007400(
                  0xFFFF - v22,
                  &log_buffer[v22],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp")
              + v22;
          if ( *((_DWORD *)v2 + 172) < 0x10u )
            v27 = v2 + 668;
          else
            v27 = (char *)*((_DWORD *)v2 + 167);
          if ( *((_DWORD *)v2 + 165) < 0x10u )
            v28 = v2 + 640;
          else
            v28 = (char *)*((_DWORD *)v2 + 160);
          sub_10007400(
            0xFFFF - v26,
            &log_buffer[v26],
            L"P2P_Channel::process_system_packet  P2ploginact  localname is  %S,retomename is %S",
            v28,
            v27);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v43 = (int)log_buffer;
            v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v29);
          }
          v55 = -1;
          Outpop::Utility::Lock::unlock(v48);
          v4 = v50;
        }
        Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v2 + 132));
        if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v30 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v2 + 173);
        if ( v30 )
          Outpop::Utility::Ref_Object::release(v30);
        v31 = (Outpop::Utility::Ref_Object *)*v4;
        v32 = *v4 == 0;
        *((_DWORD *)v2 + 173) = *v4;
        if ( !v32 )
          Outpop::Utility::Ref_Object::addref(v31);
        *((_DWORD *)v2 + 154) = 0;
        Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(v2 + 132));
        if ( !v2[700] )
        {
          v2[700] = 1;
          v45 = (Outpop::Utility::Ref_Object *)v2;
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v2);
          v55 = 4;
          Outpop::IONetwork::P2PUdpBuilder::on_new_channel(&v45, v2 + 692);
          v55 = -1;
          if ( v45 )
            Outpop::Utility::Ref_Object::release(v45);
        }
        break;
      case 5u:
        if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        sub_10047130(v2 + 272, v4);
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        sub_10047C70(v2 + 272, &v51);
        if ( v52 && (v53 - v52) >> 2 )
        {
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
          {
            v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            v49 = v8;
            Outpop::Utility::Lock::lock(v8);
            LOBYTE(v55) = 1;
            v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v10 = Outpop::Utility::Logger::get_log_buffer(v9);
            v11 = sub_10007400(0xFFFFu, v10, L"\n%s", L"LOG_DEBUG");
            v43 = 514;
            v12 = v11;
            v41 = GetLastError();
            v39 = GetCurrentThreadId();
            v37 = GetCurrentProcessId();
            v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v35 = Outpop::Utility::Logger::make_tm(v13);
            v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v15 = Outpop::Utility::Logger::make_dt(v14);
            v16 = sub_10007400(
                    0xFFFF - v12,
                    &v10[v12],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    v15,
                    v35,
                    v37,
                    v39,
                    v41,
                    L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp")
                + v12;
            if ( v52 )
              v17 = (v53 - v52) >> 2;
            else
              v17 = 0;
            sub_10007400(0xFFFF - v16, &v10[v16], L"Dgram_Channel::process_system_packet send:%d", v17);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v10);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v43 = (int)v10;
              v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v18);
            }
            LOBYTE(v55) = 0;
            Outpop::Utility::Lock::unlock(v8);
            v2 = v47;
          }
          Outpop::IONetwork::P2P_Channel::send_unite_quence(v2, (int)&v51);
        }
        v55 = -1;
        sub_1003BA70(&v51);
        v4 = v50;
        break;
    }
    if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    v3 = a2;
    ++v4;
  }
  return result;
}
