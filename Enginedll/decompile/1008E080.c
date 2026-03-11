/*
 * func-name: ?DeleteSelected@Editor@@QAEXXZ
 * func-address: 0x1008e080
 * callers: none
 * callees: 0x1000f2e0, 0x10082690, 0x1008bd00, 0x10091b60, 0x101372f0, 0x101381e0
 */

void __thiscall Editor::DeleteSelected(Editor *this)
{
  Editor *v1; // ebp
  unsigned int v2; // edi
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // ebx
  char *v6; // esi
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edi
  int v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // edi
  _DWORD *v15; // ebx
  unsigned int v16; // edi
  _DWORD *v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // ebp
  unsigned int v21; // ebx
  unsigned int v22; // edi
  unsigned int v23; // edi
  int v24; // eax
  struct Editor::Undo *v25; // eax
  World *v26; // ecx
  int v27; // [esp+10h] [ebp-94h]
  unsigned int i; // [esp+14h] [ebp-90h]
  unsigned int v29; // [esp+18h] [ebp-8Ch]
  unsigned int v30; // [esp+1Ch] [ebp-88h]
  _BYTE v32[108]; // [esp+2Ch] [ebp-78h] BYREF
  int v33; // [esp+A0h] [ebp-4h]

  v1 = this;
  v2 = 0;
  *((_DWORD *)this + 509) = 0;
  while ( 1 )
  {
    v3 = *((_DWORD *)v1 + 562);
    v29 = v2;
    if ( !v3 || v2 >= (*((_DWORD *)v1 + 563) - v3) >> 2 )
    {
      v25 = (struct Editor::Undo *)sub_10091B60((char *)v1 + 2244, 1);
      Editor::PushUndo(v1, v25);
      v33 = -1;
      sub_1000F2E0((int)v32);
      Editor::UnSelectAll(v1);
      v26 = (World *)*((_DWORD *)v1 + 512);
      *((_BYTE *)v1 + 2060) = 1;
      World::RegenerateOcclusionTree(v26);
      return;
    }
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v1 + 562) + 4 * v2) + 441) = 0;
    v4 = *((_DWORD *)v1 + 562);
    if ( !v4 || v2 >= (*((_DWORD *)v1 + 563) - v4) >> 2 )
      invalid_parameter_noinfo();
    World::RemoveActor(*((World **)v1 + 512), *(struct Actor **)(*((_DWORD *)v1 + 562) + 4 * v2));
    v5 = 0;
    v6 = (char *)v1 + 2260;
    v27 = 0;
LABEL_8:
    v7 = *((_DWORD *)v6 + 1);
    v30 = v5;
    if ( v7 )
    {
      if ( v5 < (*((_DWORD *)v6 + 2) - v7) / 44 )
        break;
    }
    ++v2;
  }
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)v6 + 1);
    if ( !v8 || (int)(*((_DWORD *)v6 + 2) - v8) / 44 <= v5 )
      break;
    if ( v8 > *((_DWORD *)v6 + 2) )
      invalid_parameter_noinfo();
    v9 = v27 + v8;
    if ( v9 > *((_DWORD *)v6 + 2) || v9 < *((_DWORD *)v6 + 1) )
      invalid_parameter_noinfo();
    if ( v9 >= *((_DWORD *)v6 + 2) )
      invalid_parameter_noinfo();
    v10 = *(_DWORD *)(v9 + 32);
    if ( !v10 || i >= (*(_DWORD *)(v9 + 36) - v10) >> 2 )
    {
      v1 = this;
      v2 = v29;
      ++v5;
      v27 += 44;
      goto LABEL_8;
    }
    v11 = *((_DWORD *)v6 + 1);
    if ( !v11 || (int)(*((_DWORD *)v6 + 2) - v11) / 44 <= v5 )
      break;
    if ( v11 > *((_DWORD *)v6 + 2) )
      invalid_parameter_noinfo();
    v12 = v27 + v11;
    if ( v12 > *((_DWORD *)v6 + 2) || v12 < *((_DWORD *)v6 + 1) )
      invalid_parameter_noinfo();
    if ( v12 >= *((_DWORD *)v6 + 2) )
      invalid_parameter_noinfo();
    v13 = v12 + 28;
    v14 = *(_DWORD *)(v12 + 32);
    if ( !v14 || (int)(*(_DWORD *)(v13 + 8) - v14) >> 2 <= i )
      goto LABEL_80;
    if ( v14 > *(_DWORD *)(v13 + 8) )
      invalid_parameter_noinfo();
    v15 = (_DWORD *)(v14 + 4 * i);
    if ( (unsigned int)v15 > *(_DWORD *)(v13 + 8) || (unsigned int)v15 < *(_DWORD *)(v13 + 4) )
      invalid_parameter_noinfo();
    if ( (unsigned int)v15 >= *(_DWORD *)(v13 + 8) )
      invalid_parameter_noinfo();
    v16 = *((_DWORD *)this + 562);
    if ( !v16 || (int)(*((_DWORD *)this + 563) - v16) >> 2 <= v29 )
LABEL_80:
      std::vector<Actor *>::_Xran();
    if ( v16 > *((_DWORD *)this + 563) )
      invalid_parameter_noinfo();
    v17 = (_DWORD *)(v16 + 4 * v29);
    if ( (unsigned int)v17 > *((_DWORD *)this + 563) || (unsigned int)v17 < *((_DWORD *)this + 562) )
      invalid_parameter_noinfo();
    if ( (unsigned int)v17 >= *((_DWORD *)this + 563) )
      invalid_parameter_noinfo();
    if ( *v15 == *v17 )
    {
      v18 = *((_DWORD *)v6 + 1);
      if ( !v18 || (int)(*((_DWORD *)v6 + 2) - v18) / 44 <= v30 )
        break;
      if ( v18 > *((_DWORD *)v6 + 2) )
        invalid_parameter_noinfo();
      v19 = v27 + v18;
      if ( v19 > *((_DWORD *)v6 + 2) || v19 < *((_DWORD *)v6 + 1) )
        invalid_parameter_noinfo();
      if ( v19 >= *((_DWORD *)v6 + 2) )
        invalid_parameter_noinfo();
      v20 = *(_DWORD *)(v19 + 32);
      if ( v20 > *(_DWORD *)(v19 + 36) )
        invalid_parameter_noinfo();
      v21 = v20 + 4 * i;
      if ( v21 > *(_DWORD *)(v19 + 36) || v21 < *(_DWORD *)(v19 + 32) )
        invalid_parameter_noinfo();
      v22 = *((_DWORD *)v6 + 1);
      if ( !v22 || (int)(*((_DWORD *)v6 + 2) - v22) / 44 <= v30 )
        break;
      if ( v22 > *((_DWORD *)v6 + 2) )
        invalid_parameter_noinfo();
      v23 = v27 + v22;
      if ( v23 > *((_DWORD *)v6 + 2) || v23 < *((_DWORD *)v6 + 1) )
        invalid_parameter_noinfo();
      if ( v23 >= *((_DWORD *)v6 + 2) )
        invalid_parameter_noinfo();
      v24 = (int)(*(_DWORD *)(v23 + 36) - (v21 + 4)) >> 2;
      if ( v24 > 0 )
        memmove_s((void *const)v21, 4 * v24, (const void *const)(v21 + 4), 4 * v24);
      *(_DWORD *)(v23 + 36) -= 4;
    }
    v5 = v30;
  }
  sub_1008F790();
}
