/*
 * func-name: ?SelectTab@CRETabPages@@QAEXH@Z
 * func-address: 0x100abe30
 * callers: none
 * callees: none
 */

void __thiscall CRETabPages::SelectTab(CRETabPages *this, int a2)
{
  int v2; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // ecx
  int v10; // [esp+4h] [ebp-4h]

  v2 = a2;
  if ( a2 >= 0 )
  {
    v4 = *((_DWORD *)this + 134);
    if ( a2 < v4 )
    {
      v5 = 0;
      v10 = 0;
      if ( v4 > 0 )
      {
        v6 = 0;
        do
        {
          v7 = 0;
          if ( v5 == v2 )
          {
            if ( *(int *)(*((_DWORD *)this + 133) + v6 + 516) > 0 )
            {
              do
              {
                v8 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 133) + v6 + 512) + 4 * v7);
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 136))(v8, 1);
                ++v7;
              }
              while ( v7 < *(_DWORD *)(*((_DWORD *)this + 133) + v6 + 516) );
            }
            *(_BYTE *)(*((_DWORD *)this + 133) + v6 + 524) = 1;
          }
          else
          {
            if ( *(int *)(*((_DWORD *)this + 133) + v6 + 516) > 0 )
            {
              do
              {
                v9 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 133) + v6 + 512) + 4 * v7);
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 136))(v9, 0);
                ++v7;
              }
              while ( v7 < *(_DWORD *)(*((_DWORD *)this + 133) + v6 + 516) );
            }
            *(_BYTE *)(*((_DWORD *)this + 133) + v6 + 524) = 0;
          }
          v2 = a2;
          v5 = v10 + 1;
          v6 += 532;
          ++v10;
        }
        while ( v10 < *((_DWORD *)this + 134) );
      }
      *((_DWORD *)this + 137) = v2;
    }
  }
}
