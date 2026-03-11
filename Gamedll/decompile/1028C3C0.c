/*
 * func-name: ?OnBuffRemoved@CStatusUI@@QAEXKK@Z_0
 * func-address: 0x1028c3c0
 * callers: 0x1000af38
 * callees: 0x1000886e
 */

void __thiscall CStatusUI::OnBuffRemoved(CStatusUI *this, unsigned int a2, unsigned int a3)
{
  unsigned int i; // ebx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edi
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // edi
  int v16; // eax

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 993);
    if ( !v5 || i >= (*((_DWORD *)this + 994) - v5) >> 2 )
      break;
    v6 = *((_DWORD *)this + 993);
    if ( *(_DWORD *)(v6 + 4 * i) == a3 )
    {
      v7 = *((_DWORD *)this + 993);
      if ( v6 > *((_DWORD *)this + 994) )
        _invalid_parameter_noinfo();
      v8 = v7 + 4 * i;
      if ( v8 > *((_DWORD *)this + 994) || v8 < *((_DWORD *)this + 993) )
        _invalid_parameter_noinfo();
      v9 = (int)(*((_DWORD *)this + 994) - (v8 + 4)) >> 2;
      if ( v9 > 0 )
        memmove_s((void *const)v8, 4 * v9, (const void *const)(v8 + 4), 4 * v9);
      *((_DWORD *)this + 994) -= 4;
      v10 = *((_DWORD *)this + 997);
      if ( v10 > *((_DWORD *)this + 998) )
        _invalid_parameter_noinfo();
      v11 = v10 + 4 * i;
      if ( v11 > *((_DWORD *)this + 998) || v11 < *((_DWORD *)this + 997) )
        _invalid_parameter_noinfo();
      v12 = (int)(*((_DWORD *)this + 998) - (v11 + 4)) >> 2;
      if ( v12 > 0 )
        memmove_s((void *const)v11, 4 * v12, (const void *const)(v11 + 4), 4 * v12);
      *((_DWORD *)this + 998) -= 4;
      v13 = *((_DWORD *)this + 989);
      if ( !v13 || i >= (*((_DWORD *)this + 990) - v13) >> 2 )
        _invalid_parameter_noinfo();
      CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 989) + 4 * i));
      v14 = *((_DWORD *)this + 989);
      if ( v14 > *((_DWORD *)this + 990) )
        _invalid_parameter_noinfo();
      v15 = v14 + 4 * i;
      if ( v15 > *((_DWORD *)this + 990) || v15 < *((_DWORD *)this + 989) )
        _invalid_parameter_noinfo();
      v16 = (int)(*((_DWORD *)this + 990) - (v15 + 4)) >> 2;
      if ( v16 > 0 )
        memmove_s((void *const)v15, 4 * v16, (const void *const)(v15 + 4), 4 * v16);
      *((_DWORD *)this + 990) -= 4;
      CStatusUI::RelocateBuffIcon(this);
      return;
    }
  }
}
