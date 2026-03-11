/*
 * func-name: ?get_stream_from_container@Priority_Container@IONetwork@Outpop@@QAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@H@Z
 * func-address: 0x1000a280
 * callers: none
 * callees: 0x1000ac30, 0x1000b110, 0x1000b220, 0x1000b3b0, 0x1003c480
 */

char __thiscall Outpop::IONetwork::Priority_Container::get_stream_from_container(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // ebx
  unsigned int v14; // eax
  int *v15; // eax
  int v16; // ecx
  _DWORD *v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // ecx
  Outpop::Utility::Ref_Object *v24; // ecx
  Outpop::Utility::Ref_Object *v25; // ecx
  int v26; // edx
  bool v27; // zf
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // esi
  unsigned int v32; // ecx
  Outpop::Utility::Stream_Base *v33; // ecx
  Outpop::Utility::Ref_Object *v34; // ecx
  int v35; // edx
  Outpop::Utility::Ref_Object *v36; // esi
  unsigned int v37; // ebx
  _DWORD *v38; // esi
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // ebx
  unsigned int v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // edx
  int v49; // ebx
  unsigned int v50; // ebx
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // ebx
  unsigned int v54; // edx
  int v55; // eax
  unsigned int v56; // esi
  unsigned int v57; // ecx
  Outpop::Utility::Stream_Base *v58; // ecx
  Outpop::Utility::Ref_Object *v59; // ecx
  int v60; // edx
  Outpop::Utility::Ref_Object *v61; // esi
  unsigned int v62; // ebx
  _DWORD *v63; // esi
  unsigned int v64; // ecx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // ebx
  unsigned int v68; // eax
  unsigned int v69; // ebx
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // edx
  int v73; // ebx
  unsigned int v74; // ebx
  unsigned int v75; // eax
  unsigned int v76; // eax
  int v78; // [esp-Ch] [ebp-78h] BYREF
  int *v79; // [esp-8h] [ebp-74h]
  int *v80; // [esp-4h] [ebp-70h]
  Outpop::Utility::Ref_Object *v81; // [esp+14h] [ebp-58h]
  int v82; // [esp+18h] [ebp-54h]
  Outpop::Utility::Stream_Base *v83; // [esp+1Ch] [ebp-50h]
  int v84; // [esp+20h] [ebp-4Ch]
  unsigned int v85; // [esp+24h] [ebp-48h]
  int *v86; // [esp+28h] [ebp-44h]
  int *v87; // [esp+2Ch] [ebp-40h]
  _DWORD *v88; // [esp+30h] [ebp-3Ch]
  int v89; // [esp+34h] [ebp-38h]
  int v90; // [esp+38h] [ebp-34h] BYREF
  _DWORD *v91; // [esp+3Ch] [ebp-30h]
  unsigned int v92; // [esp+40h] [ebp-2Ch]
  int v93; // [esp+44h] [ebp-28h]
  _DWORD *v94; // [esp+48h] [ebp-24h]
  unsigned int v95; // [esp+4Ch] [ebp-20h]
  int v96; // [esp+50h] [ebp-1Ch] BYREF
  _DWORD *v97; // [esp+54h] [ebp-18h]
  unsigned int v98; // [esp+58h] [ebp-14h]
  int v99; // [esp+68h] [ebp-4h]

  v88 = this;
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)this) - 1;
  v89 = v4;
  v99 = 0;
  if ( v4 != -1 )
  {
    v5 = this[10];
    v84 = 0;
    v6 = this[9];
    if ( v6 > v6 + v5 )
      invalid_parameter_noinfo();
    v91 = this + 6;
    v92 = v6;
    while ( 1 )
    {
      v7 = this[9];
      v85 = v7 + this[10];
      if ( v7 > v85 )
        invalid_parameter_noinfo();
      v8 = v91;
      if ( !v91 || v91 != this + 6 )
        invalid_parameter_noinfo();
      if ( v92 == v85 || a3 <= 0 )
        break;
      v9 = v92;
      v10 = v92 >> 2;
      v85 = v92 >> 2;
      v82 = v92 & 3;
      if ( !v8 )
      {
        invalid_parameter_noinfo();
        v9 = v92;
      }
      if ( v9 >= v8[4] + v8[3] )
        invalid_parameter_noinfo();
      v11 = v8[2];
      if ( v11 <= v10 )
        v10 -= v11;
      if ( Outpop::Utility::Stream_Base::get_totallength(*(Outpop::Utility::Stream_Base **)(*(_DWORD *)(v8[1] + 4 * v10)
                                                                                          + 4 * v82)) >= a3 )
      {
        if ( v92 >= v8[4] + v8[3] )
          invalid_parameter_noinfo();
        ++v92;
      }
      else
      {
        if ( v92 >= v8[4] + v8[3] )
          invalid_parameter_noinfo();
        sub_1000AC30();
        v12 = v85;
        if ( v92 >= v91[4] + v91[3] )
          invalid_parameter_noinfo();
        v13 = v91;
        v14 = v91[2];
        if ( v14 <= v12 )
          v12 -= v14;
        a3 -= Outpop::Utility::Stream_Base::get_totallength(*(Outpop::Utility::Stream_Base **)(*(_DWORD *)(v91[1] + 4 * v12)
                                                                                             + 4 * v82));
        v87 = &v78;
        v15 = (int *)sub_1000B110(this + 6, &v96, 0, v13, v92);
        v16 = *v15;
        v17 = (_DWORD *)v15[1];
        v18 = v15[2];
        v90 = v16;
        v91 = v17;
        v92 = v18;
      }
      if ( ++v84 == 10 )
      {
        v85 = 0;
        while ( this[15] )
        {
          v19 = this[14];
          if ( v19 > v19 + this[15] )
            invalid_parameter_noinfo();
          v20 = this[14] + this[15];
          v21 = v19 & 3;
          v22 = v19 >> 2;
          v84 = v21;
          if ( v19 >= v20 )
          {
            invalid_parameter_noinfo();
            v21 = v84;
          }
          v23 = this[13];
          if ( v23 <= v22 )
            v22 -= v23;
          v24 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[12] + 4 * v22) + 4 * v21);
          v81 = v24;
          if ( v24 )
            Outpop::Utility::Ref_Object::addref(v24);
          LOBYTE(v99) = 1;
          if ( this[15] )
          {
            v25 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[12] + 4 * (this[14] >> 2)) + 4 * (this[14] & 3));
            if ( v25 )
              Outpop::Utility::Ref_Object::release(v25);
            v26 = this[13];
            if ( (unsigned int)(4 * v26) <= ++this[14] )
              this[14] = 0;
            v27 = this[15]-- == 1;
            if ( v27 )
              this[14] = 0;
          }
          sub_1000AC30();
          a3 -= Outpop::Utility::Stream_Base::get_totallength(v81);
          if ( a3 < 0 )
          {
            LOBYTE(v99) = 0;
            if ( v81 )
              Outpop::Utility::Ref_Object::release(v81);
            break;
          }
          LOBYTE(v99) = 0;
          if ( v81 )
            Outpop::Utility::Ref_Object::release(v81);
          if ( (int)++v85 >= 2 )
            break;
        }
        if ( a3 > 0 && this[20] )
        {
          v28 = this[19];
          if ( v28 > v28 + this[20] )
            invalid_parameter_noinfo();
          v29 = this[19] + this[20];
          v30 = v28 & 3;
          v31 = v28 >> 2;
          v85 = v30;
          if ( v28 >= v29 )
          {
            invalid_parameter_noinfo();
            v30 = v85;
          }
          v32 = this[18];
          if ( v32 <= v31 )
            v31 -= v32;
          v33 = *(Outpop::Utility::Stream_Base **)(*(_DWORD *)(this[17] + 4 * v31) + 4 * v30);
          v83 = v33;
          if ( v33 )
            Outpop::Utility::Ref_Object::addref(v33);
          LOBYTE(v99) = 2;
          if ( this[20] )
          {
            v34 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[17] + 4 * (this[19] >> 2)) + 4 * (this[19] & 3));
            if ( v34 )
              Outpop::Utility::Ref_Object::release(v34);
            v35 = this[18];
            if ( (unsigned int)(4 * v35) <= ++this[19] )
              this[19] = 0;
            v27 = this[20]-- == 1;
            if ( v27 )
              this[19] = 0;
          }
          sub_1000AC30();
          v36 = v83;
          a3 -= Outpop::Utility::Stream_Base::get_totallength(v83);
          LOBYTE(v99) = 0;
          if ( v36 )
            Outpop::Utility::Ref_Object::release(v36);
        }
        v84 = 0;
      }
    }
    v37 = this[14];
    v38 = this + 11;
    v39 = v37 + this[15];
    v82 = 0;
    if ( v37 > v39 )
      invalid_parameter_noinfo();
    v94 = this + 11;
    v95 = v37;
    while ( 1 )
    {
      v40 = this[14];
      v85 = v40 + this[15];
      v41 = v85;
      if ( v40 > v85 )
      {
        invalid_parameter_noinfo();
        v41 = v85;
      }
      if ( !v38 || v38 != this + 11 )
      {
        invalid_parameter_noinfo();
        v41 = v85;
      }
      if ( v95 == v41 || a3 <= 0 )
        break;
      v42 = v95;
      v43 = v95 >> 2;
      v81 = (Outpop::Utility::Ref_Object *)(v95 >> 2);
      v84 = v95 & 3;
      if ( !v38 )
      {
        invalid_parameter_noinfo();
        v42 = v95;
      }
      if ( v42 >= v38[3] + v38[4] )
        invalid_parameter_noinfo();
      v44 = v38[2];
      if ( v44 <= v43 )
        v43 -= v44;
      if ( Outpop::Utility::Stream_Base::get_totallength(*(Outpop::Utility::Stream_Base **)(*(_DWORD *)(v38[1] + 4 * v43)
                                                                                          + 4 * v84)) >= a3 )
      {
        if ( v95 >= v38[3] + v38[4] )
          invalid_parameter_noinfo();
        ++v95;
      }
      else
      {
        v45 = (unsigned int)v81;
        if ( v95 >= v38[3] + v38[4] )
          invalid_parameter_noinfo();
        v46 = v38[2];
        if ( v46 <= v45 )
          v45 -= v46;
        v85 = *(_DWORD *)(v38[1] + 4 * v45) + 4 * v84;
        v47 = a2[1];
        if ( v47 )
          v48 = (int)(a2[2] - v47) >> 2;
        else
          v48 = 0;
        if ( v47 && v48 < (int)(a2[3] - v47) >> 2 )
        {
          LOBYTE(v86) = 0;
          v80 = v86;
          v79 = v87;
          v49 = a2[2];
          sub_1003C480(v49, 1);
          a2[2] = v49 + 4;
        }
        else
        {
          v87 = (int *)a2[2];
          if ( v47 > (unsigned int)v87 )
            invalid_parameter_noinfo();
          sub_1000B220(&v90, v85, a2, v87);
        }
        v50 = (unsigned int)v81;
        if ( v95 >= v38[3] + v38[4] )
          invalid_parameter_noinfo();
        v51 = v38[2];
        if ( v51 <= v50 )
          v50 -= v51;
        a3 -= Outpop::Utility::Stream_Base::get_totallength(*(Outpop::Utility::Stream_Base **)(*(_DWORD *)(v38[1] + 4 * v50)
                                                                                             + 4 * v84));
        v52 = v38[3];
        if ( v95 + 1 > v52 + v38[4] || v95 + 1 < v52 )
          invalid_parameter_noinfo();
        sub_1000B3B0(&v96, 0, v38, v95, 0, v38, v95 + 1);
        v38 = v97;
        v93 = v96;
        v94 = v97;
        v95 = v98;
      }
      if ( ++v82 == 2 )
      {
        if ( a3 > 0 && this[20] )
        {
          v53 = this[19];
          if ( v53 > v53 + this[20] )
            invalid_parameter_noinfo();
          v54 = this[19] + this[20];
          v55 = v53 & 3;
          v56 = v53 >> 2;
          v87 = (int *)v55;
          if ( v53 >= v54 )
          {
            invalid_parameter_noinfo();
            v55 = (int)v87;
          }
          v57 = this[18];
          if ( v57 <= v56 )
            v56 -= v57;
          v58 = *(Outpop::Utility::Stream_Base **)(*(_DWORD *)(this[17] + 4 * v56) + 4 * v55);
          v83 = v58;
          if ( v58 )
            Outpop::Utility::Ref_Object::addref(v58);
          LOBYTE(v99) = 3;
          if ( this[20] )
          {
            v59 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(this[17] + 4 * (this[19] >> 2)) + 4 * (this[19] & 3));
            if ( v59 )
              Outpop::Utility::Ref_Object::release(v59);
            v60 = this[18];
            if ( (unsigned int)(4 * v60) <= ++this[19] )
              this[19] = 0;
            v27 = this[20]-- == 1;
            if ( v27 )
              this[19] = 0;
          }
          sub_1000AC30();
          v61 = v83;
          a3 -= Outpop::Utility::Stream_Base::get_totallength(v83);
          LOBYTE(v99) = 0;
          if ( v61 )
            Outpop::Utility::Ref_Object::release(v61);
        }
        v38 = v94;
        v82 = 0;
      }
    }
    v62 = this[19];
    v63 = this + 16;
    if ( v62 > v62 + this[20] )
      invalid_parameter_noinfo();
    v95 = v62;
    while ( 1 )
    {
      v64 = this[19];
      v85 = v64 + this[20];
      v65 = v85;
      if ( v64 > v85 )
      {
        invalid_parameter_noinfo();
        v65 = v85;
      }
      if ( !v63 || v63 != this + 16 )
      {
        invalid_parameter_noinfo();
        v65 = v85;
      }
      if ( v95 == v65 || a3 <= 0 )
        break;
      v66 = v95;
      v67 = v95 >> 2;
      v83 = (Outpop::Utility::Stream_Base *)(v95 >> 2);
      v84 = v95 & 3;
      if ( !v63 )
      {
        invalid_parameter_noinfo();
        v66 = v95;
      }
      if ( v66 >= v63[3] + v63[4] )
        invalid_parameter_noinfo();
      v68 = v63[2];
      if ( v68 <= v67 )
        v67 -= v68;
      if ( Outpop::Utility::Stream_Base::get_totallength(*(Outpop::Utility::Stream_Base **)(*(_DWORD *)(v63[1] + 4 * v67)
                                                                                          + 4 * v84)) >= a3 )
      {
        if ( v95 >= v63[3] + v63[4] )
          invalid_parameter_noinfo();
        ++v95;
      }
      else
      {
        v69 = (unsigned int)v83;
        if ( v95 >= v63[3] + v63[4] )
          invalid_parameter_noinfo();
        v70 = v63[2];
        if ( v70 <= v69 )
          v69 -= v70;
        v85 = *(_DWORD *)(v63[1] + 4 * v69) + 4 * v84;
        v71 = a2[1];
        if ( v71 )
          v72 = (int)(a2[2] - v71) >> 2;
        else
          v72 = 0;
        if ( v71 && v72 < (int)(a2[3] - v71) >> 2 )
        {
          LOBYTE(v87) = 0;
          v80 = v87;
          v79 = v87;
          v73 = a2[2];
          sub_1003C480(v73, 1);
          a2[2] = v73 + 4;
        }
        else
        {
          v86 = (int *)a2[2];
          if ( v71 > (unsigned int)v86 )
            invalid_parameter_noinfo();
          sub_1000B220(&v90, v85, a2, v86);
        }
        v74 = (unsigned int)v83;
        if ( v95 >= v63[3] + v63[4] )
          invalid_parameter_noinfo();
        v75 = v63[2];
        if ( v75 <= v74 )
          v74 -= v75;
        a3 -= Outpop::Utility::Stream_Base::get_totallength(*(Outpop::Utility::Stream_Base **)(*(_DWORD *)(v63[1] + 4 * v74)
                                                                                             + 4 * v84));
        v76 = v63[3];
        if ( v95 + 1 > v76 + v63[4] || v95 + 1 < v76 )
          invalid_parameter_noinfo();
        sub_1000B3B0(&v96, 0, v63, v95, 0, v63, v95 + 1);
        v63 = v97;
        v93 = v96;
        v95 = v98;
      }
    }
    v99 = -1;
    v89 = -1;
    LOBYTE(v4) = Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)this);
  }
  return v4;
}
