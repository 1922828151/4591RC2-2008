/*
 * func-name: ?handle_read_stream@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10040f80
 * callers: none
 * callees: 0x10003930, 0x10004050, 0x100040d0, 0x10005ae0, 0x100068e0, 0x10007400, 0x100088f0, 0x1000d260, 0x10035dd0, 0x10036b30, 0x1004e861, 0x1004f11e, 0x1004f124
 */

void __thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::handle_read_stream(
        int this,
        Outpop::Utility::Stream_Base **a2)
{
  Outpop::Utility::Logger *v3; // eax
  wchar_t *v4; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *v8; // eax
  int v9; // esi
  int readable; // eax
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Lock *v12; // ecx
  Outpop::Utility::Lock *v13; // ebx
  Outpop::Utility::Logger *v14; // eax
  wchar_t *log_buffer; // edi
  int v16; // esi
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *dt; // eax
  int v20; // eax
  Outpop::Utility::Logger *v21; // eax
  unsigned __int16 v22; // si
  unsigned int v23; // ebx
  Outpop::Utility::Ref_Object *v24; // ecx
  int *v25; // edi
  int v26; // eax
  wchar_t *tm; // [esp-24h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-20h] [ebp-58h]
  wchar_t *v29; // [esp-1Ch] [ebp-54h]
  DWORD CurrentThreadId; // [esp-1Ch] [ebp-54h]
  DWORD v31; // [esp-18h] [ebp-50h]
  DWORD v32; // [esp-18h] [ebp-50h]
  DWORD v33; // [esp-14h] [ebp-4Ch]
  Outpop::Utility::Ref_Object *v34[4]; // [esp-10h] [ebp-48h] BYREF
  int v35; // [esp+0h] [ebp-38h] BYREF
  _DWORD v36[2]; // [esp+14h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object **v37; // [esp+1Ch] [ebp-1Ch]
  unsigned int v38; // [esp+20h] [ebp-18h] BYREF
  Outpop::Utility::Lock *LastError; // [esp+24h] [ebp-14h]
  int *v40; // [esp+28h] [ebp-10h]
  int v41; // [esp+34h] [ebp-4h]
  _BYTE v42[36]; // [esp+38h] [ebp+0h] BYREF
  _BYTE v43[28]; // [esp+5Ch] [ebp+24h] BYREF
  int v44; // [esp+78h] [ebp+40h]
  Outpop::Utility::Lock *v45; // [esp+7Ch] [ebp+44h]
  _DWORD v46[50]; // [esp+84h] [ebp+4Ch] BYREF
  char v47; // [esp+14Ch] [ebp+114h] BYREF
  int v48; // [esp+14Dh] [ebp+115h]
  int v49; // [esp+151h] [ebp+119h]
  int v50; // [esp+155h] [ebp+11Dh]
  int v51; // [esp+159h] [ebp+121h]
  int v52; // [esp+15Dh] [ebp+125h]
  int v53; // [esp+161h] [ebp+129h]
  int v54; // [esp+165h] [ebp+12Dh]
  char v55; // [esp+169h] [ebp+131h]

  v40 = &v35;
  v36[1] = this;
  v41 = 0;
  Outpop::Utility::Stream_Base::move_read_pos(*a2, 1);
  sub_10035DD0((int)*a2, (char *)v36);
  if ( v36[0] == 1 )
  {
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v38 = 0;
    memset(v46, 0, sizeof(v46));
    sub_10035DD0((int)*a2, (char *)&v38);
    if ( (int)Outpop::Utility::Stream_Base::get_readable(*a2) <= 1000 )
    {
      Outpop::Utility::Stream_Base::read(*a2, (char *)v46, v38);
      if ( Outpop::IONetwork::CryptProv::DeCryptDecrypt(
             *(Outpop::IONetwork::CryptProv **)(*(_DWORD *)(this + 36) + 48),
             0,
             1,
             0,
             (BYTE *)v46,
             &v38) )
      {
        LastError = (Outpop::Utility::Lock *)v46[0];
        if ( v46[0] <= 32 && v46[0] > 0 )
        {
          v22 = v46[1];
          v23 = v38;
          memcpy(&v47, (char *)&v46[1] + 2, v38 - 6);
          Outpop::IONetwork::Security::first_set_deskey(
            *(Outpop::IONetwork::Security **)(this + 36),
            &v47,
            (char *)v46,
            v23 - 6);
          Outpop::IONetwork::Crypto_Aes::create_aes_key(
            (Outpop::IONetwork::Crypto_Aes *)(*(_DWORD *)(this + 36) + 32),
            **(_DWORD **)(*(_DWORD *)(this + 36) + 48),
            (BYTE *)&v47,
            v38 - 6,
            v22);
          Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v42);
          LOBYTE(v41) = 3;
          v44 = *(_DWORD *)(this + 36);
          v45 = LastError;
          Outpop::IONetwork::INET_Addr::operator=(v43, this + 8);
          *(_DWORD *)(this + 36) = 0;
          v34[0] = v24;
          v37 = v34;
          sub_10005AE0((Outpop::Utility::Ref_Object **)(this + 68), v34);
          LOBYTE(v41) = 4;
          v25 = *(int **)(this + 40);
          v26 = *v25;
          LOBYTE(v41) = 3;
          (*(void (__thiscall **)(int *, _BYTE *, _DWORD, _DWORD))(v26 + 24))(v25, v42, 0, 0);
          LOBYTE(v41) = 0;
          Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v42);
        }
      }
      else
      {
        LastError = (Outpop::Utility::Lock *)GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v13 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v37 = (Outpop::Utility::Ref_Object **)v13;
          Outpop::Utility::Lock::lock(v13);
          LOBYTE(v41) = 2;
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v14);
          v16 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          v32 = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v17);
          v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v18);
          v20 = sub_10007400(
                  0xFFFF - v16,
                  &log_buffer[v16],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  v32,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
                  612);
          sub_10007400(
            0xFFFF - (v20 + v16),
            &log_buffer[v20 + v16],
            L"Connect_Bluider_Process::handle_read_stream  DeCryptDecrypt Error,errorcode is %d",
            LastError);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v34[0] = (Outpop::Utility::Ref_Object *)log_buffer;
            v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v21);
          }
          LOBYTE(v41) = 0;
          v12 = v13;
          goto LABEL_11;
        }
      }
    }
    else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
            || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
           && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      LastError = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(LastError);
      LOBYTE(v41) = 1;
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v4 = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10007400(0xFFFFu, v4, L"\n%s", L"LOG_ERROR");
      v34[0] = (Outpop::Utility::Ref_Object *)GetLastError();
      v33 = GetCurrentThreadId();
      v31 = GetCurrentProcessId();
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v29 = Outpop::Utility::Logger::make_tm(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v8 = Outpop::Utility::Logger::make_dt(v7);
      v9 = sub_10007400(
             0xFFFF - v5,
             &v4[v5],
             L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
             v8,
             v29,
             v31,
             v33,
             v34[0],
             L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
             601)
         + v5;
      readable = Outpop::Utility::Stream_Base::get_readable(*a2);
      sub_10007400(
        0xFFFF - v9,
        &v4[v9],
        L"gram_Connect_Bluider_Process::handle_read_stream error stream->get_readable() is %d",
        readable);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v4);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v34[2] = (Outpop::Utility::Ref_Object *)v4;
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v11);
      }
      LOBYTE(v41) = 0;
      v12 = LastError;
LABEL_11:
      Outpop::Utility::Lock::unlock(v12);
    }
  }
}
