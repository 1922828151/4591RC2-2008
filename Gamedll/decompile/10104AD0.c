/*
 * func-name: ?UpdateTransform@CombinActor@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x10104ad0
 * callers: 0x100198da
 * callees: 0x10019817
 */

void __thiscall GameClient::CombinActor::UpdateTransform(GameClient::CombinActor *this, const struct Matrix *a2)
{
  _DWORD *v3; // ebx
  char *v4; // esi
  void (__cdecl *v5)(); // ebp
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // ecx
  char *v9; // eax
  int v10; // ecx
  _DWORD v11[16]; // [esp-10h] [ebp-54h] BYREF
  char *v12; // [esp+40h] [ebp-4h]
  unsigned int i; // [esp+48h] [ebp+4h]

  GameClient::AdapterActor::UpdateTransform(this, a2);
  if ( *((_BYTE *)this + 1388) )
  {
    v3 = (_DWORD *)**((_DWORD **)this + 320);
    v4 = (char *)this + 1276;
    v12 = v4;
    while ( 1 )
    {
      v5 = _invalid_parameter_noinfo;
      if ( v3 == *((_DWORD **)v4 + 1) )
        break;
      v6 = 0;
      for ( i = 0; ; v6 = i )
      {
        if ( v3 == *((_DWORD **)v4 + 1) )
          v5();
        v7 = v3[18];
        if ( !v7 || v6 >= (v3[19] - v7) >> 2 )
          break;
        if ( v3 == *((_DWORD **)v4 + 1) )
        {
          v5();
          if ( v3 == *((_DWORD **)v4 + 1) )
            v5();
        }
        v8 = v3[18];
        if ( !v8 || v6 >= (v3[19] - v8) >> 2 )
          v5();
        v9 = v12;
        qmemcpy((void *)(*(_DWORD *)(v3[18] + 4 * v6) + 224), (const void *)(v3[16] + 164), 0x40u);
        if ( v3 == *((_DWORD **)v9 + 1) )
          _invalid_parameter_noinfo();
        qmemcpy(v11, (const void *)(v3[16] + 164), sizeof(v11));
        if ( v3 == *((_DWORD **)v12 + 1) )
          _invalid_parameter_noinfo();
        v10 = v3[18];
        if ( !v10 || i >= (v3[19] - v10) >> 2 )
          _invalid_parameter_noinfo();
        ModelFrame::UpdateMatrices(
          *(_DWORD *)(*(_DWORD *)(v3[18] + 4 * v6) + 308),
          v11[0],
          v11[1],
          v11[2],
          v11[3],
          v11[4],
          v11[5],
          v11[6],
          v11[7],
          v11[8],
          v11[9],
          v11[10],
          v11[11],
          v11[12],
          v11[13],
          v11[14],
          v11[15]);
        ++i;
        v4 = v12;
        v5 = _invalid_parameter_noinfo;
      }
      if ( v3 == *((_DWORD **)v4 + 1) )
        v5();
      v3 = (_DWORD *)*v3;
    }
  }
}
