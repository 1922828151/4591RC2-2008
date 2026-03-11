/*
 * func-name: sub_100328D0
 * func-address: 0x100328d0
 * callers: 0x1002f880
 * callees: 0x10007400, 0x10009930, 0x10009a30, 0x100246d0, 0x100356a0, 0x10035b20, 0x1003da30, 0x100493d0, 0x10049970, 0x1004e870
 */

Outpop::Utility::Binary_Stream **__stdcall sub_100328D0(int a1, Outpop::Utility::Binary_Stream **a2, int a3)
{
  int v3; // edi
  Outpop::Utility::Lock *v4; // eax
  int *v5; // esi
  bool v6; // al
  Outpop::Utility::Binary_Stream **v7; // esi
  int v8; // ebx
  Outpop::Utility::Binary_Stream **v9; // ebp
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // edi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // ebp
  int v16; // ebx
  unsigned __int16 reliable_id; // ax
  Outpop::Utility::Logger *v18; // eax
  unsigned __int16 v19; // ax
  unsigned __int16 *v20; // edi
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // di
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // bp
  bool v25; // al
  int v26; // edi
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // edi
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // eax
  int v32; // ebp
  int v33; // ebx
  unsigned __int16 v34; // ax
  Outpop::Utility::Logger *v35; // eax
  int *v36; // eax
  Outpop::Utility::Lock *v37; // ebp
  int v38; // edi
  int v39; // eax
  Outpop::Utility::Binary_Stream *v40; // esi
  int v41; // ebp
  int *v42; // ebx
  int v43; // esi
  Outpop::Utility::Lock *v44; // ebp
  Outpop::Utility::Logger *v45; // eax
  wchar_t *v46; // esi
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  wchar_t *v49; // eax
  int v50; // edi
  Outpop::Utility::Logger *v51; // eax
  Outpop::Utility::Lock *v52; // edi
  Outpop::Utility::Logger *v53; // eax
  wchar_t *v54; // esi
  Outpop::Utility::Logger *v55; // eax
  Outpop::Utility::Logger *v56; // eax
  wchar_t *v57; // eax
  int v58; // eax
  Outpop::Utility::Logger *v59; // eax
  wchar_t *tm; // [esp-4h] [ebp-9Ch]
  wchar_t *v62; // [esp-4h] [ebp-9Ch]
  wchar_t *v63; // [esp-4h] [ebp-9Ch]
  wchar_t *v64; // [esp-4h] [ebp-9Ch]
  char v65; // [esp+17h] [ebp-81h] BYREF
  int *v66; // [esp+18h] [ebp-80h]
  Outpop::Utility::Lock *v67; // [esp+1Ch] [ebp-7Ch] BYREF
  int v68; // [esp+20h] [ebp-78h]
  _DWORD *v69; // [esp+24h] [ebp-74h] BYREF
  Outpop::Utility::Lock *v70; // [esp+28h] [ebp-70h] BYREF
  Outpop::Utility::Thread_Mutex *v71; // [esp+2Ch] [ebp-6Ch]
  int v72; // [esp+30h] [ebp-68h]
  int v73; // [esp+34h] [ebp-64h] BYREF
  int v74; // [esp+38h] [ebp-60h]
  Outpop::Utility::Lock *v75; // [esp+3Ch] [ebp-5Ch] BYREF
  int v76; // [esp+40h] [ebp-58h]
  _BYTE v77[8]; // [esp+44h] [ebp-54h] BYREF
  _DWORD v78[2]; // [esp+4Ch] [ebp-4Ch] BYREF
  int v79; // [esp+54h] [ebp-44h]
  _DWORD v80[2]; // [esp+58h] [ebp-40h] BYREF
  int v81; // [esp+60h] [ebp-38h] BYREF
  _DWORD v82[2]; // [esp+64h] [ebp-34h] BYREF
  _BYTE v83[12]; // [esp+6Ch] [ebp-2Ch] BYREF
  int v84; // [esp+78h] [ebp-20h] BYREF
  unsigned int v85; // [esp+7Ch] [ebp-1Ch]
  unsigned __int16 *v86; // [esp+80h] [ebp-18h]
  int v87; // [esp+84h] [ebp-14h]
  int v88; // [esp+94h] [ebp-4h]

  v3 = a3;
  v68 = 0;
  v4 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v5 = (int *)v4;
  v70 = v4;
  v88 = 1;
  if ( v4 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v4, 1000);
    *v5 = (int)&Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v5 = 0;
  }
  v66 = v5;
  LOBYTE(v88) = 0;
  v65 = 5;
  sub_10009930(v5, &v65);
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 2;
  v71 = (Outpop::Utility::Thread_Mutex *)(a1 + 52);
  v72 = 0;
  v6 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 52));
  v72 = v6 - 1;
  LOBYTE(v88) = 3;
  if ( v6 )
  {
    v7 = *(Outpop::Utility::Binary_Stream ***)(a3 + 4);
    if ( (unsigned int)v7 > *(_DWORD *)(a3 + 8) )
      invalid_parameter_noinfo();
    v8 = a3;
LABEL_8:
    v75 = (Outpop::Utility::Lock *)v8;
    while ( 1 )
    {
      v9 = *(Outpop::Utility::Binary_Stream ***)(v3 + 8);
      if ( *(_DWORD *)(v3 + 4) > (unsigned int)v9 )
        invalid_parameter_noinfo();
      if ( !v8 || v8 != v3 )
        invalid_parameter_noinfo();
      if ( v7 == v9 )
        break;
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v67 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v67);
        LOBYTE(v88) = 4;
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v12);
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v13);
        v15 = sub_10007400(0xFFFFu, log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
        if ( !v8 )
          invalid_parameter_noinfo();
        if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 8) )
          invalid_parameter_noinfo();
        v16 = *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112);
        reliable_id = Outpop::Utility::Binary_Stream::get_reliable_id(*v7);
        sub_10007400(
          0xFFFF - v15,
          &log_buffer[v15],
          L"channel   %d   recv  packet   reliable     id  is   %d",
          v16,
          reliable_id);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v18);
        }
        LOBYTE(v88) = 3;
        Outpop::Utility::Lock::unlock(v67);
        v8 = (int)v75;
      }
      if ( !v8 )
        invalid_parameter_noinfo();
      if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 8) )
        invalid_parameter_noinfo();
      v19 = Outpop::Utility::Binary_Stream::get_reliable_id(*v7);
      v20 = v86;
      v69 = (_DWORD *)v19;
      if ( v85 && (int)((int)v86 - v85) >> 1 < (unsigned int)((int)(v87 - v85) >> 1) )
      {
        *v86 = v19;
        v86 = v20 + 1;
      }
      else
      {
        if ( v85 > (unsigned int)v86 )
          invalid_parameter_noinfo();
        sub_100356A0(v77, &v69, &v84, v20);
      }
      if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 8) )
        invalid_parameter_noinfo();
      v21 = Outpop::Utility::Binary_Stream::get_reliable_id(*v7);
      v22 = *(_WORD *)(a1 + 148);
      if ( v21 <= v22 )
        v23 = v22 - v21;
      else
        v23 = v21 - v22;
      if ( v23 )
      {
        v24 = *(_WORD *)(a1 + 150);
        if ( v23 <= v24 )
        {
          if ( v23 >= v24 )
            goto LABEL_58;
          v25 = v21 > v22;
        }
        else
        {
          v25 = v21 < v22;
        }
        if ( !v25 )
        {
LABEL_58:
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
          {
            v70 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            Outpop::Utility::Lock::lock(v70);
            LOBYTE(v88) = 16;
            v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v28 = Outpop::Utility::Logger::get_log_buffer(v27);
            v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v62 = Outpop::Utility::Logger::make_tm(v29);
            v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            v31 = Outpop::Utility::Logger::make_dt(v30);
            v32 = sub_10007400(0xFFFFu, v28, L"\nLOGINFO %s:%s Message:", v31, v62);
            if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 8) )
              invalid_parameter_noinfo();
            v33 = *(_DWORD *)(*(_DWORD *)(a1 + 144) + 112);
            v34 = Outpop::Utility::Binary_Stream::get_reliable_id(*v7);
            sub_10007400(
              0xFFFF - v32,
              &v28[v32],
              L"channel   %d  Reliable_Container::make_stream_ack  pakcet is  resend  id  is   %d",
              v33,
              v34);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", v28);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v35);
            }
            LOBYTE(v88) = 3;
            Outpop::Utility::Lock::unlock(v70);
            v8 = (int)v75;
          }
          v36 = sub_100246D0(a3, v78, v8, v7);
          v8 = *v36;
          v7 = (Outpop::Utility::Binary_Stream **)v36[1];
          v3 = a3;
          goto LABEL_8;
        }
      }
      v26 = v22 + 1;
      if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 8) )
        invalid_parameter_noinfo();
      if ( v26 == (unsigned __int16)Outpop::Utility::Binary_Stream::get_reliable_id(*v7) )
      {
        ++*(_WORD *)(a1 + 148);
      }
      else
      {
        Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)&v73);
        LOBYTE(v88) = 6;
        if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 8) )
          invalid_parameter_noinfo();
        LOWORD(v79) = Outpop::Utility::Binary_Stream::get_reliable_id(*v7);
        v80[0] = v73;
        v80[1] = v74;
        LOWORD(v81) = v79;
        v82[0] = v73;
        v82[1] = v74;
        LOBYTE(v88) = 10;
        sub_100493D0(a1 + 76, v83, &v81);
        v69 = v82;
        LOBYTE(v88) = 8;
        Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v82);
        v69 = v80;
        LOBYTE(v88) = 6;
        Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v80);
        LOBYTE(v88) = 3;
        Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v73);
      }
      if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 8) )
        invalid_parameter_noinfo();
      v3 = a3;
      ++v7;
    }
    if ( *(_DWORD *)(a1 + 88) )
    {
      v67 = (Outpop::Utility::Lock *)(a1 + 80);
      do
      {
        v70 = (Outpop::Utility::Lock *)(unsigned __int16)(*(_WORD *)(a1 + 148) + 1);
        sub_1003DA30(&v75, &v70);
        v37 = v75;
        v38 = *((_DWORD *)v67 + 1);
        if ( !v75 || v75 != v67 )
          invalid_parameter_noinfo();
        v39 = v76;
        if ( v76 == v38 )
          break;
        ++*(_WORD *)(a1 + 148);
        sub_10049970(v78, v37, v39);
      }
      while ( *(_DWORD *)(a1 + 88) );
    }
    v40 = (Outpop::Utility::Binary_Stream *)v66;
    sub_10035B20(v66);
    if ( *(_DWORD *)(a1 + 88) )
    {
      v41 = a1;
      v42 = **(int ***)(a1 + 84);
      v43 = a1 + 80;
      while ( v42 != *(int **)(v43 + 4) )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
        {
          v44 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v70 = v44;
          Outpop::Utility::Lock::lock(v44);
          LOBYTE(v88) = 17;
          v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v46 = Outpop::Utility::Logger::get_log_buffer(v45);
          v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v63 = Outpop::Utility::Logger::make_tm(v47);
          v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v49 = Outpop::Utility::Logger::make_dt(v48);
          v50 = sub_10007400(0xFFFFu, v46, L"\nLOGINFO %s:%s Message:", v49, v63);
          if ( v42 == *(int **)(a1 + 84) )
            invalid_parameter_noinfo();
          sub_10007400(
            0xFFFF - v50,
            &v46[v50],
            L"reliab_up_stream_hash_map_   have   stream, id  is %d",
            *((unsigned __int16 *)v42 + 4));
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v46);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v51);
          }
          LOBYTE(v88) = 3;
          Outpop::Utility::Lock::unlock(v44);
          v41 = a1;
        }
        v43 = v41 + 80;
        if ( v42 == *(int **)(v41 + 84) )
          invalid_parameter_noinfo();
        v42 = (int *)*v42;
      }
      v67 = (Outpop::Utility::Lock *)(unsigned __int16)(*(_WORD *)(v41 + 148) + 1);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
      {
        v52 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v70 = v52;
        Outpop::Utility::Lock::lock(v52);
        LOBYTE(v88) = 18;
        v53 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v54 = Outpop::Utility::Logger::get_log_buffer(v53);
        v55 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v64 = Outpop::Utility::Logger::make_tm(v55);
        v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v57 = Outpop::Utility::Logger::make_dt(v56);
        v58 = sub_10007400(0xFFFFu, v54, L"\nLOGINFO %s:%s Message:", v57, v64);
        sub_10007400(
          0xFFFF - v58,
          &v54[v58],
          L"Reliable_Container::make_stream_ack want to requst stream id is %d",
          (unsigned __int16)v67);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v54);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v59 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v59);
        }
        LOBYTE(v88) = 3;
        Outpop::Utility::Lock::unlock(v52);
      }
      v40 = (Outpop::Utility::Binary_Stream *)v66;
      sub_10009A30(v66, (const char *)&v67);
    }
    Outpop::Utility::Binary_Stream::sequence(v40, 2);
    Outpop::Utility::Binary_Stream::set_reliable(v40, 0);
    *a2 = v40;
    if ( v40 )
      Outpop::Utility::Ref_Object::addref(v40);
    v68 = 1;
    LOBYTE(v88) = 2;
    v72 = -1;
    Outpop::Utility::Thread_Mutex::release(v71);
    LOBYTE(v88) = 0;
    if ( v85 )
      operator delete(v85);
    v85 = 0;
    v86 = 0;
    v87 = 0;
    return a2;
  }
  else
  {
    *a2 = 0;
    v68 = 1;
    LOBYTE(v88) = 0;
    if ( v85 )
      operator delete(v85);
    return a2;
  }
}
