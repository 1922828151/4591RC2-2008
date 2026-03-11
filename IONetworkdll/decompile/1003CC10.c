/*
 * func-name: ?get_stream_from_container@Sequence_Container@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@00@Z
 * func-address: 0x1003cc10
 * callers: 0x10031440, 0x10044fe0
 * callees: 0x10009040, 0x1000ac30, 0x1003d790, 0x1003da30
 */

char __thiscall Outpop::IONetwork::Sequence_Container::get_stream_from_container(
        _WORD *this,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4)
{
  _WORD *v4; // edi
  int v5; // eax
  Outpop::Utility::Binary_Stream *v6; // ecx
  Outpop::Utility::Binary_Stream **v7; // ebx
  unsigned __int16 sequence_id; // ax
  _WORD *v9; // ebx
  _DWORD *v10; // edi
  int v11; // esi
  int v12; // ebx
  Outpop::Utility::Binary_Stream *v13; // ecx
  Outpop::Utility::Binary_Stream **v14; // ebx
  unsigned __int16 v15; // ax
  _WORD *v16; // ebx
  _DWORD *v17; // edi
  int v18; // esi
  int v19; // ebx
  Outpop::Utility::Binary_Stream *v20; // ecx
  Outpop::Utility::Binary_Stream **v21; // ebx
  unsigned __int16 v22; // ax
  _WORD *v23; // ebx
  _DWORD *v24; // edi
  int v25; // esi
  int v26; // ebx
  int v29; // [esp+14h] [ebp-68h] BYREF
  int v30; // [esp+18h] [ebp-64h] BYREF
  int v31; // [esp+1Ch] [ebp-60h] BYREF
  _WORD *v32; // [esp+20h] [ebp-5Ch]
  _WORD *v33; // [esp+24h] [ebp-58h]
  int v34; // [esp+28h] [ebp-54h]
  int v35; // [esp+2Ch] [ebp-50h]
  int v36; // [esp+30h] [ebp-4Ch]
  Outpop::Utility::Thread_Mutex *v37; // [esp+34h] [ebp-48h]
  int v38; // [esp+38h] [ebp-44h]
  _WORD *v39; // [esp+3Ch] [ebp-40h] BYREF
  int v40; // [esp+40h] [ebp-3Ch]
  _WORD *v41; // [esp+44h] [ebp-38h] BYREF
  int v42; // [esp+48h] [ebp-34h]
  _WORD *v43; // [esp+4Ch] [ebp-30h] BYREF
  int v44; // [esp+50h] [ebp-2Ch]
  char v45[8]; // [esp+54h] [ebp-28h] BYREF
  char v46[8]; // [esp+5Ch] [ebp-20h] BYREF
  char v47[12]; // [esp+64h] [ebp-18h] BYREF
  int v48; // [esp+78h] [ebp-4h]

  v4 = this;
  v37 = (Outpop::Utility::Thread_Mutex *)(this + 2);
  v5 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 2)) - 1;
  v38 = v5;
  v48 = 0;
  if ( v5 != -1 )
  {
    v6 = (Outpop::Utility::Binary_Stream *)*((_DWORD *)v4 + 42);
    v7 = (Outpop::Utility::Binary_Stream **)(v4 + 84);
    if ( v6 )
    {
      sequence_id = Outpop::Utility::Binary_Stream::get_sequence_id(v6);
      if ( Outpop::IONetwork::CMiddleCircleCompare::IsNew(
             (Outpop::IONetwork::CMiddleCircleCompare *)(v4 + 86),
             v4[16],
             sequence_id) )
      {
        sub_1000AC30((int)v7, a4);
        v4[16] = Outpop::Utility::Binary_Stream::get_sequence_id(*v7);
        v34 = 0;
        LOBYTE(v48) = 1;
        if ( *v7 )
          Outpop::Utility::Ref_Object::release(*v7);
        *v7 = 0;
        LOBYTE(v48) = 0;
      }
    }
    if ( *((_DWORD *)v4 + 33) )
    {
      v9 = v4 + 62;
      v29 = (unsigned __int16)v4[19];
      v33 = v4 + 62;
      v32 = v4 + 60;
      while ( 1 )
      {
        ++v29;
        sub_1003DA30(&v39, &v29);
        v10 = v39;
        v11 = *((_DWORD *)v9 + 1);
        if ( !v39 || v39 != v9 )
          invalid_parameter_noinfo();
        v12 = v40;
        if ( v40 == v11 )
          break;
        if ( !v10 )
          invalid_parameter_noinfo();
        if ( v12 == v10[1] )
          invalid_parameter_noinfo();
        sub_1000AC30(v12 + 12, a4);
        sub_1003D790(v45, v10, v40);
        v9 = v33;
        this[19] = v29;
      }
      v4 = this;
    }
    v13 = (Outpop::Utility::Binary_Stream *)*((_DWORD *)v4 + 41);
    v14 = (Outpop::Utility::Binary_Stream **)(v4 + 82);
    if ( v13 )
    {
      v15 = Outpop::Utility::Binary_Stream::get_sequence_id(v13);
      if ( Outpop::IONetwork::CMiddleCircleCompare::IsNew(
             (Outpop::IONetwork::CMiddleCircleCompare *)(v4 + 86),
             v4[15],
             v15) )
      {
        sub_1000AC30((int)v14, a3);
        v4[15] = Outpop::Utility::Binary_Stream::get_sequence_id(*v14);
        v35 = 0;
        LOBYTE(v48) = 2;
        if ( *v14 )
          Outpop::Utility::Ref_Object::release(*v14);
        *v14 = 0;
        LOBYTE(v48) = 0;
      }
    }
    if ( *((_DWORD *)v4 + 23) )
    {
      v16 = v4 + 42;
      v30 = (unsigned __int16)v4[18];
      v33 = v4 + 42;
      v32 = v4 + 40;
      while ( 1 )
      {
        ++v30;
        sub_1003DA30(&v41, &v30);
        v17 = v41;
        v18 = *((_DWORD *)v16 + 1);
        if ( !v41 || v41 != v16 )
          invalid_parameter_noinfo();
        v19 = v42;
        if ( v42 == v18 )
          break;
        if ( !v17 )
          invalid_parameter_noinfo();
        if ( v19 == v17[1] )
          invalid_parameter_noinfo();
        sub_1000AC30(v19 + 12, a3);
        sub_1003D790(v46, v17, v42);
        v16 = v33;
        this[18] = v30;
      }
      v4 = this;
    }
    v20 = (Outpop::Utility::Binary_Stream *)*((_DWORD *)v4 + 40);
    v21 = (Outpop::Utility::Binary_Stream **)(v4 + 80);
    if ( v20 )
    {
      v22 = Outpop::Utility::Binary_Stream::get_sequence_id(v20);
      if ( Outpop::IONetwork::CMiddleCircleCompare::IsNew(
             (Outpop::IONetwork::CMiddleCircleCompare *)(v4 + 86),
             v4[14],
             v22) )
      {
        sub_1000AC30((int)v21, a2);
        v4[14] = Outpop::Utility::Binary_Stream::get_sequence_id(*v21);
        v36 = 0;
        LOBYTE(v48) = 3;
        if ( *v21 )
          Outpop::Utility::Ref_Object::release(*v21);
        *v21 = 0;
        LOBYTE(v48) = 0;
      }
    }
    if ( *((_DWORD *)v4 + 13) )
    {
      v23 = v4 + 22;
      v31 = (unsigned __int16)v4[17];
      v33 = v4 + 22;
      v32 = v4 + 20;
      while ( 1 )
      {
        ++v31;
        sub_1003DA30(&v43, &v31);
        v24 = v43;
        v25 = *((_DWORD *)v23 + 1);
        if ( !v43 || v43 != v23 )
          invalid_parameter_noinfo();
        v26 = v44;
        if ( v44 == v25 )
          break;
        if ( !v24 )
          invalid_parameter_noinfo();
        if ( v26 == v24[1] )
          invalid_parameter_noinfo();
        sub_1000AC30(v26 + 12, a2);
        sub_1003D790(v47, v24, v44);
        v23 = v33;
        this[17] = v31;
      }
    }
    v48 = -1;
    v38 = -1;
    LOBYTE(v5) = Outpop::Utility::Thread_Mutex::release(v37);
  }
  return v5;
}
