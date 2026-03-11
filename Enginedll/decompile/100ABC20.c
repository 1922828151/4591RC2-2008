/*
 * func-name: ?SetAllChildrenLocation@CRETabPages@@QAEXHH@Z
 * func-address: 0x100abc20
 * callers: none
 * callees: none
 */

void __thiscall CRETabPages::SetAllChildrenLocation(CRETabPages *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  _DWORD *v7; // ecx
  int i; // edi
  _DWORD *v9; // ecx
  int v12; // [esp+18h] [ebp-4h]
  int v13; // [esp+20h] [ebp+4h]
  int v14; // [esp+24h] [ebp+8h]

  v4 = a2 - *((_DWORD *)this + 24);
  v5 = a3 - *((_DWORD *)this + 25);
  v13 = v4;
  v14 = v5;
  (*(void (__thiscall **)(CRETabPages *, int, int))(*(_DWORD *)this + 156))(this, a2, a3);
  v6 = 0;
  v12 = 0;
  if ( *((int *)this + 134) > 0 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD **)(*((_DWORD *)this + 133) + v6 + 528);
      (*(void (__stdcall **)(int, int))(*v7 + 156))(v4 + v7[24], v5 + v7[25]);
      for ( i = 0; i < *(_DWORD *)(*((_DWORD *)this + 133) + v6 + 516); ++i )
      {
        v9 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 133) + v6 + 512) + 4 * i);
        (*(void (__stdcall **)(int, int))(*v9 + 156))(v13 + v9[24], v5 + v9[25]);
        v5 = v14;
      }
      v6 += 532;
      if ( ++v12 >= *((_DWORD *)this + 134) )
        break;
      v4 = v13;
    }
  }
}
