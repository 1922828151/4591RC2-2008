/*
 * func-name: ?parse_stream_head@Stream_Channel@IONetwork@Outpop@@QAE_NAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10013cb0
 * callers: 0x100117b0
 * callees: 0x10007400, 0x100093b0, 0x1000b220, 0x1003c480, 0x1004f11e
 */

char __thiscall Outpop::IONetwork::Stream_Channel::parse_stream_head(
        _DWORD **this,
        Outpop::Utility::Stream_Base **a2,
        _DWORD *a3)
{
  int length; // ebx
  int v4; // edi
  Outpop::Utility::Stream_Base *v5; // ebx
  const char *v6; // eax
  char *v7; // eax
  unsigned __int8 v8; // bl
  int i; // ecx
  int j; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  unsigned int v14; // ebx
  Outpop::Utility::Logger *v15; // eax
  wchar_t *log_buffer; // edi
  int v17; // esi
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *dt; // eax
  int v21; // eax
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // edi
  int v26; // esi
  Outpop::Utility::Logger *v27; // eax
  Outpop::Utility::Logger *v28; // eax
  wchar_t *v29; // eax
  int v30; // eax
  Outpop::Utility::Logger *v31; // eax
  int v32; // eax
  Outpop::Utility::Stream_Base *v33; // ecx
  int v34; // eax
  Outpop::Utility::Stream_Base *v35; // edi
  int v36; // ebx
  char *v37; // eax
  Outpop::Utility::Stream_Base *v38; // edi
  Outpop::Utility::Lock *ptr; // eax
  int readable; // eax
  Outpop::Utility::Stream_Base *v41; // edi
  int v42; // ebx
  char *v43; // eax
  wchar_t *tm; // [esp-Ch] [ebp-5Ch]
  wchar_t *v45; // [esp-Ch] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-8h] [ebp-58h]
  DWORD v47; // [esp-8h] [ebp-58h]
  DWORD CurrentThreadId; // [esp-4h] [ebp-54h]
  DWORD v49; // [esp-4h] [ebp-54h]
  DWORD LastError; // [esp+0h] [ebp-50h]
  DWORD v51; // [esp+0h] [ebp-50h]
  char *v52; // [esp+4h] [ebp-4Ch]
  char *v53; // [esp+4h] [ebp-4Ch]
  size_t v54; // [esp+8h] [ebp-48h]
  size_t v55; // [esp+8h] [ebp-48h]
  int v56; // [esp+Ch] [ebp-44h]
  unsigned __int8 v57; // [esp+20h] [ebp-30h]
  unsigned __int8 v58; // [esp+20h] [ebp-30h]
  Outpop::Utility::Ref_Object *v59; // [esp+24h] [ebp-2Ch] BYREF
  int v60; // [esp+28h] [ebp-28h] BYREF
  _DWORD **v61; // [esp+2Ch] [ebp-24h]
  char *v62; // [esp+30h] [ebp-20h]
  Outpop::Utility::Lock *base_ptr; // [esp+34h] [ebp-1Ch]
  int v64[3]; // [esp+38h] [ebp-18h] BYREF
  int v65; // [esp+4Ch] [ebp-4h]

  v61 = this;
  length = Outpop::IONetwork::Stream_Protocol_Head_Process::get_length(a2, &v60);
  v4 = v60 + length;
  if ( !length )
  {
LABEL_24:
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      base_ptr = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(base_ptr);
      v65 = 0;
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v15);
      v17 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v18);
      v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v19);
      v21 = sub_10007400(
              0xFFFF - v17,
              &log_buffer[v17],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
              732);
      sub_10007400(
        0xFFFF - (v21 + v17),
        &log_buffer[v21 + v17],
        L"Stream_Channel::parse_stream_head   data_len error:%d",
        length);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v22);
      }
      v65 = -1;
      Outpop::Utility::Lock::unlock(base_ptr);
    }
    return 0;
  }
  while ( 1 )
  {
    if ( v4 > 0x100000 )
      goto LABEL_24;
    if ( Outpop::Utility::Stream_Base::get_readable(*a2) < v4 )
    {
      v38 = *a2;
      base_ptr = (Outpop::Utility::Lock *)Outpop::Utility::Stream_Base::get_base_ptr(*a2);
      ptr = (Outpop::Utility::Lock *)Outpop::Utility::Stream_Base::get_read_ptr(v38);
      if ( ptr != base_ptr )
      {
        readable = Outpop::Utility::Stream_Base::get_readable(*a2);
        v41 = *a2;
        v42 = readable;
        v55 = Outpop::Utility::Stream_Base::get_readable(*a2);
        v53 = Outpop::Utility::Stream_Base::get_read_ptr(v41);
        v43 = Outpop::Utility::Stream_Base::get_base_ptr(v41);
        memcpy(v43, v53, v55);
        Outpop::Utility::Stream_Base::reset_all(*a2);
        Outpop::Utility::Stream_Base::move_write_pos(*a2, v42);
      }
      return 1;
    }
    (*(void (__thiscall **)(_DWORD *, Outpop::Utility::Ref_Object **, int))(*v61[29] + 12))(v61[29], &v59, v4 + 8);
    v65 = 1;
    Outpop::Utility::Binary_Stream::set_all_protepoty(v59, a2);
    v5 = v59;
    v6 = Outpop::Utility::Stream_Base::get_read_ptr(*a2);
    if ( Outpop::Utility::Stream_Base::write(v5, v6, v56) == -1 )
      goto LABEL_41;
    if ( *((_BYTE *)v61 + 192) )
    {
      v57 = *((_BYTE *)v61 + 160);
      v7 = Outpop::Utility::Stream_Base::get_read_ptr(v59);
      v8 = 0;
      for ( i = 0; i < v60; ++i )
        v8 += v7[i];
      v62 = &v7[v60];
      for ( j = 0; j < v4 - v60 - 1; j += v57 )
        v8 += v62[j];
      Outpop::Utility::Stream_Base::move_write_pos(v59, -1);
      v58 = *Outpop::Utility::Stream_Base::get_write_ptr(v59);
      if ( v8 != v58 )
        break;
    }
    Outpop::Utility::Stream_Base::move_read_pos(v59, v60);
    Outpop::Utility::Stream_Base::move_read_pos(*a2, v4);
    v11 = a3[1];
    if ( v11 )
      v12 = (int)(a3[2] - v11) >> 2;
    else
      v12 = 0;
    if ( v11 && v12 < (int)(a3[3] - v11) >> 2 )
    {
      v13 = a3[2];
      LOBYTE(base_ptr) = 0;
      sub_1003C480(v13, 1);
      a3[2] = v13 + 4;
    }
    else
    {
      v14 = a3[2];
      if ( v11 > v14 )
        invalid_parameter_noinfo();
      sub_1000B220((int)a3, v64, (int)&v59, (int)a3, v14);
    }
    if ( (int)Outpop::Utility::Stream_Base::get_readable(*a2) < 5 )
    {
      v32 = Outpop::Utility::Stream_Base::get_readable(*a2);
      v33 = *a2;
      if ( v32 )
      {
        v34 = Outpop::Utility::Stream_Base::get_readable(v33);
        v35 = *a2;
        v36 = v34;
        v54 = Outpop::Utility::Stream_Base::get_readable(*a2);
        v52 = Outpop::Utility::Stream_Base::get_read_ptr(v35);
        v37 = Outpop::Utility::Stream_Base::get_base_ptr(v35);
        memcpy(v37, v52, v54);
        Outpop::Utility::Stream_Base::reset_all(*a2);
        Outpop::Utility::Stream_Base::move_write_pos(*a2, v36);
      }
      else
      {
        Outpop::Utility::Stream_Base::reset_all(v33);
      }
      v65 = -1;
      if ( v59 )
      {
        Outpop::Utility::Ref_Object::release(v59);
        return 1;
      }
      return 1;
    }
    v65 = -1;
    if ( v59 )
      Outpop::Utility::Ref_Object::release(v59);
    length = Outpop::IONetwork::Stream_Protocol_Head_Process::get_length(a2, &v60);
    v4 = v60 + length;
    if ( !length )
      goto LABEL_24;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    base_ptr = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(base_ptr);
    LOBYTE(v65) = 2;
    v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v25 = Outpop::Utility::Logger::get_log_buffer(v24);
    v26 = sub_10007400(0xFFFFu, v25, L"\n%s", L"LOG_ERROR");
    v51 = GetLastError();
    v49 = GetCurrentThreadId();
    v47 = GetCurrentProcessId();
    v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v45 = Outpop::Utility::Logger::make_tm(v27);
    v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v29 = Outpop::Utility::Logger::make_dt(v28);
    v30 = sub_10007400(
            0xFFFF - v26,
            &v25[v26],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v29,
            v45,
            v47,
            v49,
            v51,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
            759);
    sub_10007400(
      0xFFFF - (v30 + v26),
      &v25[v30 + v26],
      L"check  failed!  check_data is: %d,  recv_check_data  is: %d",
      v8,
      v58);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v25);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v31);
    }
    LOBYTE(v65) = 1;
    Outpop::Utility::Lock::unlock(base_ptr);
  }
LABEL_41:
  v65 = -1;
  if ( v59 )
    Outpop::Utility::Ref_Object::release(v59);
  return 0;
}
