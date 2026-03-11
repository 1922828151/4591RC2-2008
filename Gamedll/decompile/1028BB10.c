/*
 * func-name: ?RelocateBuffIcon@CStatusUI@@AAEXXZ_0
 * func-address: 0x1028bb10
 * callers: 0x1000886e
 * callees: none
 */

void __thiscall CStatusUI::RelocateBuffIcon(CStatusUI *this)
{
  unsigned int v2; // edi
  int i; // ebx
  int v4; // ecx
  int v5; // ecx

  v2 = 0;
  for ( i = -33; ; i -= 27 )
  {
    v4 = *((_DWORD *)this + 989);
    if ( !v4 || v2 >= (*((_DWORD *)this + 990) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(*((_DWORD *)this + 989) + 4 * v2);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 156))(v5, *((_DWORD *)this + 175) - 27, i);
    ++v2;
  }
}
