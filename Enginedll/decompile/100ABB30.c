/*
 * func-name: ?ResetToFirstTab@CRETabPages@@UAEXXZ
 * func-address: 0x100abb30
 * callers: none
 * callees: none
 */

void __thiscall CRETabPages::ResetToFirstTab(CRETabPages *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // ecx
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; v2 < *((_DWORD *)this + 134); i = ++v2 )
  {
    v3 = *((_DWORD *)this + 133);
    if ( v2 )
    {
      v6 = 532 * v2;
      v7 = 0;
      if ( *(int *)(v3 + 532 * v2 + 516) > 0 )
      {
        do
        {
          v8 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 133) + v6 + 512) + 4 * v7);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 144))(v8, 1);
          *(_BYTE *)(*((_DWORD *)this + 133) + v6 + 524) = 0;
          ++v7;
        }
        while ( v7 < *(_DWORD *)(*((_DWORD *)this + 133) + v6 + 516) );
        goto LABEL_8;
      }
    }
    else
    {
      v4 = 0;
      if ( *(int *)(v3 + 516) > 0 )
      {
        do
        {
          v5 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 133) + 512) + 4 * v4);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 144))(v5, 0);
          *(_BYTE *)(*((_DWORD *)this + 133) + 524) = 1;
          ++v4;
        }
        while ( v4 < *(_DWORD *)(*((_DWORD *)this + 133) + 516) );
LABEL_8:
        v2 = i;
      }
    }
  }
  *((_DWORD *)this + 137) = 0;
}
