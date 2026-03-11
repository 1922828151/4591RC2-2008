/*
 * func-name: ?OnQuickSuiteUpdated@CRobotRoofUI@@QAEXJ@Z_0
 * func-address: 0x10281d00
 * callers: 0x10004746
 * callees: 0x1000194c, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::OnQuickSuiteUpdated(CRobotRoofUI *this, int a2)
{
  int v2; // esi
  unsigned int v3; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct CREControl *Control; // eax
  CREStatic *v9; // ebp
  int v10; // eax
  const char *v11; // eax
  const wchar_t *v12; // eax

  v2 = sub_1000194C(0);
  if ( v2 )
  {
    v3 = 0;
    for ( i = 0; ; i += 80 )
    {
      v5 = *(_DWORD *)(v2 + 200);
      if ( !v5 || v3 >= (*(_DWORD *)(v2 + 204) - v5) / 80 )
        break;
      v6 = *(_DWORD *)(v2 + 200);
      if ( !v6 || v3 >= (*(_DWORD *)(v2 + 204) - v6) / 80 )
        _invalid_parameter_noinfo();
      v7 = *(_DWORD *)(v2 + 200);
      if ( *(_DWORD *)(i + v7) == a2 )
      {
        if ( !v7 || v3 >= (*(_DWORD *)(v2 + 204) - v7) / 80 )
          _invalid_parameter_noinfo();
        Control = CREDialog::GetControl(this, *(_DWORD *)(*(_DWORD *)(v2 + 200) + 80 * v3 + 4) + 1);
        v9 = (CREStatic *)_RTDynamicCast(
                            Control,
                            &CREControl `RTTI Type Descriptor',
                            &CREButton `RTTI Type Descriptor',
                            0);
        v10 = *(_DWORD *)(v2 + 200);
        if ( !v10 || v3 >= (*(_DWORD *)(v2 + 204) - v10) / 80 )
          _invalid_parameter_noinfo();
        v11 = (const char *)std::string::c_str(80 * v3 + *(_DWORD *)(v2 + 200) + 8);
        v12 = atow(v11);
        CREStatic::SetText(v9, v12);
        return;
      }
      ++v3;
    }
  }
}
