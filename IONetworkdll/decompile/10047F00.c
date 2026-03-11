/*
 * func-name: sub_10047F00
 * func-address: 0x10047f00
 * callers: 0x10042eb0, 0x10043720
 * callees: 0x10007400, 0x1000ac30, 0x1000b090, 0x1000b2b0, 0x10015920, 0x10048940
 */

char __thiscall sub_10047F00(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  int v5; // eax
  Outpop::Utility::Logger *v6; // eax
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Binary_Stream **v15; // esi
  unsigned int v16; // ecx
  bool v17; // cc
  unsigned int v18; // esi
  Outpop::Utility::Binary_Stream **v19; // esi
  Outpop::Utility::Lock *v20; // eax
  int v21; // eax
  Outpop::Utility::Lock *v22; // eax
  Outpop::Utility::Binary_Stream **v23; // esi
  int v24; // eax
  unsigned int v25; // esi
  Outpop::Utility::Lock *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  int v28; // esi
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *dt; // eax
  int v32; // esi
  int v33; // eax
  int v34; // ebx
  Outpop::Utility::Logger *v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // ebx
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // esi
  unsigned int v42; // ecx
  Outpop::Utility::Binary_Stream *v43; // ecx
  Outpop::Utility::Ref_Object *v44; // ecx
  int v45; // edx
  Outpop::Utility::Ref_Object *v47; // esi
  int reliable_id; // eax
  unsigned int v49; // edx
  unsigned int v50; // ebx
  unsigned int v51; // edi
  wchar_t *v53; // [esp-18h] [ebp-54h]
  wchar_t *tm; // [esp-18h] [ebp-54h]
  DWORD v55; // [esp-14h] [ebp-50h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  DWORD v57; // [esp-10h] [ebp-4Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD v59; // [esp-Ch] [ebp-48h]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  Outpop::Utility::Binary_Stream *v61; // [esp+10h] [ebp-2Ch] BYREF
  wchar_t *log_buffer; // [esp+14h] [ebp-28h]
  Outpop::Utility::Lock *v63; // [esp+18h] [ebp-24h]
  int v64; // [esp+1Ch] [ebp-20h] BYREF
  Outpop::Utility::Binary_Stream **v65; // [esp+20h] [ebp-1Ch]
  Outpop::Utility::Thread_Mutex *v66; // [esp+24h] [ebp-18h]
  int v67; // [esp+28h] [ebp-14h]
  int v68; // [esp+38h] [ebp-4h]

  v3 = a2;
  v66 = (Outpop::Utility::Thread_Mutex *)(this + 13);
  v5 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 13)) - 1;
  v67 = v5;
  v68 = 0;
  if ( v5 != -1 )
  {
    if ( this[35] )
    {
      v25 = *(_DWORD *)(a2 + 4);
      if ( v25 > *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      while ( 1 )
      {
        v26 = *(Outpop::Utility::Lock **)(a2 + 8);
        v17 = *(_DWORD *)(a2 + 4) <= (unsigned int)v26;
        v63 = v26;
        if ( !v17 )
        {
          invalid_parameter_noinfo();
          v26 = v63;
        }
        if ( (Outpop::Utility::Lock *)v25 == v26 )
          break;
        if ( v25 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        sub_1000B090((int)(this + 31), v25);
        if ( v25 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v25 += 4;
      }
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v63 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v63);
        LOBYTE(v68) = 2;
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v27);
        v28 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v29);
        v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v30);
        v32 = sub_10007400(
                0xFFFF - v28,
                &log_buffer[v28],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
                378)
            + v28;
        v33 = *(_DWORD *)(a2 + 4);
        if ( v33 )
          v34 = (*(_DWORD *)(a2 + 8) - v33) >> 2;
        else
          v34 = 0;
        sub_10007400(
          0xFFFF - v32,
          &log_buffer[v32],
          L"Reliable_Container::reliable_send_stream 2  in_stream.size() is %d,move_window_size_ is %d,this->relibale_stea"
           "m_hash_map_.size() is  %d",
          v34,
          this[29],
          this[3]);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v35);
        }
        LOBYTE(v68) = 0;
        Outpop::Utility::Lock::unlock(v63);
      }
      v36 = this[3];
      v37 = this[29];
      if ( v37 > v36 )
      {
        log_buffer = 0;
        if ( v37 != v36 )
        {
          do
          {
            if ( !this[35] )
              break;
            v38 = this[34];
            if ( v38 > v38 + this[35] )
              invalid_parameter_noinfo();
            v39 = this[34] + this[35];
            v40 = v38 & 3;
            v41 = v38 >> 2;
            v63 = (Outpop::Utility::Lock *)v40;
            if ( v38 >= v39 )
            {
              invalid_parameter_noinfo();
              v40 = (unsigned int)v63;
            }
            v42 = this[33];
            if ( v42 <= v41 )
              v41 -= v42;
            v43 = *(Outpop::Utility::Binary_Stream **)(*(_DWORD *)(this[32] + 4 * v41) + 4 * v40);
            v61 = v43;
            if ( v43 )
              Outpop::Utility::Ref_Object::addref(v43);
            LOBYTE(v68) = 3;
            if ( this[35] )
            {
              v44 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[32] + 4 * (this[34] >> 2)) + 4 * (this[34] & 3));
              if ( v44 )
                Outpop::Utility::Ref_Object::release(v44);
              v45 = this[33];
              if ( (unsigned int)(4 * v45) <= ++this[34] )
                this[34] = 0;
              if ( this[35]-- == 1 )
                this[34] = 0;
            }
            sub_1000AC30((int)&v61, a3);
            v47 = v61;
            reliable_id = Outpop::Utility::Binary_Stream::get_reliable_id(v61);
            sub_10048940(reliable_id, &v61);
            LOBYTE(v68) = 0;
            if ( v47 )
              Outpop::Utility::Ref_Object::release(v47);
            v49 = this[29] - this[3];
            log_buffer = (wchar_t *)((char *)log_buffer + 1);
          }
          while ( (unsigned int)log_buffer < v49 );
        }
      }
    }
    else
    {
      log_buffer = (wchar_t *)(this[29] - this[3]);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v63 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v63);
        LOBYTE(v68) = 1;
        v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v61 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Logger::get_log_buffer(v6);
        v7 = sub_10007400(0xFFFFu, (wchar_t *)v61, L"\n%s", L"LOG_DEBUG");
        v59 = GetLastError();
        v57 = GetCurrentThreadId();
        v55 = GetCurrentProcessId();
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v53 = Outpop::Utility::Logger::make_tm(v8);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v10 = Outpop::Utility::Logger::make_dt(v9);
        v11 = sub_10007400(
                0xFFFF - v7,
                (wchar_t *)v61 + v7,
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v10,
                v53,
                v55,
                v57,
                v59,
                L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
                344)
            + v7;
        v12 = *(_DWORD *)(a2 + 4);
        if ( v12 )
          v13 = (*(_DWORD *)(a2 + 8) - v12) >> 2;
        else
          v13 = 0;
        sub_10007400(
          0xFFFF - v11,
          (wchar_t *)v61 + v11,
          L"Reliable_Container::reliable_send_stream 1  in_stream.size() is %d,send_alble_size is %d",
          v13,
          log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v61);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v14);
        }
        LOBYTE(v68) = 0;
        Outpop::Utility::Lock::unlock(v63);
      }
      v15 = *(Outpop::Utility::Binary_Stream ***)(a2 + 4);
      if ( v15 && (v16 = *(_DWORD *)(a2 + 8), (int)(v16 - (_DWORD)v15) >> 2 > (unsigned int)log_buffer) )
      {
        v61 = 0;
        if ( (unsigned int)v15 > v16 )
          invalid_parameter_noinfo();
        while ( 1 )
        {
          v22 = *(Outpop::Utility::Lock **)(v3 + 8);
          v17 = *(_DWORD *)(v3 + 4) <= (unsigned int)v22;
          v65 = v15;
          v63 = v22;
          if ( !v17 )
          {
            invalid_parameter_noinfo();
            v22 = v63;
          }
          if ( v15 == (Outpop::Utility::Binary_Stream **)v22 )
            break;
          v61 = (Outpop::Utility::Binary_Stream *)((char *)v61 + 1);
          if ( (int)v61 <= (int)log_buffer )
          {
            if ( (unsigned int)v65 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            sub_1000AC30((int)v65, a3);
            if ( (unsigned int)v65 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            if ( (unsigned int)v65 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            v24 = Outpop::Utility::Binary_Stream::get_reliable_id(*v65);
            sub_10048940(v24, v65);
            v23 = v65;
            v3 = a2;
          }
          else
          {
            v23 = v65;
            v3 = a2;
            if ( (unsigned int)v65 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            sub_1000B090((int)(this + 31), (int)v65);
          }
          if ( (unsigned int)v23 >= *(_DWORD *)(v3 + 8) )
            invalid_parameter_noinfo();
          v15 = v23 + 1;
        }
      }
      else
      {
        v63 = *(Outpop::Utility::Lock **)(a2 + 8);
        if ( v15 > (Outpop::Utility::Binary_Stream **)v63 )
          invalid_parameter_noinfo();
        v17 = *(_DWORD *)(a2 + 4) <= *(_DWORD *)(a2 + 8);
        log_buffer = *(wchar_t **)(a2 + 4);
        if ( !v17 )
          invalid_parameter_noinfo();
        v18 = a3[1];
        if ( v18 > a3[2] )
          invalid_parameter_noinfo();
        sub_10015920((int)a3, (int)a3, v18, a2, (int)log_buffer, a2, (int)v63);
        v19 = (Outpop::Utility::Binary_Stream **)a3[1];
        if ( (unsigned int)v19 > a3[2] )
          invalid_parameter_noinfo();
        while ( 1 )
        {
          v20 = (Outpop::Utility::Lock *)a3[2];
          v17 = a3[1] <= (unsigned int)v20;
          v63 = v20;
          if ( !v17 )
          {
            invalid_parameter_noinfo();
            v20 = v63;
          }
          if ( v19 == (Outpop::Utility::Binary_Stream **)v20 )
            break;
          if ( (unsigned int)v19 >= a3[2] )
          {
            invalid_parameter_noinfo();
            if ( (unsigned int)v19 >= a3[2] )
              invalid_parameter_noinfo();
          }
          v21 = Outpop::Utility::Binary_Stream::get_reliable_id(*v19);
          sub_10048940(v21, v19);
          if ( (unsigned int)v19 >= a3[2] )
            invalid_parameter_noinfo();
          ++v19;
        }
      }
    }
    v50 = *(_DWORD *)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) > v50 )
      invalid_parameter_noinfo();
    v51 = *(_DWORD *)(a2 + 4);
    if ( v51 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    sub_1000B2B0(a2, &v64, a2, v51, a2, v50);
    v68 = -1;
    v67 = -1;
    LOBYTE(v5) = Outpop::Utility::Thread_Mutex::release(v66);
  }
  return v5;
}
