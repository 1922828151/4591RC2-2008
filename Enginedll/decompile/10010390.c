/*
 * func-name: ?ClearUnusedFiles@ISave@@QAEXXZ
 * func-address: 0x10010390
 * callers: 0x10005230, 0x10044770
 * callees: 0x1017a670, 0x1017b280, 0x101a2500
 */

void __thiscall ISave::ClearUnusedFiles(ISave *this)
{
  char *v2; // esi
  int last_of; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  char *v7; // ebx
  _BYTE *v8; // esi
  int v9; // eax
  int v10; // eax
  char *v11; // esi
  int v12; // esi
  int v13; // eax
  char v14; // bl
  int v15; // eax
  const CHAR *v16; // eax
  unsigned int v17; // ebx
  char *v18; // edi
  char *v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  char v24; // bl
  bool v25; // zf
  int v26; // eax
  const CHAR *v27; // eax
  char *v28; // esi
  char *v29; // edi
  unsigned int v30; // [esp+10h] [ebp-ACh]
  int k; // [esp+10h] [ebp-ACh]
  int i; // [esp+14h] [ebp-A8h]
  unsigned int v33; // [esp+14h] [ebp-A8h]
  int j; // [esp+18h] [ebp-A4h]
  int m; // [esp+18h] [ebp-A4h]
  _BYTE v36[4]; // [esp+1Ch] [ebp-A0h] BYREF
  void *v37; // [esp+20h] [ebp-9Ch]
  _BYTE *v38; // [esp+24h] [ebp-98h]
  int v39; // [esp+28h] [ebp-94h]
  unsigned int v40; // [esp+2Ch] [ebp-90h]
  _BYTE v41[4]; // [esp+30h] [ebp-8Ch] BYREF
  void *v42; // [esp+34h] [ebp-88h]
  char *v43; // [esp+38h] [ebp-84h]
  int v44; // [esp+3Ch] [ebp-80h]
  _BYTE v45[28]; // [esp+40h] [ebp-7Ch] BYREF
  _BYTE v46[28]; // [esp+5Ch] [ebp-60h] BYREF
  _BYTE v47[28]; // [esp+78h] [ebp-44h] BYREF
  _BYTE v48[28]; // [esp+94h] [ebp-28h] BYREF
  int v49; // [esp+B8h] [ebp-4h]

  v2 = (char *)this + 4;
  last_of = std::string::find_last_of((char *)this + 4, "\\", std::string::npos);
  v4 = 0;
  std::string::substr(v2, v45, 0, last_of + 1);
  v49 = 2;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v5 = std::string::c_str(v45);
  sub_1017B280(v5, v36, 2, "*.prt", 0);
  v6 = std::string::c_str(v45);
  sub_1017B280(v6, v41, 2, "*.buf", 0);
  v30 = 0;
  for ( i = 0; ; i += 28 )
  {
    v7 = (char *)v37;
    if ( !v37 )
      break;
    v8 = v38;
    if ( v30 >= (v38 - (_BYTE *)v37) / 28 )
      break;
    for ( j = 0; ; j += 28 )
    {
      v9 = *((_DWORD *)this + 9);
      if ( !v9 || v4 >= (*((_DWORD *)this + 10) - v9) / 28 )
        break;
      v10 = *((_DWORD *)this + 9);
      if ( !v10 || v4 >= (*((_DWORD *)this + 10) - v10) / 28 )
        invalid_parameter_noinfo();
      std::string::string(v47, j + *((_DWORD *)this + 9));
      v11 = (char *)v37;
      LOBYTE(v49) = 3;
      if ( !v37 || v30 >= (v38 - (_BYTE *)v37) / 28 )
      {
        invalid_parameter_noinfo();
        v11 = (char *)v37;
      }
      v12 = sub_1017A670(v46, &v11[i]);
      LOBYTE(v49) = 4;
      v13 = sub_1017A670(v48, v47);
      LOBYTE(v49) = 5;
      v14 = std::operator==<char>(v13, v12);
      LOBYTE(v49) = 4;
      std::string::~string(v48);
      LOBYTE(v49) = 3;
      std::string::~string(v46);
      LOBYTE(v49) = 2;
      std::string::~string(v47);
      if ( v14 )
        goto LABEL_19;
      v8 = v38;
      v7 = (char *)v37;
      ++v4;
    }
    if ( !v7 || v30 >= (v8 - v7) / 28 )
    {
      invalid_parameter_noinfo();
      v7 = (char *)v37;
    }
    v15 = std::operator+<char>(v46, v45, &v7[i]);
    LOBYTE(v49) = 6;
    v16 = (const CHAR *)std::string::c_str(v15);
    DeleteFileA(v16);
    LOBYTE(v49) = 2;
    std::string::~string(v46);
LABEL_19:
    ++v30;
    v4 = 0;
  }
  v17 = 0;
  for ( k = 0; ; k += 28 )
  {
    v18 = (char *)v42;
    v19 = v43;
    v40 = v17;
    if ( !v42 || v17 >= (v43 - (_BYTE *)v42) / 28 )
      break;
    v33 = 0;
    for ( m = 0; ; m += 28 )
    {
      v20 = *((_DWORD *)this + 9);
      if ( !v20 || v33 >= (*((_DWORD *)this + 10) - v20) / 28 )
        break;
      if ( !v18 || v17 >= (v19 - v18) / 28 )
      {
        invalid_parameter_noinfo();
        v18 = (char *)v42;
      }
      v21 = sub_1017A670(v48, &v18[k]);
      v22 = *((_DWORD *)this + 9);
      LOBYTE(v49) = 7;
      if ( !v22 || v33 >= (*((_DWORD *)this + 10) - v22) / 28 )
        invalid_parameter_noinfo();
      v23 = sub_1017A670(v46, m + *((_DWORD *)this + 9));
      LOBYTE(v49) = 8;
      v24 = std::operator==<char>(v23, v21);
      LOBYTE(v49) = 7;
      std::string::~string(v46);
      LOBYTE(v49) = 2;
      std::string::~string(v48);
      v25 = v24 == 0;
      v17 = v40;
      if ( !v25 )
        goto LABEL_38;
      ++v33;
      v19 = v43;
      v18 = (char *)v42;
    }
    if ( !v18 || v17 >= (v19 - v18) / 28 )
    {
      invalid_parameter_noinfo();
      v18 = (char *)v42;
    }
    v26 = std::operator+<char>(v47, v45, &v18[k]);
    LOBYTE(v49) = 9;
    v27 = (const CHAR *)std::string::c_str(v26);
    DeleteFileA(v27);
    LOBYTE(v49) = 2;
    std::string::~string(v47);
LABEL_38:
    ++v17;
  }
  LOBYTE(v49) = 1;
  if ( v42 )
  {
    if ( v42 != v43 )
    {
      do
      {
        std::string::~string(v18);
        v18 += 28;
      }
      while ( v18 != v19 );
      v18 = (char *)v42;
    }
    operator delete(v18);
  }
  v28 = (char *)v37;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  LOBYTE(v49) = 0;
  if ( v37 )
  {
    v29 = v38;
    if ( v37 != v38 )
    {
      do
      {
        std::string::~string(v28);
        v28 += 28;
      }
      while ( v28 != v29 );
      v28 = (char *)v37;
    }
    operator delete(v28);
  }
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v49 = -1;
  std::string::~string(v45);
}
