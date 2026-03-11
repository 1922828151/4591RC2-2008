/*
 * func-name: sub_102C4300
 * func-address: 0x102c4300
 * callers: 0x1022e1f0
 * callees: 0x10003d23, 0x100077e3, 0x1000ab4b, 0x1000f8f8, 0x10011b7b, 0x10015e3d, 0x102c6210, 0x102c6280, 0x102c6f20
 */

char __thiscall sub_102C4300(_DWORD *this, int a2, int a3, int a4)
{
  unsigned int v5; // ebx
  int i; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // eax
  const char *v13; // eax
  int v14; // eax
  int v15; // ecx
  char result; // al
  unsigned int v17; // edi
  int v18; // eax
  const char *v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // ebp
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // edi
  int v27; // eax
  const char *v28; // eax
  int v29; // ecx
  unsigned int v30; // edi
  int v31; // eax
  const char *v32; // eax
  int v33; // ecx
  unsigned int v34; // ebp
  int v35; // ecx
  unsigned int v36; // edi
  void *v37; // eax
  unsigned int j; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  const char *v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  const char *v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  const char *v51; // eax
  int v52; // eax
  int v53; // [esp-8h] [ebp-8Ch]
  int v54; // [esp-8h] [ebp-8Ch]
  int first_of; // [esp-4h] [ebp-88h]
  int last_of; // [esp-4h] [ebp-88h]
  unsigned int v57; // [esp+14h] [ebp-70h]
  int v58[2]; // [esp+18h] [ebp-6Ch] BYREF
  float v59; // [esp+20h] [ebp-64h]
  _BYTE v60[28]; // [esp+24h] [ebp-60h] BYREF
  _BYTE v61[28]; // [esp+40h] [ebp-44h] BYREF
  _BYTE v62[28]; // [esp+5Ch] [ebp-28h] BYREF
  int v63; // [esp+80h] [ebp-4h]

  v5 = 0;
  for ( i = 0; ; i += 64 )
  {
    v7 = this[9];
    if ( !v7 || v5 >= (this[10] - v7) >> 6 )
      return 0;
    if ( (unsigned __int8)std::operator==<char>(i + this[9], a2) )
    {
      v8 = this[9];
      if ( !v8 || v5 >= (this[10] - v8) >> 6 )
        _invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(off_103B4B00[*(_DWORD *)(i + this[9] + 28)], a3) )
        break;
    }
    ++v5;
  }
  v9 = this[9];
  v57 = v5;
  if ( !v9 || v5 >= (this[10] - v9) >> 6 )
    _invalid_parameter_noinfo();
  v10 = v5 << 6;
  switch ( *(_DWORD *)(v10 + this[9] + 28) )
  {
    case 8:
      v11 = 0;
      if ( !sub_10011B7B() )
        goto LABEL_55;
      do
      {
        v12 = sub_10003D23(v11);
        v13 = (const char *)std::string::c_str(v12);
        v14 = atoi(v13);
        v15 = this[9];
        a4 = v14;
        if ( !v15 || v57 >= (this[10] - v15) >> 6 )
          _invalid_parameter_noinfo();
        sub_1000F8F8(*(void **)(v10 + this[9] + 32), (int)&a4);
        ++v11;
      }
      while ( v11 < sub_10011B7B() );
      result = 1;
      break;
    case 9:
      v17 = 0;
      if ( !sub_10011B7B() )
        goto LABEL_55;
      do
      {
        v18 = sub_10003D23(v17);
        v19 = (const char *)std::string::c_str(v18);
        v20 = atoi(v19);
        v21 = this[9];
        a4 = v20;
        if ( !v21 || v57 >= (this[10] - v21) >> 6 )
          _invalid_parameter_noinfo();
        sub_102C6210(*(_DWORD *)(v10 + this[9] + 32), (int)&a4);
        ++v17;
      }
      while ( v17 < sub_10011B7B() );
      result = 1;
      break;
    case 0xA:
      v22 = 0;
      if ( !sub_10011B7B() )
        goto LABEL_55;
      do
      {
        v23 = this[9];
        if ( !v23 || v57 >= (this[10] - v23) >> 6 )
          _invalid_parameter_noinfo();
        v24 = sub_10003D23(v22);
        LOBYTE(v25) = (unsigned __int8)std::operator==<char>(v24, "true") != 0;
        sub_102C6F20(v25);
        ++v22;
      }
      while ( v22 < sub_10011B7B() );
      result = 1;
      break;
    case 0xB:
      v26 = 0;
      if ( !sub_10011B7B() )
        goto LABEL_55;
      do
      {
        v27 = sub_10003D23(v26);
        v28 = (const char *)std::string::c_str(v27);
        *(float *)&a4 = atof(v28);
        v29 = this[9];
        if ( !v29 || v57 >= (this[10] - v29) >> 6 )
          _invalid_parameter_noinfo();
        sub_100077E3(*(void **)(v10 + this[9] + 32), (int)&a4);
        ++v26;
      }
      while ( v26 < sub_10011B7B() );
      result = 1;
      break;
    case 0xC:
      v30 = 0;
      if ( !sub_10011B7B() )
        goto LABEL_55;
      do
      {
        v31 = sub_10003D23(v30);
        v32 = (const char *)std::string::c_str(v31);
        *(double *)v58 = atof(v32);
        v33 = this[9];
        if ( !v33 || v57 >= (this[10] - v33) >> 6 )
          _invalid_parameter_noinfo();
        sub_102C6280(*(_DWORD *)(this[9] + v10 + 32), (int)v58);
        ++v30;
      }
      while ( v30 < sub_10011B7B() );
      result = 1;
      break;
    case 0xD:
      v34 = 0;
      if ( !sub_10011B7B() )
        goto LABEL_55;
      do
      {
        v35 = this[9];
        if ( !v35 || v57 >= (this[10] - v35) >> 6 )
          _invalid_parameter_noinfo();
        v36 = v10 + this[9];
        v37 = (void *)sub_10003D23(v34);
        sub_1000AB4B(*(void **)(v36 + 32), v37);
        ++v34;
      }
      while ( v34 < sub_10011B7B() );
      result = 1;
      break;
    case 0xE:
      for ( j = 0; j < sub_10011B7B(); ++j )
      {
        v39 = sub_10003D23(j);
        first_of = std::string::find_first_of(v39, 32, 0);
        v40 = sub_10003D23(j);
        v41 = std::string::substr(v40, v60, 0, first_of);
        v63 = 0;
        v42 = (const char *)std::string::c_str(v41);
        *(float *)v58 = atof(v42);
        v63 = -1;
        std::string::~string(v60);
        v43 = sub_10003D23(j);
        last_of = std::string::find_last_of(v43, 32, std::string::npos);
        v44 = sub_10003D23(j);
        v53 = std::string::find_first_of(v44, 32, 0);
        v45 = sub_10003D23(j);
        v46 = std::string::substr(v45, v61, v53, last_of);
        v63 = 1;
        v47 = (const char *)std::string::c_str(v46);
        *(float *)&v58[1] = atof(v47);
        v63 = -1;
        std::string::~string(v61);
        v48 = sub_10003D23(j);
        v54 = std::string::find_last_of(v48, 32, std::string::npos);
        v49 = sub_10003D23(j);
        v50 = std::string::substr(v49, v62, v54, std::string::npos);
        v63 = 2;
        v51 = (const char *)std::string::c_str(v50);
        v59 = atof(v51);
        v63 = -1;
        std::string::~string(v62);
        v52 = this[9];
        if ( !v52 || v57 >= (this[10] - v52) >> 6 )
          _invalid_parameter_noinfo();
        sub_10015E3D(*(void **)(v10 + this[9] + 32), v58);
      }
LABEL_55:
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
