/*
 * func-name: ?ShowChannelList@CChatInputUI@@IAEX_N@Z_0
 * func-address: 0x10258280
 * callers: 0x1000632f
 * callees: none
 */

void __thiscall CChatInputUI::ShowChannelList(CChatInputUI *this, int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx

  v2 = 0;
  for ( i = 0; ; i += 36 )
  {
    v5 = *((_DWORD *)this + 972);
    if ( !v5 || v2 >= (*((_DWORD *)this + 973) - v5) / 36 )
      break;
    v6 = *((_DWORD *)this + 972);
    if ( !v6 || v2 >= (*((_DWORD *)this + 973) - v6) / 36 )
      _invalid_parameter_noinfo();
    v7 = *(_DWORD *)(*((_DWORD *)this + 972) + i + 32);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 136))(v7, a2);
    ++v2;
  }
}
