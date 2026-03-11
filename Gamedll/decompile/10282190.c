/*
 * func-name: ?SaveToQuickSuite@CRobotRoofUI@@AAEXH@Z_0
 * func-address: 0x10282190
 * callers: 0x100119c8
 * callees: 0x1000194c, 0x1000c252, 0x1000e6e2, 0x10011abd, 0x102c8d66, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::SaveToQuickSuite(CRobotRoofUI *this, int a2)
{
  unsigned int v3; // ebx
  int *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int *v8; // esi
  struct CREControl *Control; // eax
  CREStatic *v10; // eax
  const wchar_t *Text; // eax
  const char *v12; // eax
  int v13; // [esp-18h] [ebp-28h]
  int v14; // [esp-Ch] [ebp-1Ch]
  int v15; // [esp-8h] [ebp-18h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v4 = (int *)sub_1000194C(0);
  if ( v4 )
  {
    for ( i = 0; ; i += 80 )
    {
      v5 = v4[50];
      if ( !v5 || v3 >= (v4[51] - v5) / 80 )
        break;
      v6 = v4[50];
      if ( !v6 || v3 >= (v4[51] - v6) / 80 )
        _invalid_parameter_noinfo();
      v7 = v4[50];
      if ( *(_DWORD *)(i + v7 + 4) == a2 )
      {
        if ( !v7 || v3 >= (v4[51] - v7) / 80 )
          _invalid_parameter_noinfo();
        v8 = (int *)(i + v4[50]);
        v8[9] = *((_DWORD *)this + 979);
        v8[10] = *((_DWORD *)this + 980);
        v8[11] = *((_DWORD *)this + 981);
        Control = CREDialog::GetControl(this, a2 + 1);
        v10 = (CREStatic *)_RTDynamicCast(Control, v13, 0, &CREControl `RTTI Type Descriptor');
        Text = CREStatic::GetText(v10);
        v12 = wtoa(Text);
        std::string::operator=(v8 + 2, v12);
        sub_1000C252((int)this + 3928);
        sub_1000C252((int)this + 3944);
        *((_BYTE *)this + 4017) = 0;
        sub_10011ABD(v4[1], *v8);
        sub_1000E6E2(v14, v15);
      }
      ++v3;
    }
  }
}
