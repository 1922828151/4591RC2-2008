/*
 * func-name: sub_101E0510
 * func-address: 0x101e0510
 * callers: 0x1000ca6d
 * callees: 0x10003d82, 0x10003f21, 0x10012440, 0x102c9d62, 0x102ca13e
 */

_DWORD *__cdecl sub_101E0510(_DWORD *a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  size_t v8; // ebp
  int v9; // eax
  size_t v10; // ebp
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  size_t v17; // ebp
  int v18; // eax
  size_t v19; // ebp
  int v20; // eax
  size_t v21; // ebp
  int v22; // eax
  int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // eax
  bool v28; // cc
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  char v38; // [esp+14h] [ebp-B0h]
  unsigned __int8 v39; // [esp+15h] [ebp-AFh]
  char v40; // [esp+16h] [ebp-AEh]
  unsigned __int8 v41; // [esp+17h] [ebp-ADh]
  unsigned int v42; // [esp+18h] [ebp-ACh] BYREF
  __int16 v43; // [esp+1Ch] [ebp-A8h]
  char v44; // [esp+1Eh] [ebp-A6h]
  char v45; // [esp+1Fh] [ebp-A5h]
  int v46; // [esp+20h] [ebp-A4h]
  int v47; // [esp+24h] [ebp-A0h]
  _BYTE v48[28]; // [esp+28h] [ebp-9Ch] BYREF
  _BYTE v49[28]; // [esp+44h] [ebp-80h] BYREF
  _BYTE v50[28]; // [esp+60h] [ebp-64h] BYREF
  _BYTE v51[28]; // [esp+7Ch] [ebp-48h] BYREF
  _BYTE v52[28]; // [esp+98h] [ebp-2Ch] BYREF
  int v53; // [esp+C0h] [ebp-4h]

  std::string::string(v52);
  v53 = 0;
  std::string::string(v50);
  LOBYTE(v53) = 1;
  std::string::string(v48);
  LOBYTE(v53) = 2;
  std::string::string(v51);
  LOBYTE(v53) = 3;
  std::string::string(v49);
  v2 = a1[3];
  v3 = a1[2];
  LOBYTE(v53) = 4;
  if ( v2 + 4 <= v3 )
  {
    v46 = *(_DWORD *)(v2 + a1[1]);
    a1[3] = v2 + 4;
  }
  v4 = a1[3];
  if ( v4 + 1 <= v3 )
  {
    v41 = *(_BYTE *)(v4 + a1[1]);
    a1[3] = v4 + 1;
  }
  v5 = a1[3];
  if ( v5 + 4 <= v3 )
  {
    v47 = *(_DWORD *)(v5 + a1[1]);
    a1[3] = v5 + 4;
  }
  v6 = a1[3];
  if ( v6 + 4 <= v3 )
  {
    v42 = *(_DWORD *)(v6 + a1[1]);
    a1[3] = v6 + 4;
  }
  v7 = a1[3];
  if ( v7 + 1 <= v3 )
  {
    v38 = *(_BYTE *)(v7 + a1[1]);
    a1[3] = v7 + 1;
  }
  v8 = sub_10003D82();
  v9 = a1[3];
  if ( v9 + v8 <= a1[2] )
  {
    memcpy(byte_103B6158, (const void *)(v9 + a1[1]), v8);
    byte_103B6158[v8] = 0;
    std::string::operator=(v52, byte_103B6158);
    a1[3] += v8;
  }
  v10 = sub_10003D82();
  v11 = a1[3];
  if ( v11 + v10 <= a1[2] )
  {
    memcpy(byte_103B6158, (const void *)(v11 + a1[1]), v10);
    byte_103B6158[v10] = 0;
    std::string::operator=(v50, byte_103B6158);
    a1[3] += v10;
  }
  v12 = a1[3];
  v13 = a1[2];
  if ( v12 + 1 <= v13 )
  {
    v39 = *(_BYTE *)(v12 + a1[1]);
    a1[3] = v12 + 1;
  }
  v14 = a1[3];
  if ( v14 + 1 <= v13 )
  {
    v40 = *(_BYTE *)(v14 + a1[1]);
    a1[3] = v14 + 1;
  }
  v15 = a1[3];
  if ( v15 + 4 > v13 )
  {
    v16 = v42;
  }
  else
  {
    v16 = *(_DWORD *)(v15 + a1[1]);
    a1[3] = v15 + 4;
  }
  v17 = sub_10003D82();
  v18 = a1[3];
  if ( v18 + v17 <= a1[2] )
  {
    memcpy(byte_103B6158, (const void *)(v18 + a1[1]), v17);
    byte_103B6158[v17] = 0;
    std::string::operator=(v48, byte_103B6158);
    a1[3] += v17;
  }
  v19 = sub_10003D82();
  v20 = a1[3];
  if ( v20 + v19 <= a1[2] )
  {
    memcpy(byte_103B6158, (const void *)(v20 + a1[1]), v19);
    byte_103B6158[v19] = 0;
    std::string::operator=(v51, byte_103B6158);
    a1[3] += v19;
  }
  v21 = sub_10003D82();
  v22 = a1[3];
  if ( v22 + v21 <= a1[2] )
  {
    memcpy(byte_103B6158, (const void *)(v22 + a1[1]), v21);
    byte_103B6158[v21] = 0;
    std::string::operator=(v49, byte_103B6158);
    a1[3] += v21;
  }
  v23 = v47;
  v24 = v46;
  *(_DWORD *)(a2 + 44) = v41;
  *(_DWORD *)(a2 + 48) = v23;
  *(_DWORD *)a2 = v24;
  v25 = v42;
  *(_BYTE *)(a2 + 40) = v38;
  *(_DWORD *)(a2 + 52) = v25;
  std::string::operator=(a2 + 4, v52);
  std::string::operator=(a2 + 60, v50);
  *(_DWORD *)(a2 + 56) = v39;
  *(_BYTE *)(a2 + 32) = v40;
  *(_DWORD *)(a2 + 36) = v16;
  std::string::operator=(a2 + 88, v48);
  std::string::operator=(a2 + 116, v51);
  std::string::operator=(a2 + 144, v49);
  v26 = *(_DWORD *)(a2 + 184);
  if ( *(_DWORD *)(a2 + 180) > v26 )
    _invalid_parameter_noinfo();
  v27 = *(_DWORD *)(a2 + 180);
  v28 = v27 <= *(_DWORD *)(a2 + 184);
  v42 = v27;
  if ( !v28 )
  {
    _invalid_parameter_noinfo();
    v27 = v42;
  }
  sub_10012440((int)&v42, a2 + 176, v27, a2 + 176, v26);
  v29 = a1[3];
  v30 = v29 + 4;
  if ( (unsigned int)(v29 + 4) > a1[2] )
  {
    v31 = v42;
  }
  else
  {
    v31 = *(_DWORD *)(v29 + a1[1]);
    a1[3] = v30;
  }
  if ( v31 > 0 )
  {
    v46 = v31;
    do
    {
      v32 = a1[3];
      v33 = a1[2];
      if ( v32 + 4 <= v33 )
      {
        v42 = *(_DWORD *)(v32 + a1[1]);
        a1[3] = v32 + 4;
      }
      v34 = a1[3];
      if ( v34 + 2 <= v33 )
      {
        v43 = *(_WORD *)(v34 + a1[1]);
        a1[3] = v34 + 2;
      }
      v35 = a1[3];
      if ( v35 + 1 <= v33 )
      {
        v44 = *(_BYTE *)(v35 + a1[1]);
        a1[3] = v35 + 1;
      }
      v36 = a1[3];
      if ( v36 + 1 <= v33 )
      {
        v45 = *(_BYTE *)(v36 + a1[1]);
        a1[3] = v36 + 1;
      }
      sub_10003F21((int)&v42);
      --v46;
    }
    while ( v46 );
  }
  *(_BYTE *)(a2 + 172) = 0;
  if ( (unsigned __int8)(v38 - 101) <= 9u )
    *(_BYTE *)(a2 + 172) = 1;
  LOBYTE(v53) = 3;
  std::string::~string(v49);
  LOBYTE(v53) = 2;
  std::string::~string(v51);
  LOBYTE(v53) = 1;
  std::string::~string(v48);
  LOBYTE(v53) = 0;
  std::string::~string(v50);
  v53 = -1;
  std::string::~string(v52);
  return a1;
}
