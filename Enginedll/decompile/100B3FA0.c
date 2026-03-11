/*
 * func-name: ?clearSpecItems@CREListCtrl@@QAEXXZ
 * func-address: 0x100b3fa0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall CREListCtrl::clearSpecItems(CREListCtrl *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 191);
  if ( v2 )
    v9 = (*((_DWORD *)this + 192) - v2) / 20;
  else
    v9 = 0;
  v7 = 0;
  if ( v9 > 0 )
  {
    v8 = 0;
    do
    {
      v3 = *((_DWORD *)this + 191);
      if ( !v3 || v7 >= (*((_DWORD *)this + 192) - v3) / 20 )
        invalid_parameter_noinfo();
      v4 = v8 + *((_DWORD *)this + 191);
      v5 = *(_DWORD *)(v4 + 4);
      if ( v5 > *(_DWORD *)(v4 + 8) )
        invalid_parameter_noinfo();
      while ( 1 )
      {
        v6 = *(_DWORD *)(v4 + 8);
        if ( *(_DWORD *)(v4 + 4) > v6 )
          invalid_parameter_noinfo();
        if ( !v4 )
          invalid_parameter_noinfo();
        if ( v5 == v6 )
          break;
        if ( !v4 )
          invalid_parameter_noinfo();
        if ( v5 >= *(_DWORD *)(v4 + 8) )
          invalid_parameter_noinfo();
        if ( *(_DWORD *)(v5 + 40) )
        {
          if ( v5 >= *(_DWORD *)(v4 + 8) )
            invalid_parameter_noinfo();
          operator delete(*(void **)(v5 + 40));
          if ( v5 >= *(_DWORD *)(v4 + 8) )
            invalid_parameter_noinfo();
          *(_DWORD *)(v5 + 40) = 0;
        }
        if ( v5 >= *(_DWORD *)(v4 + 8) )
          invalid_parameter_noinfo();
        v5 += 44;
      }
      v8 += 20;
      ++v7;
    }
    while ( (int)v7 < v9 );
  }
}
