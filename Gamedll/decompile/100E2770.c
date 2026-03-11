/*
 * func-name: sub_100E2770
 * func-address: 0x100e2770
 * callers: 0x10002e19
 * callees: 0x10002ee1, 0x100093db, 0x1000cca2, 0x1000d305, 0x1000d634, 0x1000ecdc, 0x1000ff79, 0x100133d1, 0x100171c5, 0x102c9d62
 */

int __userpurge sub_100E2770@<eax>(int *a1@<ecx>, int *a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8, char a9)
{
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  int v11; // edi
  unsigned int v12; // ebp
  int v13; // ebx
  int v14; // eax
  _DWORD *v15; // esi
  _DWORD *v16; // esi
  int v17; // eax
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // eax
  _DWORD *v26; // ebp
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // [esp+8h] [ebp-184h] BYREF
  void *v31; // [esp+Ch] [ebp-180h]
  _DWORD v32[5]; // [esp+10h] [ebp-17Ch] BYREF
  int *v33; // [esp+24h] [ebp-168h]
  int *v34; // [esp+28h] [ebp-164h]
  int v35; // [esp+2Ch] [ebp-160h]
  int v36; // [esp+30h] [ebp-15Ch]
  int *v37; // [esp+40h] [ebp-14Ch]
  _DWORD *v38; // [esp+44h] [ebp-148h] BYREF
  int v39; // [esp+48h] [ebp-144h]
  int *v40; // [esp+4Ch] [ebp-140h]
  int v41; // [esp+50h] [ebp-13Ch]
  char v42[4]; // [esp+54h] [ebp-138h] BYREF
  int v43; // [esp+58h] [ebp-134h]
  int v44; // [esp+5Ch] [ebp-130h]
  int v45; // [esp+60h] [ebp-12Ch]
  char v46[4]; // [esp+64h] [ebp-128h] BYREF
  int v47; // [esp+68h] [ebp-124h]
  int v48; // [esp+70h] [ebp-11Ch] BYREF
  _DWORD v49[2]; // [esp+8Ch] [ebp-100h] BYREF
  _BYTE v50[28]; // [esp+94h] [ebp-F8h] BYREF
  char v51[28]; // [esp+B0h] [ebp-DCh] BYREF
  int v52; // [esp+CCh] [ebp-C0h] BYREF
  _DWORD v53[2]; // [esp+E8h] [ebp-A4h] BYREF
  _BYTE v54[28]; // [esp+F0h] [ebp-9Ch] BYREF
  char v55[28]; // [esp+10Ch] [ebp-80h] BYREF
  char v56; // [esp+128h] [ebp-64h] BYREF
  _BYTE v57[28]; // [esp+144h] [ebp-48h] BYREF
  _BYTE v58[28]; // [esp+160h] [ebp-2Ch] BYREF
  int v59; // [esp+188h] [ebp-4h]

  v9 = a1 + 1;
  v37 = a1;
  v40 = a2;
  v41 = a3;
  sub_100093DB((int)&v38, (int)&a4);
  v10 = v38;
  v47 = v9[1];
  if ( !v38 || v38 != v9 )
    _invalid_parameter_noinfo();
  if ( v39 == v47 )
  {
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v59 = 7;
    sub_1000ECDC(v35, v36);
    LOBYTE(v59) = 8;
    std::string::operator=(v50, v41);
    v40 = v32;
    std::string::string(v32, v50);
    LOBYTE(v59) = 9;
    v25 = Input::Instance(v32[0]);
    LOBYTE(a7) = 8;
    v49[0] = Input::GetControlHandle(v25);
    if ( v49[0] == -1 )
    {
      LOBYTE(v59) = 7;
      sub_10002EE1(v35, v36);
      v59 = -1;
      sub_100133D1();
      return -1;
    }
    std::string::operator=(v51, a2);
    v26 = a5;
    v49[1] = a5;
    std::string::string(v58);
    v34 = (int *)v58;
    v33 = &v52;
    v40 = &v30;
    LOBYTE(v59) = 10;
    std::string::string(&v30, v50);
    LOBYTE(v59) = 11;
    v27 = Input::Instance(v30);
    a9 = 10;
    Input::GetBoundKeys(v27);
    sub_1000D634((int)v49);
    v28 = a4;
    v48 = a4;
    sub_100171C5((int)v42);
    LOBYTE(v59) = 12;
    sub_1000D305((int)v46, (int)&v48);
    LOBYTE(v59) = 10;
    sub_100133D1();
    v38 = v26;
    v39 = v28;
    sub_1000FF79((int)v46, (int)&v38);
    v29 = v43;
    if ( v43 )
      v29 = (v44 - v43) / 92;
    v21 = v29 + 100 * v28;
    LOBYTE(v59) = 8;
    std::string::~string(v58);
    LOBYTE(v59) = 7;
    sub_10002EE1(v35, v36);
    v59 = -1;
    sub_100133D1();
  }
  else
  {
    if ( !v10 )
      _invalid_parameter_noinfo();
    if ( v39 == v10[1] )
      _invalid_parameter_noinfo();
    v11 = v39 + 16;
    v12 = 0;
    if ( sub_1000CCA2() )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = *(_DWORD *)(v11 + 4);
        if ( !v14 || v12 >= (*(_DWORD *)(v11 + 8) - v14) / 92 )
          _invalid_parameter_noinfo();
        v15 = (_DWORD *)(v13 + *(_DWORD *)(v11 + 4));
        if ( (unsigned __int8)std::operator==<char>(v15 + 9, v40) )
          break;
        ++v12;
        v13 += 92;
        if ( v12 >= sub_1000CCA2() )
          goto LABEL_16;
      }
      std::string::operator=(v15 + 2, v41);
      v37 = v32;
      v31 = v15 + 2;
      v15[1] = a5;
      std::string::string(v32, v31);
      v59 = 0;
      v19 = Input::Instance(v32[0]);
      a7 = -1;
      *v15 = Input::GetControlHandle(v19);
      std::string::string(&v48);
      v34 = &v48;
      v33 = v15 + 16;
      v37 = &v30;
      v59 = 1;
      std::string::string(&v30, v15 + 2);
      LOBYTE(v59) = 2;
      v20 = Input::Instance(v30);
      a9 = 1;
      Input::GetBoundKeys(v20);
      v21 = 100 * a4 + v12 + 1;
      v59 = -1;
      std::string::~string(&v48);
    }
    else
    {
LABEL_16:
      sub_1000ECDC(v35, v36);
      v59 = 3;
      std::string::operator=(v54, v41);
      v16 = a5;
      v37 = v32;
      v53[1] = a5;
      std::string::string(v32, v54);
      LOBYTE(v59) = 4;
      v17 = Input::Instance(v32[0]);
      LOBYTE(a7) = 3;
      v53[0] = Input::GetControlHandle(v17);
      if ( v53[0] == -1 )
      {
        v59 = -1;
        sub_10002EE1(v35, v36);
        return -1;
      }
      std::string::operator=(v55, v40);
      std::string::string(v57);
      v34 = (int *)v57;
      v33 = (int *)&v56;
      v37 = &v30;
      LOBYTE(v59) = 5;
      std::string::string(&v30, v54);
      LOBYTE(v59) = 6;
      v22 = Input::Instance(v30);
      a9 = 5;
      Input::GetBoundKeys(v22);
      sub_1000D634((int)v53);
      v38 = v16;
      v23 = a4;
      v39 = a4;
      sub_1000FF79((int)v46, (int)&v38);
      v24 = *(_DWORD *)(v11 + 4);
      if ( v24 )
        v24 = (*(_DWORD *)(v11 + 8) - v24) / 92;
      v21 = v24 + 100 * v23;
      LOBYTE(v59) = 3;
      std::string::~string(v57);
      v59 = -1;
      sub_10002EE1(v35, v36);
    }
  }
  return v21;
}
