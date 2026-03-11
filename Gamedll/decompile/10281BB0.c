/*
 * func-name: ?ChangeSuiteName@CRobotRoofUI@@AAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z_0
 * func-address: 0x10281bb0
 * callers: 0x10018ff2
 * callees: 0x1000194c, 0x102c8d66, 0x102c9ea8
 */

unsigned int __thiscall CRobotRoofUI::ChangeSuiteName(CREDialog *this, int a2)
{
  unsigned int v2; // ebx
  unsigned int result; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  const wchar_t *v8; // eax
  const char *v9; // eax
  struct CREControl *Control; // eax
  CREStatic *v11; // esi
  const wchar_t *v12; // eax
  int v13; // [esp-1Ch] [ebp-2Ch]
  int i; // [esp+8h] [ebp-8h]

  v2 = 0;
  result = sub_1000194C(0);
  v4 = result;
  if ( result )
  {
    for ( i = 0; ; i += 80 )
    {
      result = *(_DWORD *)(v4 + 200);
      if ( !result )
        break;
      result = (int)(*(_DWORD *)(v4 + 204) - result) / 80;
      if ( v2 >= result )
        break;
      v5 = *(_DWORD *)(v4 + 200);
      if ( !v5 || v2 >= (*(_DWORD *)(v4 + 204) - v5) / 80 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(i + *(_DWORD *)(v4 + 200) + 4) == *((_DWORD *)this + 968) )
      {
        v6 = *(_DWORD *)(v4 + 200);
        if ( !v6 || v2 >= (*(_DWORD *)(v4 + 204) - v6) / 80 )
          _invalid_parameter_noinfo();
        v7 = i + *(_DWORD *)(v4 + 200);
        v8 = (const wchar_t *)std::wstring::c_str(a2);
        v9 = wtoa(v8);
        std::string::operator=(v7 + 8, v9);
        Control = CREDialog::GetControl(this, *(_DWORD *)(v7 + 4) + 1);
        v11 = (CREStatic *)_RTDynamicCast(Control, v13, 0, &CREControl `RTTI Type Descriptor');
        v12 = (const wchar_t *)std::wstring::c_str(a2);
        CREStatic::SetText(v11, v12);
      }
      ++v2;
    }
  }
  return result;
}
