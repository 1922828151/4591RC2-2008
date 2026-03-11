/*
 * func-name: sub_10033CF0
 * func-address: 0x10033cf0
 * callers: 0x10031010
 * callees: 0x10007400, 0x1000ac30, 0x1000aff0, 0x1000b040, 0x10034730
 */

char __stdcall sub_10033CF0(Outpop::Utility::Lock *a1, _DWORD *a2)
{
  Outpop::Utility::Lock *v2; // ebp
  Outpop::Utility::Thread_Mutex *v3; // esi
  unsigned int v4; // ecx
  unsigned int v6; // eax
  int v7; // ebx
  Outpop::Utility::Lock *v8; // edi
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Ref_Object *v16; // edi
  int reliable_id; // eax
  wchar_t *tm; // [esp-4h] [ebp-38h]
  int v19; // [esp+18h] [ebp-1Ch]
  int v20; // [esp+1Ch] [ebp-18h]
  Outpop::Utility::Thread_Mutex *v21; // [esp+20h] [ebp-14h]

  v2 = a1;
  v3 = (Outpop::Utility::Lock *)((char *)a1 + 52);
  v21 = (Outpop::Utility::Lock *)((char *)a1 + 52);
  if ( !Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Lock *)((char *)a1 + 52)) )
    return 0;
  v4 = *((_DWORD *)v2 + 3);
  if ( v4 )
  {
    v6 = *((_DWORD *)v2 + 29);
    if ( v4 < v6 )
    {
      v7 = v6 - v4;
      v20 = v6 - v4;
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        a1 = v8;
        Outpop::Utility::Lock::lock(v8);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v11);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v12);
        v14 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
        sub_10007400(
          0xFFFF - v14,
          &log_buffer[v14],
          L"channel  %d check_move_windows_size  i_count is %d,move_window_size_ is %d",
          *(_DWORD *)(*((_DWORD *)v2 + 36) + 112),
          v7,
          *((_DWORD *)v2 + 29));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        Outpop::Utility::Lock::unlock(v8);
      }
      v19 = 0;
      if ( v7 > 0 )
      {
        do
        {
          if ( !*((_DWORD *)v2 + 35) )
            break;
          v16 = *(Outpop::Utility::Ref_Object **)sub_1000AFF0((_DWORD *)v2 + 31);
          a1 = v16;
          if ( v16 )
            Outpop::Utility::Ref_Object::addref(v16);
          sub_1000B040((_DWORD *)v2 + 31);
          sub_1000AC30((int)&a1, a2);
          reliable_id = Outpop::Utility::Binary_Stream::get_reliable_id(v16);
          sub_10034730(v2, reliable_id, &a1);
          if ( v16 )
            Outpop::Utility::Ref_Object::release(v16);
          ++v19;
        }
        while ( v19 < v20 );
      }
    }
    Outpop::Utility::Thread_Mutex::release(v21);
    return 1;
  }
  else
  {
    Outpop::Utility::Thread_Mutex::release(v3);
    return 1;
  }
}
