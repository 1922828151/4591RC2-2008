/*
 * func-name: ?handle_read_stream@Connect_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1003eff0
 * callers: none
 * callees: 0x10004050, 0x100040d0, 0x100068e0, 0x10007400, 0x1000d260, 0x10035dd0, 0x1004e861, 0x1004f11e, 0x1004f124
 */

void __thiscall Outpop::IONetwork::Connect_Bluider_Process::handle_read_stream(int this, int *a2)
{
  Outpop::Utility::Stream_Base *v3; // ecx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *v5; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // eax
  int v10; // esi
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Stream_Base *v13; // ebp
  int readable; // eax
  Outpop::Utility::Lock *v15; // ebx
  Outpop::Utility::Logger *v16; // eax
  wchar_t *log_buffer; // edi
  int v18; // esi
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *dt; // eax
  int v22; // eax
  Outpop::Utility::Logger *v23; // eax
  int v24; // esi
  DWORD v25; // ebp
  unsigned __int16 v26; // bx
  int v27; // ecx
  wchar_t *v28; // [esp-18h] [ebp-180h]
  wchar_t *tm; // [esp-18h] [ebp-180h]
  DWORD v30; // [esp-14h] [ebp-17Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-17Ch]
  DWORD v32; // [esp-10h] [ebp-178h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-178h]
  DWORD v34; // [esp-Ch] [ebp-174h]
  DWORD v35; // [esp-Ch] [ebp-174h]
  Outpop::Utility::Lock *v36; // [esp+14h] [ebp-154h]
  DWORD LastError; // [esp+14h] [ebp-154h]
  DWORD pdwDataLen; // [esp+18h] [ebp-150h] BYREF
  _DWORD v39[2]; // [esp+1Ch] [ebp-14Ch] BYREF
  _BYTE v40[64]; // [esp+24h] [ebp-144h] BYREF
  int v41; // [esp+64h] [ebp-104h]
  int v42; // [esp+68h] [ebp-100h]
  char v43; // [esp+70h] [ebp-F8h] BYREF
  int v44; // [esp+71h] [ebp-F7h]
  int v45; // [esp+75h] [ebp-F3h]
  int v46; // [esp+79h] [ebp-EFh]
  int v47; // [esp+7Dh] [ebp-EBh]
  int v48; // [esp+81h] [ebp-E7h]
  int v49; // [esp+85h] [ebp-E3h]
  int v50; // [esp+89h] [ebp-DFh]
  char v51; // [esp+8Dh] [ebp-DBh]
  BYTE pbData[200]; // [esp+90h] [ebp-D8h] BYREF
  int v53; // [esp+164h] [ebp-4h]

  sub_10035DD0(*a2, (char *)v39);
  if ( v39[0] == 1 )
  {
    v3 = (Outpop::Utility::Stream_Base *)*a2;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    pdwDataLen = Outpop::Utility::Stream_Base::get_readable(v3);
    memset(pbData, 0, sizeof(pbData));
    if ( (int)Outpop::Utility::Stream_Base::get_readable((Outpop::Utility::Stream_Base *)*a2) <= 1000 )
    {
      v13 = (Outpop::Utility::Stream_Base *)*a2;
      readable = Outpop::Utility::Stream_Base::get_readable((Outpop::Utility::Stream_Base *)*a2);
      Outpop::Utility::Stream_Base::read(v13, (char *)pbData, readable);
      if ( CryptDecrypt(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 8) + 48) + 8), 0, 1, 0, pbData, &pdwDataLen) )
      {
        v24 = *(_DWORD *)pbData;
        if ( *(int *)pbData > 32 || *(int *)pbData <= 0 )
        {
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(*(_DWORD *)(this + 4));
        }
        else
        {
          v25 = pdwDataLen;
          v26 = *(_WORD *)&pbData[4];
          memcpy(&v43, &pbData[6], pdwDataLen - 6);
          Outpop::IONetwork::Security::first_set_deskey(
            *(Outpop::IONetwork::Security **)(this + 8),
            &v43,
            (char *)pbData,
            v25 - 6);
          Outpop::IONetwork::Crypto_Aes::create_aes_key(
            (Outpop::IONetwork::Crypto_Aes *)(*(_DWORD *)(this + 8) + 32),
            **(_DWORD **)(*(_DWORD *)(this + 8) + 48),
            (BYTE *)&v43,
            pdwDataLen - 6,
            v26);
          Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v40);
          v53 = 2;
          v27 = *(_DWORD *)(this + 4);
          v41 = *(_DWORD *)(this + 8);
          v42 = v24;
          *(_DWORD *)(this + 8) = 0;
          (*(void (__thiscall **)(int, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v27 + 20))(v27, v40, 0, 0);
          v53 = -1;
          Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v40);
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(*(_DWORD *)(this + 4));
        LastError = GetLastError();
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v15 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v39[1] = v15;
          Outpop::Utility::Lock::lock(v15);
          v53 = 1;
          v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v16);
          v18 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          v35 = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v19);
          v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v20);
          v22 = sub_10007400(
                  0xFFFF - v18,
                  &log_buffer[v18],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  v35,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
                  239);
          sub_10007400(
            0xFFFF - (v22 + v18),
            &log_buffer[v22 + v18],
            L"Connect_Bluider_Process::handle_read_stream  DeCryptDecrypt Error,errorcode is %d",
            LastError);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v23);
          }
          v53 = -1;
          Outpop::Utility::Lock::unlock(v15);
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(*(_DWORD *)(this + 4));
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v36 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v36);
        v53 = 0;
        v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v5 = Outpop::Utility::Logger::get_log_buffer(v4);
        v6 = sub_10007400(0xFFFFu, v5, L"\n%s", L"LOG_ERROR");
        v34 = GetLastError();
        v32 = GetCurrentThreadId();
        v30 = GetCurrentProcessId();
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v28 = Outpop::Utility::Logger::make_tm(v7);
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v9 = Outpop::Utility::Logger::make_dt(v8);
        v10 = sub_10007400(
                0xFFFF - v6,
                &v5[v6],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v9,
                v28,
                v30,
                v32,
                v34,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
                227)
            + v6;
        v11 = Outpop::Utility::Stream_Base::get_readable((Outpop::Utility::Stream_Base *)*a2);
        sub_10007400(
          0xFFFF - v10,
          &v5[v10],
          L"Connect_Bluider_Process::handle_read_stream error stream->get_readable() is %d",
          v11);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v5);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v12);
        }
        v53 = -1;
        Outpop::Utility::Lock::unlock(v36);
      }
    }
  }
}
