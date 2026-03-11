/*
 * func-name: sub_10096800
 * func-address: 0x10096800
 * callers: 0x10097ea0
 * callees: 0x100116a0, 0x10059c90, 0x101a2500
 */

int __cdecl sub_10096800(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // esi
  char *v6; // edi
  int v7; // edi
  int i; // ebx
  unsigned int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  _BYTE *v13; // edx
  int v14; // ecx
  int v15; // edi
  _DWORD *v16; // ebp
  _DWORD *v17; // edi
  int v18; // [esp+Ch] [ebp-6Ch]
  int v19; // [esp+10h] [ebp-68h]
  int v20; // [esp+14h] [ebp-64h] BYREF
  int v21; // [esp+18h] [ebp-60h]
  int v22; // [esp+1Ch] [ebp-5Ch] BYREF
  int v23; // [esp+24h] [ebp-54h] BYREF
  void *v24; // [esp+28h] [ebp-50h]
  void *Source; // [esp+2Ch] [ebp-4Ch]
  int v26; // [esp+30h] [ebp-48h]
  _BYTE v27[28]; // [esp+34h] [ebp-44h] BYREF
  _BYTE v28[28]; // [esp+50h] [ebp-28h] BYREF
  int v29; // [esp+74h] [ebp-4h]

  v18 = std::string::size(a2);
  v21 = std::string::size(a1);
  v24 = 0;
  Source = 0;
  v26 = 0;
  v29 = 0;
  v3 = std::string::find(a1, a2, 0);
  v4 = v3;
  v20 = v3;
  if ( v3 < 0 )
    return 0;
  v19 = 0;
  if ( v3 > 0 )
  {
    do
    {
      ++v19;
      v6 = (char *)Source;
      if ( v24 && ((_BYTE *)Source - (_BYTE *)v24) >> 2 < (unsigned int)((v26 - (int)v24) >> 2) )
      {
        *(_DWORD *)Source = v4;
        Source = v6 + 4;
      }
      else
      {
        if ( v24 > Source )
          invalid_parameter_noinfo();
        sub_10059C90(&v23, &v22, &v23, v6, &v20);
      }
      v7 = v4;
      v4 = std::string::find(a1, a2, v18 + v4 + 1);
      v20 = v4;
    }
    while ( v4 > v7 );
  }
  for ( i = 0; ; ++i )
  {
    v9 = v24 ? ((_BYTE *)Source - (_BYTE *)v24) >> 2 : 0;
    if ( i > v9 )
      break;
    std::string::string(v27);
    v10 = v24;
    LOBYTE(v29) = 1;
    if ( !i )
    {
      if ( !v24 || !(((_BYTE *)Source - (_BYTE *)v24) >> 2) )
      {
        invalid_parameter_noinfo();
        v10 = v24;
      }
      v11 = std::string::substr(a1, v28, 0, *v10);
      LOBYTE(v29) = 2;
LABEL_41:
      std::string::operator=(v27, v11);
      LOBYTE(v29) = 1;
      std::string::~string(v28);
      goto LABEL_42;
    }
    v12 = i - 1;
    if ( !v24 || (v13 = Source, v12 >= ((_BYTE *)Source - (_BYTE *)v24) >> 2) )
    {
      invalid_parameter_noinfo();
      v13 = Source;
      v10 = v24;
    }
    v14 = v18 + v10[v12];
    if ( v14 < v21 )
    {
      if ( v10 )
        v15 = (v13 - (_BYTE *)v10) >> 2;
      else
        v15 = 0;
      if ( i == v15 )
      {
        v11 = std::string::substr(a1, v28, v14, std::string::npos);
        LOBYTE(v29) = 3;
      }
      else
      {
        if ( i <= 0 )
          goto LABEL_42;
        if ( !v10 || i >= (unsigned int)((v13 - (_BYTE *)v10) >> 2) )
        {
          invalid_parameter_noinfo();
          v13 = Source;
          v10 = v24;
        }
        v16 = &v10[i];
        if ( !v10 || v12 >= (v13 - (_BYTE *)v10) >> 2 )
        {
          invalid_parameter_noinfo();
          v13 = Source;
          v10 = v24;
        }
        v17 = &v10[v12];
        if ( !v10 || v12 >= (v13 - (_BYTE *)v10) >> 2 )
        {
          invalid_parameter_noinfo();
          v10 = v24;
        }
        v11 = std::string::substr(a1, v28, v18 + v10[v12], *v16 - *v17 - v18);
        LOBYTE(v29) = 4;
      }
      goto LABEL_41;
    }
LABEL_42:
    if ( std::string::size(v27) )
      sub_100116A0(a3, v27);
    LOBYTE(v29) = 0;
    std::string::~string(v27);
  }
  if ( v24 )
    operator delete(v24);
  return v19;
}
