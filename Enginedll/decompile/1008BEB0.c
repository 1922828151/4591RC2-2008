/*
 * func-name: ?ClearUndos@Editor@@QAEXXZ
 * func-address: 0x1008beb0
 * callers: none
 * callees: 0x1000f2e0, 0x100e6830, 0x101a2500
 */

void __thiscall Editor::ClearUndos(Editor *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  unsigned int i; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  int v7; // ecx
  _DWORD *v8; // edx
  _DWORD *v9; // edi
  int v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // edi
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  int v17; // ecx
  _DWORD *v18; // edx
  _DWORD *v19; // esi
  unsigned int j; // edi
  _DWORD *v21; // eax
  _DWORD *v22; // esi
  int v23; // ecx
  _DWORD *v24; // ecx
  _DWORD *v25; // esi
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // esi
  int v29; // ecx
  _DWORD ***v30; // edx
  _DWORD **v31; // esi

  while ( *((_DWORD *)this + 538) )
  {
    v2 = (_DWORD *)*((_DWORD *)this + 537);
    v3 = (_DWORD *)*v2;
    if ( (_DWORD *)*v2 == v2 )
      invalid_parameter_noinfo();
    if ( v3[2] == 1 )
    {
      for ( i = 0; ; ++i )
      {
        v5 = (_DWORD *)*((_DWORD *)this + 537);
        v6 = (_DWORD *)*v5;
        if ( (_DWORD *)*v5 == v5 )
          invalid_parameter_noinfo();
        v7 = v6[9];
        if ( !v7 || i >= (v6[10] - v7) >> 2 )
          break;
        v8 = (_DWORD *)*((_DWORD *)this + 537);
        v9 = (_DWORD *)*v8;
        if ( (_DWORD *)*v8 == v8 )
          invalid_parameter_noinfo();
        v10 = v9[9];
        if ( !v10 || i >= (v9[10] - v10) >> 2 )
          invalid_parameter_noinfo();
        if ( *(_DWORD *)(v9[9] + 4 * i) )
        {
          v11 = (_DWORD *)*((_DWORD *)this + 537);
          v12 = (_DWORD *)*v11;
          if ( (_DWORD *)*v11 == v11 )
            invalid_parameter_noinfo();
          v13 = v12[9];
          if ( !v13 || i >= (v12[10] - v13) >> 2 )
            invalid_parameter_noinfo();
          v14 = *(_DWORD *)(v12[9] + 4 * i);
          if ( v14 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 80))(v14, 1);
        }
        v15 = (_DWORD *)*((_DWORD *)this + 537);
        v16 = (_DWORD *)*v15;
        if ( (_DWORD *)*v15 == v15 )
          invalid_parameter_noinfo();
        v17 = v16[9];
        if ( !v17 || i >= (v16[10] - v17) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(v16[9] + 4 * i) = 0;
      }
      v18 = (_DWORD *)*((_DWORD *)this + 537);
      v19 = (_DWORD *)*v18;
      if ( (_DWORD *)*v18 == v18 )
        invalid_parameter_noinfo();
      if ( v19[2] == 7 )
      {
        for ( j = 0; ; ++j )
        {
          v21 = (_DWORD *)*((_DWORD *)this + 537);
          v22 = (_DWORD *)*v21;
          if ( (_DWORD *)*v21 == v21 )
            invalid_parameter_noinfo();
          v23 = v22[13];
          if ( !v23 || j >= (v22[14] - v23) >> 2 )
            break;
          v24 = (_DWORD *)*((_DWORD *)this + 537);
          v25 = (_DWORD *)*v24;
          if ( (_DWORD *)*v24 == v24 )
            invalid_parameter_noinfo();
          v26 = v25[13];
          if ( !v26 || j >= (v25[14] - v26) >> 2 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(v25[13] + 4 * j) )
          {
            v27 = (_DWORD *)*((_DWORD *)this + 537);
            v28 = (_DWORD *)*v27;
            if ( (_DWORD *)*v27 == v27 )
              invalid_parameter_noinfo();
            v29 = v28[13];
            if ( !v29 || j >= (v28[14] - v29) >> 2 )
              invalid_parameter_noinfo();
            Material::Release(*(Material **)(v28[13] + 4 * j));
          }
        }
      }
    }
    v30 = (_DWORD ***)*((_DWORD *)this + 537);
    v31 = *v30;
    if ( *v30 == v30 )
      invalid_parameter_noinfo();
    if ( v31 != *((_DWORD ***)this + 537) )
    {
      *v31[1] = *v31;
      (*v31)[1] = v31[1];
      sub_1000F2E0((int)(v31 + 2));
      operator delete(v31);
      --*((_DWORD *)this + 538);
    }
  }
}
