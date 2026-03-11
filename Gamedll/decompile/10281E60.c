/*
 * func-name: ?ClearItems@CRobotRoofUI@@AAEXXZ_0
 * func-address: 0x10281e60
 * callers: 0x1000e313
 * callees: 0x100141eb, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::ClearItems(CRobotRoofUI *this)
{
  struct CREControl *Control; // eax
  int v3; // ebx
  struct CREControl *v4; // eax
  int v5; // eax
  int v6; // ebp
  struct CREControl *v7; // eax
  int v8; // eax
  int v9; // edi
  void *v10; // ebx
  void *v11; // ebp
  void *v12; // ebx
  void *v13; // eax
  bool v14; // cc
  unsigned int i; // edi
  int v16; // ecx
  int v17; // ecx
  int v18; // [esp+3Ch] [ebp-3Ch] BYREF
  int v19; // [esp+40h] [ebp-38h]
  int v20; // [esp+44h] [ebp-34h]
  int v21; // [esp+48h] [ebp-30h]
  int v22; // [esp+4Ch] [ebp-2Ch]
  int v23; // [esp+50h] [ebp-28h]
  void ***v24; // [esp+54h] [ebp-24h]
  void ***v25; // [esp+58h] [ebp-20h]
  int v26; // [esp+5Ch] [ebp-1Ch]
  int *v27; // [esp+6Ch] [ebp-Ch]
  int v28[2]; // [esp+70h] [ebp-8h] BYREF

  v26 = 0;
  v24 = &CREControl `RTTI Type Descriptor';
  v23 = 0;
  v22 = 11;
  *((_DWORD *)this + 979) = -1;
  Control = CREDialog::GetControl(this, v22);
  v25 = 0;
  v27 = &v18;
  v3 = _RTDynamicCast(Control, v22, v23, v24);
  std::wstring::wstring(&v18, &unk_10323024);
  CPictureLabel::ChangeTexture(v3, v18, v19, v20, v21, v22, v23, v24, v25);
  v26 = 0;
  v25 = &CPictureLabel `RTTI Type Descriptor';
  v24 = &CREControl `RTTI Type Descriptor';
  v23 = 0;
  v22 = 12;
  *((_DWORD *)this + 980) = -1;
  v4 = CREDialog::GetControl(this, v22);
  v5 = _RTDynamicCast(v4, v22, v23, v24);
  v25 = 0;
  v27 = &v18;
  v6 = v5;
  std::wstring::wstring(&v18, &unk_10323028);
  CPictureLabel::ChangeTexture(v6, v18, v19, v20, v21, v22, v23, v24, v25);
  v26 = 0;
  v25 = &CPictureLabel `RTTI Type Descriptor';
  v24 = &CREControl `RTTI Type Descriptor';
  v23 = 0;
  v22 = 13;
  *((_DWORD *)this + 981) = -1;
  v7 = CREDialog::GetControl(this, v22);
  v8 = _RTDynamicCast(v7, v22, v23, v24);
  v25 = 0;
  v27 = &v18;
  v9 = v8;
  std::wstring::wstring(&v18, &unk_1032302C);
  CPictureLabel::ChangeTexture(v9, v18, v19, v20, v21, v22, v23, v24, v25);
  v10 = (void *)*((_DWORD *)this + 988);
  if ( *((_DWORD *)this + 987) > (unsigned int)v10 )
    _invalid_parameter_noinfo();
  v11 = (void *)*((_DWORD *)this + 987);
  if ( (unsigned int)v11 > *((_DWORD *)this + 988) )
    _invalid_parameter_noinfo();
  sub_100141EB((int)v28, (int)this + 3944, v11, (int)this + 3944, v10);
  CItemHolder::SetMaxItem(*((CItemHolder **)this + 969), 0);
  v12 = (void *)*((_DWORD *)this + 984);
  if ( *((_DWORD *)this + 983) > (unsigned int)v12 )
    _invalid_parameter_noinfo();
  v13 = (void *)*((_DWORD *)this + 983);
  v14 = (unsigned int)v13 <= *((_DWORD *)this + 984);
  v28[0] = (int)v13;
  if ( !v14 )
  {
    _invalid_parameter_noinfo();
    v13 = (void *)v28[0];
  }
  sub_100141EB((int)v28, (int)this + 3928, v13, (int)this + 3928, v12);
  CItemHolder::SetMaxItem(*((CItemHolder **)this + 970), 0);
  CREEditBox::ClearText(*((CREEditBox **)this + 973));
  for ( i = 0; ; ++i )
  {
    v16 = *((_DWORD *)this + 1000);
    if ( !v16 || i >= (*((_DWORD *)this + 1001) - v16) >> 2 )
      break;
    v17 = *(_DWORD *)(*((_DWORD *)this + 1000) + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 136))(v17, 0);
  }
}
