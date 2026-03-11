/*
 * func-name: ?OnEndUseSkill@CStatusUI@@QAEXK@Z_0
 * func-address: 0x1028ba80
 * callers: 0x1000b541
 * callees: none
 */

void __thiscall CStatusUI::OnEndUseSkill(CStatusUI *this, unsigned int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 985);
    if ( !v4 || i >= (*((_DWORD *)this + 986) - v4) >> 2 )
      break;
    if ( *(_DWORD *)(*((_DWORD *)this + 985) + 4 * i) == a2 )
    {
      v5 = *((_DWORD *)this + 981);
      if ( !v5 || i >= (*((_DWORD *)this + 982) - v5) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 981) + 4 * i) + 564) = -2130706433;
      return;
    }
  }
}
