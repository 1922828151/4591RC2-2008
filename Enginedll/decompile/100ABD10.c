/*
 * func-name: ?TabPressed@CRETabPages@@UAEXPAVCREab@@@Z
 * func-address: 0x100abd10
 * callers: none
 * callees: none
 */

void __thiscall CRETabPages::TabPressed(CRETabPages *this, struct CREab *a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  void (__stdcall *v10)(int, int, _DWORD, CRETabPages *, int, _DWORD); // ecx
  int v11; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v11 = 0;
  if ( *((int *)this + 134) > 0 )
  {
    do
    {
      v5 = v3 + *((_DWORD *)this + 133);
      v6 = 0;
      if ( a2 == *(struct CREab **)(v5 + 528) )
      {
        if ( *(int *)(v5 + 516) > 0 )
        {
          do
          {
            v7 = *(_DWORD *)(*(_DWORD *)(v3 + *((_DWORD *)this + 133) + 512) + 4 * v6);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 136))(v7, 1);
            ++v6;
          }
          while ( v6 < *(_DWORD *)(v3 + *((_DWORD *)this + 133) + 516) );
        }
        *(_BYTE *)(v3 + *((_DWORD *)this + 133) + 524) = 1;
        v11 = v4;
      }
      else
      {
        if ( *(int *)(v5 + 516) > 0 )
        {
          do
          {
            v8 = *(_DWORD *)(*(_DWORD *)(v3 + *((_DWORD *)this + 133) + 512) + 4 * v6);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 136))(v8, 0);
            ++v6;
          }
          while ( v6 < *(_DWORD *)(v3 + *((_DWORD *)this + 133) + 516) );
        }
        *(_BYTE *)(v3 + *((_DWORD *)this + 133) + 524) = 0;
      }
      ++v4;
      v3 += 532;
    }
    while ( v4 < *((_DWORD *)this + 134) );
    v3 = v11;
  }
  v9 = *((_DWORD *)this + 28);
  v10 = *(void (__stdcall **)(int, int, _DWORD, CRETabPages *, int, _DWORD))(v9 + 736);
  if ( v10 )
    v10(v9, 258, *((_DWORD *)this + 34), this, v3, 0);
  *((_DWORD *)this + 137) = v3;
}
