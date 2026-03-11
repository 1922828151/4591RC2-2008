/*
 * func-name: ?send@P2P_Channel@IONetwork@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10043720
 * callers: none
 * callees: 0x10009580, 0x1000b220, 0x1000b2b0, 0x10023270, 0x1003c480, 0x100434b0, 0x10047f00, 0x1004e870
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::IONetwork::P2P_Channel::send(char *this, int a2)
{
  int v2; // edi
  Outpop::Utility::Stream_Base **v3; // esi
  Outpop::Utility::Stream_Base **v4; // esi
  Outpop::Utility::Binary_Stream *v5; // esi
  int totallength; // eax
  Outpop::Utility::Ref_Object *v7; // ebx
  Outpop::Utility::Stream_Base **v8; // esi
  Outpop::Utility::Ref_Object *v9; // esi
  const char *ptr; // eax
  Outpop::Utility::Ref_Object **v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  Outpop::Utility::Stream_Base **v15; // esi
  int v16; // eax
  int v17; // eax
  char *v18; // edx
  Outpop::Utility::Ref_Object *v19; // edi
  _DWORD *v20; // eax
  bool v21; // bl
  Outpop::Utility::Ref_Object **v22; // esi
  Outpop::Utility::Ref_Object **v23; // ebx
  Outpop::Utility::Ref_Object **v24; // esi
  Outpop::Utility::Ref_Object **v25; // ebx
  Outpop::Utility::Ref_Object **v26; // esi
  Outpop::Utility::Binary_Stream **v27; // esi
  Outpop::Utility::Ref_Object **v28; // esi
  Outpop::Utility::Ref_Object **v29; // edi
  Outpop::Utility::Ref_Object **v30; // esi
  Outpop::Utility::Ref_Object **v31; // edi
  unsigned int v32; // ebx
  unsigned int v33; // esi
  Outpop::Utility::Ref_Object **result; // eax
  Outpop::Utility::Ref_Object **v35; // ecx
  void (__cdecl *v36)(); // ebx
  Outpop::Utility::Binary_Stream **v37; // esi
  Outpop::Utility::Ref_Object **v38; // edi
  Outpop::Utility::Binary_Stream *v39; // ecx
  Outpop::Utility::Stream_Base *v40; // edi
  Outpop::Utility::Binary_Stream *v41; // ebx
  char sequence_id; // al
  char *v43; // esi
  Outpop::Utility::Ref_Object **v44; // esi
  Outpop::Utility::Ref_Object **v45; // edi
  Outpop::Utility::Ref_Object **v46; // ecx
  Outpop::Utility::Stream_Base **v47; // esi
  Outpop::Utility::Ref_Object **v48; // edi
  Outpop::Utility::Binary_Stream *v49; // edi
  char v50; // al
  Outpop::Utility::Ref_Object **v51; // esi
  Outpop::Utility::Ref_Object **v52; // edi
  Outpop::Utility::Ref_Object **v53; // esi
  Outpop::Utility::Ref_Object **v54; // edi
  Outpop::Utility::Stream_Base *v55[5]; // [esp+0h] [ebp-A8h] BYREF
  char *v56; // [esp+14h] [ebp-94h]
  Outpop::Utility::Stream_Base **v57; // [esp+18h] [ebp-90h]
  int v58; // [esp+1Ch] [ebp-8Ch] BYREF
  Outpop::Utility::Ref_Object **v59; // [esp+20h] [ebp-88h]
  Outpop::Utility::Ref_Object **v60; // [esp+24h] [ebp-84h]
  int v61; // [esp+28h] [ebp-80h]
  char v62[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  Outpop::Utility::Ref_Object **v63; // [esp+30h] [ebp-78h]
  Outpop::Utility::Ref_Object **v64; // [esp+34h] [ebp-74h]
  int v65; // [esp+38h] [ebp-70h]
  Outpop::Utility::Stream_Base *v66; // [esp+3Ch] [ebp-6Ch] BYREF
  _DWORD v67[2]; // [esp+40h] [ebp-68h] BYREF
  Outpop::Utility::Stream_Base **v68; // [esp+48h] [ebp-60h]
  Outpop::Utility::Ref_Object *v69; // [esp+4Ch] [ebp-5Ch] BYREF
  Outpop::Utility::Ref_Object *v70; // [esp+50h] [ebp-58h]
  int v71; // [esp+54h] [ebp-54h] BYREF
  Outpop::Utility::Ref_Object **v72; // [esp+58h] [ebp-50h]
  Outpop::Utility::Ref_Object **v73; // [esp+5Ch] [ebp-4Ch]
  int v74; // [esp+60h] [ebp-48h]
  Outpop::Utility::Ref_Object *v75; // [esp+64h] [ebp-44h] BYREF
  Outpop::Utility::Stream_Base *v76; // [esp+68h] [ebp-40h]
  Outpop::Utility::Ref_Object *v77; // [esp+6Ch] [ebp-3Ch] BYREF
  Outpop::Utility::Ref_Object *v78; // [esp+70h] [ebp-38h] BYREF
  Outpop::Utility::Stream_Base *v79; // [esp+74h] [ebp-34h]
  Outpop::Utility::Stream_Base *v80; // [esp+78h] [ebp-30h]
  Outpop::Utility::Stream_Base *v81; // [esp+7Ch] [ebp-2Ch]
  int v82; // [esp+80h] [ebp-28h] BYREF
  int v83; // [esp+88h] [ebp-20h] BYREF
  int v84[3]; // [esp+90h] [ebp-18h] BYREF
  int v85; // [esp+A4h] [ebp-4h]

  v56 = this;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v85 = 1;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v2 = a2;
  v3 = *(Outpop::Utility::Stream_Base ***)(a2 + 4);
  if ( (unsigned int)v3 > *(_DWORD *)(a2 + 8) )
    invalid_parameter_noinfo();
  v68 = v3;
  while ( 1 )
  {
    v4 = *(Outpop::Utility::Stream_Base ***)(v2 + 8);
    if ( *(_DWORD *)(v2 + 4) > (unsigned int)v4 )
      invalid_parameter_noinfo();
    if ( v68 == v4 )
      break;
    v5 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
    v57 = (Outpop::Utility::Stream_Base **)v5;
    LOBYTE(v85) = 2;
    if ( v5 )
    {
      if ( (unsigned int)v68 >= *(_DWORD *)(v2 + 8) )
        invalid_parameter_noinfo();
      totallength = Outpop::Utility::Stream_Base::get_totallength(*v68);
      Outpop::Utility::Binary_Stream::Binary_Stream(v5, totallength + 30);
      *(_DWORD *)v5 = &Outpop::Utility::Binary_Stream::`vftable';
      v7 = v5;
      v70 = v5;
    }
    else
    {
      v7 = 0;
      v70 = 0;
    }
    LOBYTE(v85) = 1;
    v69 = v7;
    if ( v7 )
      Outpop::Utility::Ref_Object::addref(v7);
    LOBYTE(v85) = 3;
    v8 = v68;
    if ( (unsigned int)v68 >= *(_DWORD *)(v2 + 8) )
      invalid_parameter_noinfo();
    Outpop::Utility::Binary_Stream::set_all_protepoty(v7, v8);
    if ( (unsigned int)v8 >= *(_DWORD *)(v2 + 8) )
      invalid_parameter_noinfo();
    v9 = *v68;
    v81 = *v68;
    if ( v81 )
      Outpop::Utility::Ref_Object::addref(v9);
    LOBYTE(v85) = 4;
    while ( v9 )
    {
      v55[0] = (Outpop::Utility::Stream_Base *)Outpop::Utility::Stream_Base::get_readable(v9);
      ptr = Outpop::Utility::Stream_Base::get_read_ptr(v9);
      Outpop::Utility::Stream_Base::write(v7, ptr);
      v11 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(v9, &v77);
      LOBYTE(v85) = 5;
      Outpop::Utility::Ref_Object::release(v9);
      v9 = *v11;
      v81 = *v11;
      if ( v81 )
        Outpop::Utility::Ref_Object::addref(v9);
      LOBYTE(v85) = 4;
      if ( v77 )
        Outpop::Utility::Ref_Object::release(v77);
    }
    LOBYTE(v85) = 3;
    v12 = Outpop::Utility::Binary_Stream::sequence(v7);
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_44;
      v13 = Outpop::Utility::Binary_Stream::priority(v7) - 1;
      if ( v13 )
      {
        v14 = v13 - 2;
        if ( v14 )
        {
          if ( v14 != 2 )
            goto LABEL_44;
          v55[0] = (Outpop::Utility::Stream_Base *)_InterlockedIncrement16((volatile signed __int16 *)v56 + 93);
        }
        else
        {
          v55[0] = (Outpop::Utility::Stream_Base *)_InterlockedIncrement16((volatile signed __int16 *)v56 + 94);
        }
      }
      else
      {
        v55[0] = (Outpop::Utility::Stream_Base *)_InterlockedIncrement16((volatile signed __int16 *)v56 + 95);
      }
    }
    else
    {
      v15 = v68;
      if ( (unsigned int)v68 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      v16 = Outpop::Utility::Binary_Stream::priority(*v15) - 1;
      if ( v16 )
      {
        v17 = v16 - 2;
        if ( v17 )
        {
          if ( v17 != 2 )
            goto LABEL_44;
          v18 = v56 + 192;
        }
        else
        {
          v18 = v56 + 194;
        }
      }
      else
      {
        v18 = v56 + 196;
      }
      v55[0] = (Outpop::Utility::Stream_Base *)_InterlockedIncrement16((volatile signed __int16 *)v18);
    }
    Outpop::Utility::Binary_Stream::set_sequence_id(v7, (unsigned int)v55[0]);
LABEL_44:
    v57 = v55;
    v55[0] = v7;
    if ( v7 )
      Outpop::Utility::Ref_Object::addref(v7);
    LOBYTE(v85) = 3;
    Outpop::IONetwork::Comminute_Container::conminute_stream((volatile signed __int16 *)v56 + 102, v55[0]);
    v19 = v70;
    v20 = (_DWORD *)Outpop::Utility::Binary_Stream::cont(v70, &v78);
    LOBYTE(v85) = 7;
    v21 = *v20 != 0;
    LOBYTE(v85) = 3;
    if ( v78 )
      Outpop::Utility::Ref_Object::release(v78);
    if ( v21 )
    {
      v67[0] = v19;
      if ( v19 )
        Outpop::Utility::Ref_Object::addref(v19);
      LOBYTE(v85) = 8;
      while ( v19 )
      {
        if ( Outpop::Utility::Binary_Stream::get_reliable(v19) )
        {
          if ( v59 && v60 - v59 < (unsigned int)((v61 - (int)v59) >> 2) )
          {
            LOBYTE(v76) = 0;
            v55[0] = v76;
            v22 = v60;
            sub_1003C480(v60, 1);
            v60 = v22 + 1;
          }
          else
          {
            v23 = v60;
            if ( v59 > v60 )
              invalid_parameter_noinfo();
            sub_1000B220((int)&v58, v84, (int)v67, (int)&v58, (int)v23);
          }
        }
        else if ( v63 && v64 - v63 < (unsigned int)((v65 - (int)v63) >> 2) )
        {
          LOBYTE(v79) = 0;
          v55[0] = v79;
          v24 = v64;
          sub_1003C480(v64, 1);
          v64 = v24 + 1;
        }
        else
        {
          v25 = v64;
          if ( v63 > v64 )
            invalid_parameter_noinfo();
          sub_1000B220((int)v62, &v82, (int)v67, (int)v62, (int)v25);
        }
        v26 = (Outpop::Utility::Ref_Object **)Outpop::Utility::Binary_Stream::cont(v19, &v75);
        LOBYTE(v85) = 9;
        Outpop::Utility::Ref_Object::release(v19);
        v19 = *v26;
        v67[0] = *v26;
        if ( v67[0] )
          Outpop::Utility::Ref_Object::addref(v19);
        LOBYTE(v85) = 8;
        if ( v75 )
          Outpop::Utility::Ref_Object::release(v75);
      }
      LOBYTE(v85) = 3;
    }
    else
    {
      v27 = v68;
      if ( (unsigned int)v68 >= *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      if ( Outpop::Utility::Binary_Stream::get_reliable(*v27) )
      {
        if ( v59 && v60 - v59 < (unsigned int)((v61 - (int)v59) >> 2) )
        {
          LOBYTE(v80) = 0;
          v55[0] = v80;
          v28 = v60;
          sub_1003C480(v60, 1);
          v60 = v28 + 1;
        }
        else
        {
          v29 = v60;
          if ( v59 > v60 )
            invalid_parameter_noinfo();
          sub_1000B220((int)&v58, &v83, (int)&v69, (int)&v58, (int)v29);
        }
      }
      else if ( v63 && v64 - v63 < (unsigned int)((v65 - (int)v63) >> 2) )
      {
        LOBYTE(v66) = 0;
        v55[0] = v66;
        v30 = v64;
        sub_1003C480(v64, 1);
        v64 = v30 + 1;
      }
      else
      {
        v31 = v64;
        if ( v63 > v64 )
          invalid_parameter_noinfo();
        sub_1000B220((int)v62, &v71, (int)&v69, (int)v62, (int)v31);
      }
    }
    LOBYTE(v85) = 1;
    if ( v70 )
      Outpop::Utility::Ref_Object::release(v70);
    if ( (unsigned int)v68 >= *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    ++v68;
    v2 = a2;
  }
  v32 = *(_DWORD *)(v2 + 8);
  if ( *(_DWORD *)(v2 + 4) > v32 )
    invalid_parameter_noinfo();
  v33 = *(_DWORD *)(v2 + 4);
  if ( v33 > *(_DWORD *)(v2 + 8) )
    invalid_parameter_noinfo();
  sub_1000B2B0(v2, &v71, v2, v33, v2, v32);
  result = v59;
  if ( v59 && (v35 = v60, v60 - v59) )
  {
    v36 = invalid_parameter_noinfo;
    v37 = v59;
    if ( v59 <= v60 )
      goto LABEL_100;
    invalid_parameter_noinfo();
    v35 = v60;
    while ( 1 )
    {
      result = v59;
LABEL_100:
      v38 = v35;
      if ( result > v35 )
        v36();
      if ( v37 == v38 )
        break;
      v57 = v55;
      v55[0] = 0;
      LOBYTE(v85) = 10;
      if ( v37 >= v60 )
        v36();
      v39 = *v37;
      LOBYTE(v85) = 1;
      Outpop::Utility::Binary_Stream::cont(v39, v55[0]);
      v40 = (Outpop::Utility::Stream_Base *)(unsigned __int16)_InterlockedIncrement16((volatile signed __int16 *)v56 + 92);
      if ( v37 >= v60 )
        invalid_parameter_noinfo();
      Outpop::Utility::Binary_Stream::set_reliable_id(*v37, (unsigned __int16)v40);
      if ( v37 >= v60 )
        invalid_parameter_noinfo();
      v41 = *v37;
      if ( v37 >= v60 )
        invalid_parameter_noinfo();
      v55[0] = v40;
      sequence_id = Outpop::Utility::Binary_Stream::get_sequence_id(v41);
      Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&v66, v37, 0, 1, 0, sequence_id, (char)v55[0]);
      LOBYTE(v85) = 1;
      if ( v66 )
        Outpop::Utility::Ref_Object::release(v66);
      v35 = v60;
      if ( v37 >= v60 )
      {
        invalid_parameter_noinfo();
        v35 = v60;
      }
      v36 = invalid_parameter_noinfo;
      ++v37;
    }
    v72 = 0;
    v73 = 0;
    v74 = 0;
    LOBYTE(v85) = 12;
    v43 = v56;
    sub_10047F00(&v58, &v71);
    result = v72;
    if ( v72 && v73 - v72 )
      result = (Outpop::Utility::Ref_Object **)Outpop::IONetwork::P2P_Channel::send_unite_quence(v43, (int)&v71);
    LOBYTE(v85) = 1;
    v44 = v72;
    if ( v72 )
    {
      v45 = v73;
      if ( v72 != v73 )
      {
        do
        {
          if ( *v44 )
            Outpop::Utility::Ref_Object::release(*v44);
          ++v44;
        }
        while ( v44 != v45 );
        v44 = v72;
      }
      result = (Outpop::Utility::Ref_Object **)operator delete(v44);
    }
    v72 = 0;
    v73 = 0;
    v74 = 0;
  }
  else
  {
    v36 = invalid_parameter_noinfo;
  }
  v46 = v63;
  if ( v63 )
  {
    result = v64;
    if ( v64 - v63 )
    {
      v47 = v63;
      if ( v63 <= v64 )
        goto LABEL_133;
      v36();
      result = v64;
      while ( 1 )
      {
        v46 = v63;
LABEL_133:
        v48 = result;
        if ( v46 > result )
        {
          v36();
          result = v64;
        }
        if ( v47 == v48 )
          break;
        if ( v47 >= result )
        {
          v36();
          result = v64;
        }
        v49 = *v47;
        if ( v47 >= result )
          v36();
        v55[0] = 0;
        v50 = Outpop::Utility::Binary_Stream::get_sequence_id(v49);
        Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&v66, v47, 0, 1, 0, v50, (char)v55[0]);
        LOBYTE(v85) = 1;
        if ( v66 )
          Outpop::Utility::Ref_Object::release(v66);
        result = v64;
        if ( v47 >= v64 )
        {
          v36();
          result = v64;
        }
        ++v47;
      }
      result = (Outpop::Utility::Ref_Object **)Outpop::IONetwork::P2P_Channel::send_unite_quence(v56, (int)v62);
    }
  }
  LOBYTE(v85) = 0;
  v51 = v63;
  if ( v63 )
  {
    v52 = v64;
    if ( v63 != v64 )
    {
      do
      {
        if ( *v51 )
          Outpop::Utility::Ref_Object::release(*v51);
        ++v51;
      }
      while ( v51 != v52 );
      v51 = v63;
    }
    result = (Outpop::Utility::Ref_Object **)operator delete(v51);
  }
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v85 = -1;
  v53 = v59;
  if ( v59 )
  {
    v54 = v60;
    if ( v59 != v60 )
    {
      do
      {
        if ( *v53 )
          Outpop::Utility::Ref_Object::release(*v53);
        ++v53;
      }
      while ( v53 != v54 );
      v53 = v59;
    }
    return (Outpop::Utility::Ref_Object **)operator delete(v53);
  }
  return result;
}
