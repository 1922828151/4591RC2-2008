/*
 * func-name: ?combine_stream@Comminute_Container@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x10023520
 * callers: 0x1002f880, 0x100440d0
 * callees: 0x1000ac30, 0x100228b0, 0x10024020, 0x100245c0, 0x100246d0, 0x10024ca0, 0x10025040, 0x10025100, 0x100251b0, 0x1003da30, 0x10049340, 0x1004e870, 0x1004f11e
 */

void __thiscall Outpop::IONetwork::Comminute_Container::combine_stream(char *this, Outpop::Utility::Thread_Mutex *a2)
{
  Outpop::Utility::Thread_Mutex *v2; // edi
  Outpop::Utility::Stream_Base *v3; // ebx
  bool v4; // cc
  Outpop::Utility::Thread_Mutex *v5; // esi
  bool v6; // cf
  Outpop::Utility::Stream_Base *v7; // edi
  int readable; // eax
  bool v9; // al
  Outpop::Utility::Stream_Base *v10; // edi
  int v11; // eax
  unsigned __int16 v12; // di
  char *v13; // edi
  char *v14; // eax
  char *v15; // edi
  char *v16; // ecx
  char *v17; // eax
  int v18; // edi
  char *v19; // eax
  _DWORD *v20; // esi
  int v21; // edi
  Outpop::Utility::Thread_Mutex **v22; // eax
  char *v23; // esi
  bool v24; // al
  char *v25; // eax
  char *v26; // edi
  char *v27; // ebx
  char *v28; // esi
  int v29; // esi
  _DWORD *v30; // eax
  _DWORD *v31; // ebx
  char *v32; // edi
  Outpop::Utility::Stream_Base *v33; // eax
  Outpop::Utility::Ref_Object *v34; // ebx
  char *v35; // esi
  int *v36; // ebx
  bool v37; // zf
  int *v38; // esi
  int v39; // eax
  Outpop::Utility::Stream_Base *v40; // esi
  char *v41; // eax
  char **v42; // eax
  char *v43; // edx
  int v44; // [esp-8h] [ebp-B4h]
  char *ptr; // [esp-8h] [ebp-B4h]
  size_t v46; // [esp-4h] [ebp-B0h]
  int v47; // [esp+0h] [ebp-ACh]
  int v48; // [esp+0h] [ebp-ACh]
  int v49; // [esp+4h] [ebp-A8h]
  int v50; // [esp+4h] [ebp-A8h]
  Outpop::Utility::Stream_Base *v51; // [esp+14h] [ebp-98h] BYREF
  unsigned __int8 v52; // [esp+1Ah] [ebp-92h]
  char v53; // [esp+1Bh] [ebp-91h]
  char *v54; // [esp+1Ch] [ebp-90h] BYREF
  char *v55; // [esp+20h] [ebp-8Ch]
  Outpop::Utility::Ref_Object *v56; // [esp+24h] [ebp-88h]
  char *v57; // [esp+28h] [ebp-84h]
  Outpop::Utility::Thread_Mutex *v58; // [esp+2Ch] [ebp-80h]
  int v59; // [esp+30h] [ebp-7Ch]
  char *v60; // [esp+34h] [ebp-78h]
  Outpop::Utility::Thread_Mutex *v61; // [esp+38h] [ebp-74h] BYREF
  int v62; // [esp+3Ch] [ebp-70h]
  char v63[4]; // [esp+40h] [ebp-6Ch] BYREF
  int v64; // [esp+44h] [ebp-68h]
  int v65; // [esp+48h] [ebp-64h]
  Outpop::Utility::Stream_Base *v66; // [esp+4Ch] [ebp-60h]
  char *v67; // [esp+50h] [ebp-5Ch]
  __int16 v68; // [esp+54h] [ebp-58h]
  char v69[4]; // [esp+58h] [ebp-54h] BYREF
  int v70; // [esp+5Ch] [ebp-50h]
  __int16 v71; // [esp+64h] [ebp-48h] BYREF
  char v72[4]; // [esp+68h] [ebp-44h] BYREF
  int v73; // [esp+6Ch] [ebp-40h]
  _BYTE v74[8]; // [esp+74h] [ebp-38h] BYREF
  int v75; // [esp+7Ch] [ebp-30h] BYREF
  Outpop::Utility::Ref_Object *v76; // [esp+80h] [ebp-2Ch]
  char v77[8]; // [esp+88h] [ebp-24h] BYREF
  char v78[16]; // [esp+90h] [ebp-1Ch] BYREF
  int v79; // [esp+A8h] [ebp-4h]

  v57 = this;
  v2 = a2;
  v3 = (Outpop::Utility::Stream_Base *)*((_DWORD *)a2 + 1);
  v4 = (unsigned int)v3 <= *((_DWORD *)a2 + 2);
  v53 = 0;
  if ( !v4 )
    invalid_parameter_noinfo();
  v5 = a2;
  v58 = a2;
  while ( 1 )
  {
    v4 = *((_DWORD *)v2 + 1) <= *((_DWORD *)v2 + 2);
    v51 = (Outpop::Utility::Stream_Base *)*((_DWORD *)v2 + 2);
    if ( !v4 )
      invalid_parameter_noinfo();
    if ( !v5 || v5 != v2 )
      invalid_parameter_noinfo();
    if ( v3 == v51 )
      break;
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( (unsigned int)v3 >= *((_DWORD *)v5 + 2) )
      invalid_parameter_noinfo();
    v6 = (unsigned int)v3 < *((_DWORD *)v5 + 2);
    v51 = *(Outpop::Utility::Stream_Base **)v3;
    if ( !v6 )
      invalid_parameter_noinfo();
    v7 = *(Outpop::Utility::Stream_Base **)v3;
    v51 = (Outpop::Utility::Stream_Base *)(Outpop::Utility::Stream_Base::get_read_ptr(v51) - 1);
    readable = Outpop::Utility::Stream_Base::get_readable(v7);
    v52 = *((_BYTE *)v51 + readable);
    if ( v52 )
    {
      v61 = (Outpop::Utility::Thread_Mutex *)(v57 + 44);
      v62 = 0;
      v9 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v57 + 44));
      v62 = v9 - 1;
      v79 = 0;
      if ( !v9 )
        return;
      if ( !v53 )
        v53 = 1;
      v6 = (unsigned int)v3 < *((_DWORD *)v5 + 2);
      LOBYTE(v56) = v52 & 0xF;
      v52 >>= 4;
      if ( !v6 )
        invalid_parameter_noinfo();
      v6 = (unsigned int)v3 < *((_DWORD *)v5 + 2);
      v51 = *(Outpop::Utility::Stream_Base **)v3;
      if ( !v6 )
        invalid_parameter_noinfo();
      v10 = *(Outpop::Utility::Stream_Base **)v3;
      v51 = (Outpop::Utility::Stream_Base *)(Outpop::Utility::Stream_Base::get_read_ptr(v51) - 3);
      v11 = Outpop::Utility::Stream_Base::get_readable(v10);
      v6 = (unsigned int)v3 < *((_DWORD *)v5 + 2);
      v12 = *(_WORD *)((char *)v51 + v11);
      v51 = (Outpop::Utility::Stream_Base *)v12;
      if ( !v6 )
        invalid_parameter_noinfo();
      sub_100228B0((Outpop::Utility::Ref_Object **)v3, (int)&v75, (char)v56, v52, v12);
      LOBYTE(v79) = 1;
      v13 = v57;
      sub_1003DA30(&v54, &v51);
      v14 = v13;
      v15 = v54;
      v16 = (char *)*((_DWORD *)v14 + 2);
      v17 = v14 + 4;
      v67 = v16;
      if ( !v54 || v54 != v17 )
        invalid_parameter_noinfo();
      if ( v55 == v67 )
      {
        v64 = sub_10049340(v47, v49);
        v65 = 0;
        LOBYTE(v79) = 2;
        v20 = (_DWORD *)(v64 + 4);
        v21 = sub_10025100(v64, *(_DWORD *)(v64 + 4), &v75);
        sub_100251B0(v48, v50);
        *v20 = v21;
        **(_DWORD **)(v21 + 4) = v21;
        v68 = (__int16)v51;
        sub_10024CA0(&v69);
        LOBYTE(v79) = 4;
        v71 = v68;
        sub_10024CA0(&v72);
        LOBYTE(v79) = 6;
        sub_10024020(v57, &v78, &v71);
        LOBYTE(v79) = 4;
        sub_10025040(&v72);
        operator delete(v73);
        v73 = 0;
        LOBYTE(v79) = 2;
        sub_10025040(&v69);
        operator delete(v70);
        v70 = 0;
        LOBYTE(v79) = 1;
        sub_10025040(&v63);
        operator delete(v64);
        v64 = 0;
        v5 = v58;
      }
      else
      {
        if ( !v15 )
          invalid_parameter_noinfo();
        if ( v55 == *((char **)v15 + 1) )
          invalid_parameter_noinfo();
        v18 = *((_DWORD *)v55 + 4);
        v44 = *(_DWORD *)(v18 + 4);
        v51 = (Outpop::Utility::Stream_Base *)(v55 + 12);
        v60 = (char *)sub_10025100(v18, v44, &v75);
        sub_100251B0(v47, v49);
        v19 = v60;
        *(_DWORD *)(v18 + 4) = v60;
        **((_DWORD **)v19 + 1) = v19;
      }
      if ( (unsigned int)v3 >= *((_DWORD *)v5 + 2) )
        invalid_parameter_noinfo();
      Outpop::Utility::Stream_Base::move_write_pos(*(Outpop::Utility::Stream_Base **)v3, -3);
      v22 = (Outpop::Utility::Thread_Mutex **)sub_100246D0(a2, v74, v5, v3);
      v5 = *v22;
      v3 = v22[1];
      v58 = *v22;
      LOBYTE(v79) = 9;
      Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v77);
      LOBYTE(v79) = 0;
      if ( v76 )
        Outpop::Utility::Ref_Object::release(v76);
      v79 = -1;
      v62 = -1;
      Outpop::Utility::Thread_Mutex::release(v61);
      v2 = a2;
    }
    else
    {
      if ( (unsigned int)v3 >= *((_DWORD *)v5 + 2) )
        invalid_parameter_noinfo();
      Outpop::Utility::Stream_Base::move_write_pos(*(Outpop::Utility::Stream_Base **)v3, -1);
      if ( (unsigned int)v3 >= *((_DWORD *)v5 + 2) )
        invalid_parameter_noinfo();
      v2 = a2;
      v3 = (Outpop::Utility::Stream_Base *)((char *)v3 + 4);
    }
  }
  if ( v53 )
  {
    v23 = v57;
    v58 = (Outpop::Utility::Thread_Mutex *)(v57 + 44);
    v59 = 0;
    v24 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v57 + 44));
    v59 = v24 - 1;
    v79 = 11;
    if ( v24 )
    {
      v25 = (char *)**((_DWORD **)v23 + 2);
      v60 = v23 + 4;
      v54 = v23 + 4;
LABEL_49:
      v55 = v25;
      while ( 1 )
      {
        v26 = v54;
        v27 = v55;
        v28 = (char *)*((_DWORD *)v60 + 1);
        if ( !v54 || v54 != v60 )
          invalid_parameter_noinfo();
        if ( v27 == v28 )
          break;
        if ( !v26 )
          invalid_parameter_noinfo();
        if ( v27 == *((char **)v26 + 1) )
          invalid_parameter_noinfo();
        v29 = *((_DWORD *)v27 + 5);
        if ( v27 == *((char **)v26 + 1) )
          invalid_parameter_noinfo();
        v30 = (_DWORD *)*((_DWORD *)v55 + 4);
        v31 = (_DWORD *)*v30;
        v32 = v55 + 12;
        if ( (_DWORD *)*v30 == v30 )
          invalid_parameter_noinfo();
        if ( *((unsigned __int16 *)v31 + 8) != v29 )
        {
          if ( v55 == *((char **)v54 + 1) )
            invalid_parameter_noinfo();
          v25 = *(char **)v55;
          goto LABEL_49;
        }
        v51 = 0;
        v33 = (Outpop::Utility::Stream_Base *)Outpop::Utility::Binary_Stream::operator new(0x48u);
        v34 = v33;
        v66 = v33;
        LOBYTE(v79) = 12;
        if ( v33 )
        {
          Outpop::Utility::Binary_Stream::Binary_Stream(v33, 65400 * v29);
          *(_DWORD *)v34 = &Outpop::Utility::Binary_Stream::`vftable';
          v56 = v34;
        }
        else
        {
          v56 = 0;
        }
        LOBYTE(v79) = 11;
        v61 = v56;
        if ( v56 )
          Outpop::Utility::Ref_Object::addref(v56);
        LOBYTE(v79) = 13;
        v35 = v55;
        if ( v55 == *((char **)v54 + 1) )
          invalid_parameter_noinfo();
        v36 = (int *)**((_DWORD **)v32 + 1);
        while ( 1 )
        {
          if ( v35 == *((char **)v54 + 1) )
            invalid_parameter_noinfo();
          v37 = v32 == v35 + 12;
          v38 = (int *)*((_DWORD *)v35 + 4);
          if ( !v37 )
            invalid_parameter_noinfo();
          if ( v36 == v38 )
            break;
          if ( !v51 )
          {
            if ( v36 == *((int **)v32 + 1) )
              invalid_parameter_noinfo();
            Outpop::Utility::Binary_Stream::set_all_protepoty(v56, v36 + 3);
          }
          if ( v36 == *((int **)v32 + 1) )
            invalid_parameter_noinfo();
          v39 = Outpop::Utility::Stream_Base::get_readable((Outpop::Utility::Stream_Base *)v36[3]);
          v51 = (Outpop::Utility::Stream_Base *)((char *)v51 + v39);
          if ( v36 == *((int **)v32 + 1) )
            invalid_parameter_noinfo();
          v37 = v36 == *((int **)v32 + 1);
          v66 = (Outpop::Utility::Stream_Base *)v36[3];
          if ( v37 )
            invalid_parameter_noinfo();
          v40 = (Outpop::Utility::Stream_Base *)v36[3];
          if ( v36 == *((int **)v32 + 1) )
            invalid_parameter_noinfo();
          v46 = Outpop::Utility::Stream_Base::get_readable(v66);
          ptr = Outpop::Utility::Stream_Base::get_read_ptr(v40);
          v41 = Outpop::Utility::Stream_Base::get_read_ptr(v56);
          memcpy(&v41[65400 * *((unsigned __int8 *)v36 + 18) - 65400], ptr, v46);
          if ( v36 == *((int **)v32 + 1) )
            invalid_parameter_noinfo();
          v36 = (int *)*v36;
          v35 = v55;
        }
        Outpop::Utility::Stream_Base::move_write_pos(v56, v51);
        sub_1000AC30((int)&v61, a2);
        v42 = (char **)sub_100245C0(v74, v54, v55);
        v43 = v42[1];
        v54 = *v42;
        v55 = v43;
        LOBYTE(v79) = 11;
        if ( v56 )
          Outpop::Utility::Ref_Object::release(v56);
      }
      v79 = -1;
      v59 = -1;
      Outpop::Utility::Thread_Mutex::release(v58);
    }
  }
}
