/*
 * func-name: sub_102C33F0
 * func-address: 0x102c33f0
 * callers: 0x1022e1f0
 * callees: 0x102c2d50
 */

char __thiscall sub_102C33F0(_DWORD *this, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  _DWORD *v5; // esi
  int i; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const char *v10; // eax
  int v11; // edi
  char result; // al
  const char *v13; // eax
  const char *v14; // eax
  double v15; // st7
  int v16; // eax
  int first_of; // eax
  int v19; // eax
  const char *v20; // eax
  int v21; // eax
  int v22; // eax
  const char *v23; // eax
  int v24; // eax
  int v25; // eax
  const char *v26; // eax
  int last_of; // [esp-4h] [ebp-80h]
  _BYTE v28[28]; // [esp+1Ch] [ebp-60h] BYREF
  _BYTE v29[28]; // [esp+38h] [ebp-44h] BYREF
  _BYTE v30[28]; // [esp+54h] [ebp-28h] BYREF
  int v31; // [esp+78h] [ebp-4h]
  float v32; // [esp+88h] [ebp+Ch]
  float v33; // [esp+88h] [ebp+Ch]
  float v34; // [esp+88h] [ebp+Ch]
  float v35; // [esp+88h] [ebp+Ch]

  v4 = 0;
  v5 = this + 8;
  for ( i = 0; ; i += 64 )
  {
    v7 = v5[1];
    if ( !v7 || v4 >= (v5[2] - v7) >> 6 )
      return 0;
    if ( (unsigned __int8)std::operator==<char>(i + v5[1], a2) )
    {
      v8 = v5[1];
      if ( !v8 || v4 >= (v5[2] - v8) >> 6 )
        _invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(off_103B4B00[*(_DWORD *)(v5[1] + i + 28)], a3) )
        break;
    }
    ++v4;
  }
  v9 = v5[1];
  if ( !v9 || v4 >= (v5[2] - v9) >> 6 )
    _invalid_parameter_noinfo();
  switch ( *(_DWORD *)((v4 << 6) + v5[1] + 28) )
  {
    case 1:
    case 2:
      v10 = (const char *)std::string::c_str(a4);
      v11 = atoi(v10);
      **(_DWORD **)(sub_102C2D50(v5, v4) + 32) = v11;
      result = 1;
      break;
    case 3:
      if ( (unsigned __int8)std::operator==<char>(a4, "true") )
        **(_BYTE **)(sub_102C2D50(v5, v4) + 32) = 1;
      else
        **(_BYTE **)(sub_102C2D50(v5, v4) + 32) = 0;
      result = 1;
      break;
    case 4:
      v13 = (const char *)std::string::c_str(a4);
      v32 = atof(v13);
      **(float **)(sub_102C2D50(v5, v4) + 32) = v32;
      result = 1;
      break;
    case 5:
      v14 = (const char *)std::string::c_str(a4);
      v15 = atof(v14);
      *(double *)*(_DWORD *)(sub_102C2D50(v5, v4) + 32) = v15;
      result = 1;
      break;
    case 6:
      v16 = sub_102C2D50(v5, v4);
      std::string::operator=(*(_DWORD *)(v16 + 32), a4);
      result = 1;
      break;
    case 7:
      first_of = std::string::find_first_of(a4, 32, 0);
      v19 = std::string::substr(a4, v28, 0, first_of);
      v31 = 0;
      v20 = (const char *)std::string::c_str(v19);
      v33 = atof(v20);
      **(float **)(sub_102C2D50(v5, v4) + 32) = v33;
      v31 = -1;
      std::string::~string(v28);
      last_of = std::string::find_last_of(a4, 32, std::string::npos);
      v21 = std::string::find_first_of(a4, 32, 0);
      v22 = std::string::substr(a4, v29, v21, last_of);
      v31 = 1;
      v23 = (const char *)std::string::c_str(v22);
      v34 = atof(v23);
      *(float *)(*(_DWORD *)(sub_102C2D50(v5, v4) + 32) + 4) = v34;
      v31 = -1;
      std::string::~string(v29);
      v24 = std::string::find_last_of(a4, 32, std::string::npos);
      v25 = std::string::substr(a4, v30, v24, std::string::npos);
      v31 = 2;
      v26 = (const char *)std::string::c_str(v25);
      v35 = atof(v26);
      *(float *)(*(_DWORD *)(sub_102C2D50(v5, v4) + 32) + 8) = v35;
      v31 = -1;
      std::string::~string(v30);
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
