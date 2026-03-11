/*
 * func-name: ?PushUndo@Editor@@QAEXAAUUndo@1@@Z
 * func-address: 0x1008bd00
 * callers: 0x1008c0e0, 0x1008c1a0, 0x1008c260, 0x1008c320, 0x1008c3e0, 0x1008ce00, 0x1008de00, 0x1008e080, 0x10169d00
 * callees: 0x1000c2b0, 0x1000f2e0, 0x10012cd0, 0x10013c80, 0x100e6830, 0x101a2500
 */

void __thiscall Editor::PushUndo(Editor *this, struct Editor::Undo *a2)
{
  int v3; // eax
  int v4; // esi
  char *v5; // edi
  _DWORD *v6; // ebp
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  unsigned int i; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // ecx
  _DWORD *v13; // ecx
  _DWORD *v14; // esi
  int v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  unsigned int j; // ebx
  _DWORD *v19; // ecx
  _DWORD *v20; // esi
  int v21; // ecx
  _DWORD *v22; // edx
  _DWORD *v23; // esi
  int v24; // ecx
  _DWORD *v25; // ecx
  _DWORD *v26; // esi
  int v27; // ecx
  _DWORD ***v28; // eax
  _DWORD **v29; // esi

  v3 = *((_DWORD *)this + 533);
  if ( v3 != 1 && v3 != 2 || *(_DWORD *)a2 == 8 || *(_DWORD *)a2 == 9 )
  {
    *((_BYTE *)a2 + 4) = 1;
    sub_10013C80((_DWORD *)this + 539);
    v4 = *((_DWORD *)this + 537);
    v5 = (char *)this + 2144;
    v6 = sub_10012CD0(v4, *(CREControl **)(v4 + 4), (int)a2);
    sub_1000C2B0((_DWORD *)this + 536, 1u);
    *(_DWORD *)(v4 + 4) = v6;
    *(_DWORD *)v6[1] = v6;
    if ( *((_DWORD *)this + 538) > 0x32u )
    {
      v7 = (_DWORD *)*((_DWORD *)this + 537);
      v8 = (_DWORD *)*v7;
      if ( (_DWORD *)*v7 == v7 )
        invalid_parameter_noinfo();
      if ( v8[2] == 1 )
      {
        for ( i = 0; ; ++i )
        {
          v10 = (_DWORD *)*((_DWORD *)v5 + 1);
          v11 = (_DWORD *)*v10;
          if ( (_DWORD *)*v10 == v10 )
            invalid_parameter_noinfo();
          v12 = v11[9];
          if ( !v12 || i >= (v11[10] - v12) >> 2 )
            break;
          v13 = (_DWORD *)*((_DWORD *)v5 + 1);
          v14 = (_DWORD *)*v13;
          if ( (_DWORD *)*v13 == v13 )
            invalid_parameter_noinfo();
          v15 = v14[9];
          if ( !v15 || i >= (v14[10] - v15) >> 2 )
            invalid_parameter_noinfo();
          *(_DWORD *)(v14[9] + 4 * i) = 0;
        }
      }
      v16 = (_DWORD *)*((_DWORD *)v5 + 1);
      v17 = (_DWORD *)*v16;
      if ( (_DWORD *)*v16 == v16 )
        invalid_parameter_noinfo();
      if ( v17[2] == 7 )
      {
        for ( j = 0; ; ++j )
        {
          v19 = (_DWORD *)*((_DWORD *)v5 + 1);
          v20 = (_DWORD *)*v19;
          if ( (_DWORD *)*v19 == v19 )
            invalid_parameter_noinfo();
          v21 = v20[13];
          if ( !v21 || j >= (v20[14] - v21) >> 2 )
            break;
          v22 = (_DWORD *)*((_DWORD *)v5 + 1);
          v23 = (_DWORD *)*v22;
          if ( (_DWORD *)*v22 == v22 )
            invalid_parameter_noinfo();
          v24 = v23[13];
          if ( !v24 || j >= (v23[14] - v24) >> 2 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(v23[13] + 4 * j) )
          {
            v25 = (_DWORD *)*((_DWORD *)v5 + 1);
            v26 = (_DWORD *)*v25;
            if ( (_DWORD *)*v25 == v25 )
              invalid_parameter_noinfo();
            v27 = v26[13];
            if ( !v27 || j >= (v26[14] - v27) >> 2 )
              invalid_parameter_noinfo();
            Material::Release(*(Material **)(v26[13] + 4 * j));
          }
        }
      }
      v28 = (_DWORD ***)*((_DWORD *)v5 + 1);
      v29 = *v28;
      if ( *v28 == v28 )
        invalid_parameter_noinfo();
      if ( v29 != *((_DWORD ***)v5 + 1) )
      {
        *v29[1] = *v29;
        (*v29)[1] = v29[1];
        sub_1000F2E0((int)(v29 + 2));
        operator delete(v29);
        --*((_DWORD *)v5 + 2);
      }
    }
  }
}
