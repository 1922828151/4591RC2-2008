/*
 * func-name: sub_102A6EC0
 * func-address: 0x102a6ec0
 * callers: 0x1000e6e2
 * callees: 0x10002842, 0x10002c7a, 0x1000d10c, 0x1000e56b, 0x10013eb7, 0x10015eab, 0x10016a4f, 0x102c9d62
 */

unsigned int __stdcall sub_102A6EC0(char a1, int a2)
{
  unsigned int result; // eax
  _DWORD *v3; // ebp
  unsigned int v4; // ebx
  int i; // edi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int j; // edi
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  unsigned int k; // edi
  int v29; // ecx
  int v30; // eax
  int v31; // [esp-24h] [ebp-F4h]
  int v32; // [esp-1Ch] [ebp-ECh]
  int v33; // [esp-14h] [ebp-E4h]
  int v34; // [esp-Ch] [ebp-DCh]
  int v35; // [esp-8h] [ebp-D8h]
  int v36; // [esp-4h] [ebp-D4h]
  int v37; // [esp-4h] [ebp-D4h]
  int v38; // [esp-4h] [ebp-D4h]
  int v39; // [esp-4h] [ebp-D4h]
  int v40; // [esp-4h] [ebp-D4h]
  Outpop::Utility::Ref_Object *v41; // [esp+14h] [ebp-BCh] BYREF
  int v42; // [esp+18h] [ebp-B8h]
  _BYTE v43[8]; // [esp+1Ch] [ebp-B4h] BYREF
  _BYTE v44[128]; // [esp+24h] [ebp-ACh] BYREF
  _BYTE v45[28]; // [esp+A4h] [ebp-2Ch] BYREF
  int v46; // [esp+CCh] [ebp-4h]

  result = sub_10016A4F(a1);
  v3 = (_DWORD *)result;
  if ( result )
  {
    v4 = 0;
    for ( i = 0; ; i += 80 )
    {
      result = v3[50];
      v42 = i;
      if ( !result )
        break;
      result = (int)(v3[51] - result) / 80;
      if ( v4 >= result )
        break;
      v6 = v3[50];
      if ( !v6 || v4 >= (v3[51] - v6) / 80 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(i + v3[50]) == a2 )
      {
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(
          v43,
          3,
          1);
        v7 = v3[50];
        v46 = 0;
        if ( !v7 || v4 >= (v3[51] - v7) / 80 )
          _invalid_parameter_noinfo();
        v8 = v3[50];
        v9 = *(_DWORD *)(v8 + i + 52);
        v10 = (_DWORD *)(i + v8);
        if ( v9 )
          v11 = (v10[14] - v9) >> 2;
        else
          v11 = 0;
        v36 = v11;
        v34 = v10[11];
        v33 = v10[10];
        v32 = v10[9];
        v31 = v10[1];
        v12 = std::operator<<<char>(v44, v10 + 2);
        v13 = sub_10002C7A(v12, 32);
        v14 = std::ostream::operator<<(v13, v31);
        v15 = sub_10002C7A(v14, 32);
        v16 = std::ostream::operator<<(v15, v32);
        v17 = sub_10002C7A(v16, 32);
        v18 = std::ostream::operator<<(v17, v33);
        v19 = sub_10002C7A(v18, 32);
        v20 = std::ostream::operator<<(v19, v34);
        v21 = sub_10002C7A(v20, 32);
        std::ostream::operator<<(v21, v36);
        for ( j = 0; ; ++j )
        {
          v23 = v10[13];
          if ( !v23 || j >= (v10[14] - v23) >> 2 )
            break;
          v37 = *(_DWORD *)(v10[13] + 4 * j);
          v24 = sub_10002C7A((int)v44, 32);
          std::ostream::operator<<(v24, v37);
        }
        v25 = v10[17];
        if ( v25 )
          v26 = (v10[18] - v25) >> 2;
        else
          v26 = 0;
        v38 = v26;
        v27 = sub_10002C7A((int)v44, 32);
        std::ostream::operator<<(v27, v38);
        for ( k = 0; ; ++k )
        {
          v29 = v10[17];
          if ( !v29 || k >= (v10[18] - v29) >> 2 )
            break;
          v39 = *(_DWORD *)(v10[17] + 4 * k);
          v30 = sub_10002C7A((int)v44, 32);
          std::ostream::operator<<(v30, v39);
        }
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v43, v45);
        LOBYTE(v46) = 1;
        sub_1000D10C((int)&v41, 14, 14005, 0, 0, 512);
        LOBYTE(v46) = 2;
        sub_10015EAB((int)&a2);
        sub_10002842((int)v45);
        sub_1000E56B(v3[59], (int)&v41);
        sub_10013EB7(v35, v40);
        LOBYTE(v46) = 1;
        if ( v41 )
          Outpop::Utility::Ref_Object::release(v41);
        LOBYTE(v46) = 0;
        std::string::~string(v45);
        v46 = -1;
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(v43);
        i = v42;
      }
      ++v4;
    }
  }
  return result;
}
