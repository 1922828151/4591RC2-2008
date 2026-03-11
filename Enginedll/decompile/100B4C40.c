/*
 * func-name: ?DeleteSelectedText@CMultiLineEB@@IAEXXZ
 * func-address: 0x100b4c40
 * callers: 0x100c5fd0, 0x100c95f0
 * callees: 0x100b49b0, 0x101a2500
 */

void __thiscall CMultiLineEB::DeleteSelectedText(CMultiLineEB *this)
{
  unsigned int v2; // esi
  int v3; // ecx
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  int v11; // eax
  int v12; // [esp+10h] [ebp-8h]
  unsigned int v13; // [esp+14h] [ebp-4h]

  *((_BYTE *)this + 856) = 0;
  v12 = -1;
  v2 = 0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 224);
    v13 = v2;
    if ( !v3 || v2 >= (*((_DWORD *)this + 225) - v3) >> 2 )
      break;
    v4 = *(_DWORD **)(*((_DWORD *)this + 224) + 4 * v2);
    v5 = v4[1];
    if ( v5 == -1 )
      goto LABEL_24;
    v6 = v4[2];
    if ( v6 >= v5 )
    {
      do
      {
        v7 = *v4;
        v8 = *(_DWORD *)(*v4 + 8);
        if ( v8 && v6 >= 0 && v6 < v8 )
        {
          memmove((void *)(*(_DWORD *)v7 + 2 * v6), (const void *)(*(_DWORD *)v7 + 2 * v6 + 2), 2 * (v8 - v6));
          --*(_DWORD *)(v7 + 8);
          *(_BYTE *)(v7 + 16) = 1;
        }
        --v6;
      }
      while ( v6 >= v4[1] );
      v2 = v13;
    }
    if ( *(_DWORD *)(*v4 + 8) )
    {
      if ( v12 == -1 )
      {
        v12 = v2;
        *((_DWORD *)this + 187) = v4[1];
        *((_DWORD *)this + 204) = v2;
      }
      v4[1] = -1;
LABEL_24:
      ++v2;
    }
    else
    {
      operator delete(v4);
      v9 = *((_DWORD *)this + 224);
      if ( v9 > *((_DWORD *)this + 225) )
        invalid_parameter_noinfo();
      v10 = v9 + 4 * v2;
      if ( v10 > *((_DWORD *)this + 225) || v10 < *((_DWORD *)this + 224) )
        invalid_parameter_noinfo();
      v11 = (int)(*((_DWORD *)this + 225) - (v10 + 4)) >> 2;
      if ( v11 > 0 )
        memmove_s((void *const)v10, 4 * v11, (const void *const)(v10 + 4), 4 * v11);
      *((_DWORD *)this + 225) -= 4;
    }
  }
  if ( v12 != -1 )
    CMultiLineEB::AdjustLines(this, v12);
}
