/*
 * func-name: sub_10033440
 * func-address: 0x10033440
 * callers: 0x10034c30
 * callees: 0x10097800, 0x101a251c
 */

int __thiscall sub_10033440(void *this, LPCWCH lpWideCharStr)
{
  const unsigned __int16 *v2; // edi
  void *v3; // ebp
  char *v4; // ecx
  int v6; // esi
  int v7; // ebx
  const unsigned __int16 **v8; // edi
  int v9; // eax
  int v10; // eax
  double v11; // st7
  double v12; // st7
  int v13; // eax
  int v14; // eax
  double v15; // st7
  double v16; // st7
  int v17; // eax
  int v18; // eax
  double v19; // st7
  double v20; // st7
  float v22; // [esp+14h] [ebp-7FCh] BYREF
  int v23; // [esp+18h] [ebp-7F8h] BYREF
  int v24; // [esp+1Ch] [ebp-7F4h] BYREF
  float v25[2]; // [esp+20h] [ebp-7F0h] BYREF
  float v26; // [esp+28h] [ebp-7E8h]
  float v27; // [esp+2Ch] [ebp-7E4h]
  float v28[2]; // [esp+30h] [ebp-7E0h] BYREF
  float v29; // [esp+38h] [ebp-7D8h]
  float v30; // [esp+3Ch] [ebp-7D4h]
  float v31[2]; // [esp+40h] [ebp-7D0h] BYREF
  float v32; // [esp+48h] [ebp-7C8h]
  float v33; // [esp+4Ch] [ebp-7C4h]
  float v34; // [esp+50h] [ebp-7C0h] BYREF
  float v35; // [esp+54h] [ebp-7BCh] BYREF
  float v36; // [esp+58h] [ebp-7B8h] BYREF
  float v37; // [esp+5Ch] [ebp-7B4h] BYREF
  float v38; // [esp+60h] [ebp-7B0h] BYREF
  _DWORD v39[35]; // [esp+64h] [ebp-7ACh] BYREF
  unsigned __int16 v40[256]; // [esp+F0h] [ebp-720h] BYREF
  WCHAR Buffer[260]; // [esp+2F0h] [ebp-520h] BYREF
  CHAR MultiByteStr[260]; // [esp+4F8h] [ebp-318h] BYREF
  unsigned __int16 v43[260]; // [esp+5FCh] [ebp-214h] BYREF
  int v44; // [esp+80Ch] [ebp-4h]

  v2 = 0;
  v3 = this;
  memset(Buffer, 0, sizeof(Buffer));
  GetCurrentDirectoryW(0x104u, Buffer);
  SetCurrentDirectoryW((LPCWSTR)v3 + 34);
  WideCharToMultiByte(0, 0, lpWideCharStr, -1, MultiByteStr, 260, 0, 0);
  memset(v40, 0, sizeof(v40));
  std::wifstream::wifstream(v39, MultiByteStr, 1, 64, 1);
  v4 = (char *)v39 + *(_DWORD *)(v39[0] + 4);
  v44 = 0;
  if ( (unsigned __int8)std::ios_base::operator!(v4) )
  {
    Warning("wifstream::open", -2147467259);
    v44 = -1;
    std::wifstream::`vbase destructor'(v39);
    return -2147467259;
  }
  SetCurrentDirectoryW(Buffer);
  std::operator>><wchar_t,std::char_traits<wchar_t>>(v39, v40);
  if ( !(unsigned __int8)std::ios_base::operator!((char *)v39 + *(_DWORD *)(v39[0] + 4)) )
  {
    while ( 1 )
    {
      if ( wcscmp(v40, L"newmtl") )
        goto LABEL_11;
      v6 = 0;
      memset(v43, 0, sizeof(v43));
      std::operator>><wchar_t,std::char_traits<wchar_t>>(v39, v43);
      v7 = *((_DWORD *)v3 + 15);
      v2 = 0;
      if ( v7 > 0 )
        break;
LABEL_29:
      std::operator>><wchar_t,std::char_traits<wchar_t>>(v39, v40);
      if ( (unsigned __int8)std::ios_base::operator!((char *)v39 + *(_DWORD *)(v39[0] + 4)) )
        goto LABEL_30;
    }
    v8 = (const unsigned __int16 **)*((_DWORD *)v3 + 14);
    while ( wcscmp(*v8, v43) )
    {
      ++v6;
      ++v8;
      if ( v6 >= v7 )
      {
        v2 = 0;
        v3 = this;
        goto LABEL_29;
      }
    }
    v2 = *v8;
    v3 = this;
LABEL_11:
    if ( v2 )
    {
      if ( wcscmp(v40, L"#") )
      {
        if ( !wcscmp(v40, L"Ka") )
        {
          v9 = std::wistream::operator>>(v39, &v34);
          v10 = std::wistream::operator>>(v9, &v38);
          std::wistream::operator>>(v10, v25);
          v25[1] = v34;
          v11 = v38;
          *((float *)v2 + 130) = v34;
          v26 = v11;
          v12 = v25[0];
          *((float *)v2 + 131) = v26;
          v27 = v12;
          *((float *)v2 + 132) = v27;
        }
        else if ( !wcscmp(v40, L"Kd") )
        {
          v13 = std::wistream::operator>>(v39, &v37);
          v14 = std::wistream::operator>>(v13, v28);
          std::wistream::operator>>(v14, &v35);
          v28[1] = v37;
          v15 = v28[0];
          *((float *)v2 + 133) = v37;
          v29 = v15;
          v16 = v35;
          *((float *)v2 + 134) = v29;
          v30 = v16;
          *((float *)v2 + 135) = v30;
        }
        else if ( !wcscmp(v40, L"Ks") )
        {
          v17 = std::wistream::operator>>(v39, v31);
          v18 = std::wistream::operator>>(v17, &v36);
          std::wistream::operator>>(v18, &v22);
          v31[1] = v31[0];
          v19 = v36;
          *((float *)v2 + 136) = v31[0];
          v32 = v19;
          v20 = v22;
          *((float *)v2 + 137) = v32;
          v33 = v20;
          *((float *)v2 + 138) = v33;
        }
        else if ( !wcscmp(v40, L"d") || !wcscmp(v40, L"Tr") )
        {
          std::wistream::operator>>(v39, v2 + 280);
        }
        else if ( !wcscmp(v40, L"Ns") )
        {
          std::wistream::operator>>(v39, &v23);
          *((_DWORD *)v2 + 139) = v23;
        }
        else if ( !wcscmp(v40, L"illum") )
        {
          std::wistream::operator>>(v39, &v24);
          *((_BYTE *)v2 + 564) = v24 == 2;
        }
        else if ( !wcscmp(v40, L"map_Kd") )
        {
          std::operator>><wchar_t,std::char_traits<wchar_t>>(v39, v2 + 283);
        }
      }
      std::wistream::ignore(v39, 1000, 10);
    }
    goto LABEL_29;
  }
LABEL_30:
  std::wifstream::close(v39);
  v44 = -1;
  std::wifstream::`vbase destructor'(v39);
  return 0;
}
