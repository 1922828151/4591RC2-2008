/*
 * func-name: ?FlushScene@NxPhysics@@QAEXXZ
 * func-address: 0x10144030
 * callers: 0x101445d0, 0x101447f0, 0x10144860, 0x10144910, 0x101459a0, 0x10145cd0, 0x10145d50
 * callees: 0x10052d30, 0x10053240, 0x10053650
 */

void __thiscall NxPhysics::FlushScene(NxPhysics *this)
{
  void (__cdecl *v2)(); // ebx
  unsigned int v3; // edi
  char *v4; // esi
  int i; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  char *v15; // ebx
  unsigned int v16; // edi
  void (__cdecl *v17)(); // ebx
  unsigned int v18; // edi
  int j; // ebp
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  void (__thiscall ***v24)(_DWORD, int); // ebx
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  char *v29; // ebx
  unsigned int v30; // ebp
  char *v31; // edi
  int v32; // edi
  unsigned int v33; // esi
  int k; // edi
  int v35; // eax
  int v36; // eax
  void (__cdecl *v37)(); // ebp
  int v38; // eax
  void (__thiscall ***v39)(_DWORD, _DWORD); // ebp
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ebp
  int v44; // eax
  char *v45; // esi
  char *v46; // ebp
  char *v47; // edi
  char *v48; // eax
  int v49; // ecx
  int v51; // [esp+14h] [ebp-Ch] BYREF
  char v52[4]; // [esp+1Ch] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 3) && *(_BYTE *)this )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, _DWORD, char *))(**((_DWORD **)this + 3) + 568))(
               *((_DWORD *)this + 3),
               1,
               0,
               v52) )
      ;
    v2 = invalid_parameter_noinfo;
    *(_BYTE *)this = 0;
    v3 = 0;
    v4 = (char *)this + 48;
    for ( i = 0; ; i += 112 )
    {
      v6 = *((_DWORD *)v4 + 1);
      if ( !v6 || v3 >= (*((_DWORD *)v4 + 2) - v6) / 112 )
        break;
      v7 = *((_DWORD *)v4 + 1);
      if ( !v7 || v3 >= (*((_DWORD *)v4 + 2) - v7) / 112 )
        v2();
      v8 = *((_DWORD *)v4 + 1);
      if ( (*(_BYTE *)(v8 + i) & 2) != 0 )
      {
        if ( !v8 || v3 >= (*((_DWORD *)v4 + 2) - v8) / 112 )
          v2();
        v9 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)v4 + 1) + i + 4);
        v10 = *((_DWORD *)v4 + 1);
        if ( !v10 || v3 >= (*((_DWORD *)v4 + 2) - v10) / 112 )
          invalid_parameter_noinfo();
        (**v9)(v9, *((_DWORD *)v4 + 1) + i + 8);
        v2 = invalid_parameter_noinfo;
      }
      v11 = *((_DWORD *)v4 + 1);
      if ( !v11 || v3 >= (*((_DWORD *)v4 + 2) - v11) / 112 )
        v2();
      v12 = *((_DWORD *)v4 + 1);
      if ( (*(_BYTE *)(v12 + i) & 4) != 0 )
      {
        if ( !v12 || v3 >= (*((_DWORD *)v4 + 2) - v12) / 112 )
          v2();
        v13 = *(_DWORD *)(*((_DWORD *)v4 + 1) + i + 4);
        v14 = *((_DWORD *)v4 + 1);
        if ( !v14 || v3 >= (*((_DWORD *)v4 + 2) - v14) / 112 )
          invalid_parameter_noinfo();
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 4))(v13, *((_DWORD *)v4 + 1) + i + 8);
        v2 = invalid_parameter_noinfo;
      }
      ++v3;
    }
    v15 = (char *)*((_DWORD *)v4 + 2);
    if ( *((_DWORD *)v4 + 1) > (unsigned int)v15 )
      invalid_parameter_noinfo();
    v16 = *((_DWORD *)v4 + 1);
    if ( v16 > *((_DWORD *)v4 + 2) )
      invalid_parameter_noinfo();
    sub_10053650((char **)v4, &v51, (int)v4, v16, (int)v4, v15);
    v17 = invalid_parameter_noinfo;
    v18 = 0;
    for ( j = 0; ; j += 112 )
    {
      v20 = *((_DWORD *)this + 17);
      if ( !v20 || v18 >= (*((_DWORD *)this + 18) - v20) / 112 )
        break;
      v21 = *((_DWORD *)this + 17);
      if ( !v21 || v18 >= (*((_DWORD *)this + 18) - v21) / 112 )
        v17();
      v22 = *((_DWORD *)this + 17);
      if ( (*(_BYTE *)(v22 + j) & 2) != 0 )
      {
        if ( !v22 || v18 >= (*((_DWORD *)this + 18) - v22) / 112 )
          v17();
        v23 = *((_DWORD *)this + 17);
        v24 = *(void (__thiscall ****)(_DWORD, int))(v23 + j + 4);
        if ( !v23 || v18 >= (*((_DWORD *)this + 18) - v23) / 112 )
          invalid_parameter_noinfo();
        (**v24)(v24, *((_DWORD *)this + 17) + j + 8);
        v17 = invalid_parameter_noinfo;
      }
      v25 = *((_DWORD *)this + 17);
      if ( !v25 || v18 >= (*((_DWORD *)this + 18) - v25) / 112 )
        v17();
      v26 = *((_DWORD *)this + 17);
      if ( (*(_BYTE *)(v26 + j) & 4) != 0 )
      {
        if ( !v26 || v18 >= (*((_DWORD *)this + 18) - v26) / 112 )
          v17();
        v27 = *(_DWORD *)(*((_DWORD *)this + 17) + j + 4);
        v28 = *((_DWORD *)this + 17);
        if ( !v28 || v18 >= (*((_DWORD *)this + 18) - v28) / 112 )
          invalid_parameter_noinfo();
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 4))(v27, *((_DWORD *)this + 17) + j + 8);
        v17 = invalid_parameter_noinfo;
      }
      ++v18;
    }
    v29 = (char *)*((_DWORD *)this + 18);
    if ( *((_DWORD *)this + 17) > (unsigned int)v29 )
      invalid_parameter_noinfo();
    v30 = *((_DWORD *)this + 17);
    if ( v30 > *((_DWORD *)this + 18) )
      invalid_parameter_noinfo();
    if ( (char *)v30 != v29 )
    {
      v31 = (char *)*((_DWORD *)this + 18);
      LOBYTE(v51) = 0;
      sub_10052D30(v29, v31, v30);
      v32 = v30 + 112 * ((v31 - v29) / 112);
      sub_10053240(v32, *((_DWORD *)this + 18));
      *((_DWORD *)this + 18) = v32;
    }
    v33 = 0;
    for ( k = 0; ; k += 12 )
    {
      v35 = *((_DWORD *)this + 21);
      if ( !v35 || v33 >= (*((_DWORD *)this + 22) - v35) / 12 )
        break;
      v36 = *((_DWORD *)this + 21);
      if ( v36 && v33 < (*((_DWORD *)this + 22) - v36) / 12 )
      {
        v37 = invalid_parameter_noinfo;
      }
      else
      {
        v37 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v38 = *((_DWORD *)this + 21);
      if ( (*(_BYTE *)(k + v38) & 1) != 0 )
      {
        if ( !v38 || v33 >= (*((_DWORD *)this + 22) - v38) / 12 )
          v37();
        v39 = *(void (__thiscall ****)(_DWORD, _DWORD))(k + *((_DWORD *)this + 21) + 4);
        v40 = *((_DWORD *)this + 21);
        if ( !v40 || v33 >= (*((_DWORD *)this + 22) - v40) / 12 )
          invalid_parameter_noinfo();
        (**v39)(v39, *(_DWORD *)(*((_DWORD *)this + 21) + k + 8));
        v37 = invalid_parameter_noinfo;
      }
      v41 = *((_DWORD *)this + 21);
      if ( !v41 || v33 >= (*((_DWORD *)this + 22) - v41) / 12 )
        v37();
      v42 = *((_DWORD *)this + 21);
      if ( (*(_BYTE *)(k + v42) & 2) != 0 )
      {
        if ( !v42 || v33 >= (*((_DWORD *)this + 22) - v42) / 12 )
          v37();
        v43 = *(_DWORD *)(k + *((_DWORD *)this + 21) + 4);
        v44 = *((_DWORD *)this + 21);
        if ( !v44 || v33 >= (*((_DWORD *)this + 22) - v44) / 12 )
          invalid_parameter_noinfo();
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v43 + 4))(v43, *(_DWORD *)(k + *((_DWORD *)this + 21) + 8));
      }
      ++v33;
    }
    v45 = (char *)*((_DWORD *)this + 22);
    if ( *((_DWORD *)this + 21) > (unsigned int)v45 )
      invalid_parameter_noinfo();
    v46 = (char *)*((_DWORD *)this + 21);
    if ( (unsigned int)v46 > *((_DWORD *)this + 22) )
      invalid_parameter_noinfo();
    if ( v46 != v45 )
    {
      v47 = (char *)*((_DWORD *)this + 22);
      v48 = v45;
      if ( v45 != v47 )
      {
        v49 = v46 - v45;
        do
        {
          *(_DWORD *)&v48[v49] = *(_DWORD *)v48;
          *(_DWORD *)&v48[v49 + 4] = *((_DWORD *)v48 + 1);
          *(_DWORD *)&v48[v49 + 8] = *((_DWORD *)v48 + 2);
          v48 += 12;
        }
        while ( v48 != v47 );
      }
      *((_DWORD *)this + 22) = &v46[12 * ((v47 - v45) / 12)];
    }
  }
}
