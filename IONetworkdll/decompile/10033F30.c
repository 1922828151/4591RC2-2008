/*
 * func-name: sub_10033F30
 * func-address: 0x10033f30
 * callers: 0x1002d330, 0x1002e210
 * callees: 0x10007400, 0x1000ac30, 0x1000b090, 0x1000b2b0, 0x10015920, 0x10034730
 */

char __thiscall sub_10033F30(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // esi
  int v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Binary_Stream **v15; // ebx
  unsigned int v16; // ecx
  bool v17; // cc
  Outpop::Utility::Binary_Stream **v18; // esi
  Outpop::Utility::Lock *v19; // eax
  int v20; // eax
  Outpop::Utility::Lock *v21; // eax
  int v22; // eax
  unsigned int v23; // ebx
  Outpop::Utility::Lock *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *log_buffer; // ebx
  Outpop::Utility::Logger *v27; // eax
  Outpop::Utility::Logger *v28; // eax
  wchar_t *dt; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // esi
  Outpop::Utility::Logger *v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // esi
  unsigned int v40; // ecx
  Outpop::Utility::Binary_Stream *v41; // ecx
  Outpop::Utility::Ref_Object *v42; // ecx
  int v43; // edx
  Outpop::Utility::Ref_Object *v45; // esi
  int reliable_id; // eax
  unsigned int v47; // edx
  unsigned int v48; // ebx
  unsigned int v49; // edi
  wchar_t *v51; // [esp-4h] [ebp-40h]
  wchar_t *tm; // [esp-4h] [ebp-40h]
  Outpop::Utility::Binary_Stream *v53; // [esp+14h] [ebp-28h] BYREF
  Outpop::Utility::Lock *v54; // [esp+18h] [ebp-24h]
  Outpop::Utility::Lock *v55; // [esp+1Ch] [ebp-20h] BYREF
  Outpop::Utility::Thread_Mutex *v56; // [esp+24h] [ebp-18h]
  int v57; // [esp+28h] [ebp-14h]
  int v58; // [esp+38h] [ebp-4h]

  v3 = a2;
  v56 = (Outpop::Utility::Thread_Mutex *)(this + 13);
  v5 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 13)) - 1;
  v57 = v5;
  v58 = 0;
  if ( v5 != -1 )
  {
    if ( this[35] )
    {
      v23 = *(_DWORD *)(a2 + 4);
      if ( v23 > *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      while ( 1 )
      {
        v24 = *(Outpop::Utility::Lock **)(a2 + 8);
        v17 = *(_DWORD *)(a2 + 4) <= (unsigned int)v24;
        v55 = v24;
        if ( !v17 )
        {
          invalid_parameter_noinfo();
          v24 = v55;
        }
        if ( (Outpop::Utility::Lock *)v23 == v24 )
          break;
        if ( v23 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        sub_1000B090((int)(this + 31), v23);
        if ( v23 >= *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        v23 += 4;
      }
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v55 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v55);
        LOBYTE(v58) = 2;
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v25);
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v27);
        v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v28);
        v30 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
        v31 = *(_DWORD *)(a2 + 4);
        if ( v31 )
          v32 = (*(_DWORD *)(a2 + 8) - v31) >> 2;
        else
          v32 = 0;
        sub_10007400(
          0xFFFF - v30,
          &log_buffer[v30],
          L"Reliable_Container::reliable_send_stream 2  in_stream.size() is %d,move_window_size_ is %d,this->relibale_stea"
           "m_hash_map_.size() is  %d",
          v32,
          this[29],
          this[3]);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v33);
        }
        LOBYTE(v58) = 0;
        Outpop::Utility::Lock::unlock(v55);
      }
      v34 = this[3];
      v35 = this[29];
      if ( v35 > v34 )
      {
        v54 = 0;
        if ( v35 != v34 )
        {
          do
          {
            if ( !this[35] )
              break;
            v36 = this[34];
            if ( v36 > v36 + this[35] )
              invalid_parameter_noinfo();
            v37 = this[34] + this[35];
            v38 = v36 & 3;
            v39 = v36 >> 2;
            v55 = (Outpop::Utility::Lock *)v38;
            if ( v36 >= v37 )
            {
              invalid_parameter_noinfo();
              v38 = (unsigned int)v55;
            }
            v40 = this[33];
            if ( v40 <= v39 )
              v39 -= v40;
            v41 = *(Outpop::Utility::Binary_Stream **)(*(_DWORD *)(this[32] + 4 * v39) + 4 * v38);
            v53 = v41;
            if ( v41 )
              Outpop::Utility::Ref_Object::addref(v41);
            LOBYTE(v58) = 3;
            if ( this[35] )
            {
              v42 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[32] + 4 * (this[34] >> 2)) + 4 * (this[34] & 3));
              if ( v42 )
                Outpop::Utility::Ref_Object::release(v42);
              v43 = this[33];
              if ( (unsigned int)(4 * v43) <= ++this[34] )
                this[34] = 0;
              if ( this[35]-- == 1 )
                this[34] = 0;
            }
            sub_1000AC30((int)&v53, a3);
            v45 = v53;
            reliable_id = Outpop::Utility::Binary_Stream::get_reliable_id(v53);
            sub_10034730(this, reliable_id, &v53);
            LOBYTE(v58) = 0;
            if ( v45 )
              Outpop::Utility::Ref_Object::release(v45);
            v47 = this[29] - this[3];
            v54 = (Outpop::Utility::Lock *)((char *)v54 + 1);
          }
          while ( (unsigned int)v54 < v47 );
        }
      }
    }
    else
    {
      v53 = (Outpop::Utility::Binary_Stream *)(this[29] - this[3]);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v54 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v54);
        LOBYTE(v58) = 1;
        v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v7 = Outpop::Utility::Logger::get_log_buffer(v6);
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v51 = Outpop::Utility::Logger::make_tm(v8);
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v10 = Outpop::Utility::Logger::make_dt(v9);
        v11 = sub_10007400(0xFFFFu, v7, L"\nLOGINFO %s:%s Message:", v10, v51);
        v12 = *(_DWORD *)(a2 + 4);
        if ( v12 )
          v13 = (*(_DWORD *)(a2 + 8) - v12) >> 2;
        else
          v13 = 0;
        sub_10007400(
          0xFFFF - v11,
          &v7[v11],
          L"Reliable_Container::reliable_send_stream 1  in_stream.size() is %d,send_alble_size is %d",
          v13,
          v53);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v7);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v14);
        }
        LOBYTE(v58) = 0;
        Outpop::Utility::Lock::unlock(v54);
      }
      v15 = *(Outpop::Utility::Binary_Stream ***)(a2 + 4);
      if ( v15 && (v16 = *(_DWORD *)(a2 + 8), (int)(v16 - (_DWORD)v15) >> 2 > (unsigned int)v53) )
      {
        v54 = 0;
        if ( (unsigned int)v15 > v16 )
          invalid_parameter_noinfo();
        while ( 1 )
        {
          v21 = *(Outpop::Utility::Lock **)(v3 + 8);
          v17 = *(_DWORD *)(v3 + 4) <= (unsigned int)v21;
          v55 = v21;
          if ( !v17 )
          {
            invalid_parameter_noinfo();
            v21 = v55;
          }
          if ( v15 == (Outpop::Utility::Binary_Stream **)v21 )
            break;
          v54 = (Outpop::Utility::Lock *)((char *)v54 + 1);
          if ( (int)v54 <= (int)v53 )
          {
            if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            sub_1000AC30((int)v15, a3);
            if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            v22 = Outpop::Utility::Binary_Stream::get_reliable_id(*v15);
            sub_10034730(this, v22, v15);
            v3 = a2;
          }
          else
          {
            v3 = a2;
            if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 8) )
              invalid_parameter_noinfo();
            sub_1000B090((int)(this + 31), (int)v15);
          }
          if ( (unsigned int)v15 >= *(_DWORD *)(v3 + 8) )
            invalid_parameter_noinfo();
          ++v15;
        }
      }
      else
      {
        v54 = *(Outpop::Utility::Lock **)(a2 + 8);
        if ( v15 > (Outpop::Utility::Binary_Stream **)v54 )
          invalid_parameter_noinfo();
        v17 = *(_DWORD *)(a2 + 4) <= *(_DWORD *)(a2 + 8);
        v53 = *(Outpop::Utility::Binary_Stream **)(a2 + 4);
        if ( !v17 )
          invalid_parameter_noinfo();
        v17 = a3[1] <= a3[2];
        v55 = (Outpop::Utility::Lock *)a3[1];
        if ( !v17 )
          invalid_parameter_noinfo();
        sub_10015920((int)a3, (int)a3, (int)v55, a2, (int)v53, a2, (int)v54);
        v18 = (Outpop::Utility::Binary_Stream **)a3[1];
        if ( (unsigned int)v18 > a3[2] )
          invalid_parameter_noinfo();
        while ( 1 )
        {
          v19 = (Outpop::Utility::Lock *)a3[2];
          v17 = a3[1] <= (unsigned int)v19;
          v55 = v19;
          if ( !v17 )
          {
            invalid_parameter_noinfo();
            v19 = v55;
          }
          if ( v18 == (Outpop::Utility::Binary_Stream **)v19 )
            break;
          if ( (unsigned int)v18 >= a3[2] )
          {
            invalid_parameter_noinfo();
            if ( (unsigned int)v18 >= a3[2] )
              invalid_parameter_noinfo();
          }
          v20 = Outpop::Utility::Binary_Stream::get_reliable_id(*v18);
          sub_10034730(this, v20, v18);
          if ( (unsigned int)v18 >= a3[2] )
            invalid_parameter_noinfo();
          ++v18;
        }
      }
    }
    v48 = *(_DWORD *)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) > v48 )
      invalid_parameter_noinfo();
    v49 = *(_DWORD *)(a2 + 4);
    if ( v49 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    sub_1000B2B0(a2, &v55, a2, v49, a2, v48);
    v58 = -1;
    v57 = -1;
    LOBYTE(v5) = Outpop::Utility::Thread_Mutex::release(v56);
  }
  return v5;
}
