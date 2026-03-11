/*
 * func-name: ?Tick@CControlBoxList@@UAEXXZ
 * func-address: 0x10151e30
 * callers: none
 * callees: none
 */

void __thiscall CControlBoxList::Tick(CControlBoxList *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  signed int v7; // edi
  int v8; // ecx
  int v9; // ecx
  unsigned int i; // edi
  int v11; // ecx
  int v12; // ecx

  v2 = *((_DWORD *)this + 141);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 600);
    if ( v3 != *((_DWORD *)this + 140) )
      *((_DWORD *)this + 140) = v3;
  }
  v4 = *((_DWORD *)this + 27);
  v5 = *((_DWORD *)this + 138);
  v6 = 0;
  if ( v4 > v5 )
    v6 = (v4 - v5) / (v5 + *((_DWORD *)this + 139)) + 1;
  if ( *((_DWORD *)this + 142) == 1 )
  {
    for ( i = 0; ; ++i )
    {
      v11 = *((_DWORD *)this + 134);
      if ( !v11 || i >= (*((_DWORD *)this + 135) - v11) >> 2 )
        break;
      v12 = *(_DWORD *)(*((_DWORD *)this + 134) + 4 * i);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 24))(v12);
    }
  }
  else if ( *((_DWORD *)this + 142) == 2 )
  {
    v7 = *((_DWORD *)this + 140);
    if ( v7 < v7 + v6 )
    {
      do
      {
        v8 = *((_DWORD *)this + 134);
        if ( !v8 )
          break;
        if ( v7 >= (unsigned int)((*((_DWORD *)this + 135) - v8) >> 2) )
          break;
        v9 = *(_DWORD *)(*((_DWORD *)this + 134) + 4 * v7);
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 24))(v9);
        ++v7;
      }
      while ( v7 < v6 + *((_DWORD *)this + 140) );
    }
  }
}
