/*
 * func-name: ?SetItemOnHand@CItemHolder@@QAE_NH@Z
 * func-address: 0x10153240
 * callers: none
 * callees: 0x1014fa80, 0x1014fae0, 0x101a2500, 0x101a2534
 */

char __thiscall CItemHolder::SetItemOnHand(CItemHolder *this, unsigned int a2)
{
  void *v3; // esi
  void *v4; // eax
  int v5; // eax
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  int v13; // ecx

  v3 = (void *)*((_DWORD *)this + 156);
  if ( v3 )
  {
    sub_1014FAE0(*((_DWORD **)this + 156));
    operator delete(v3);
    *((_DWORD *)this + 156) = 0;
  }
  v4 = operator new(0x6Cu);
  if ( v4 )
    v5 = sub_1014FA80((int)v4);
  else
    v5 = 0;
  *((_DWORD *)this + 156) = v5;
  v6 = *((_DWORD *)this + 135);
  if ( !v6 || a2 >= (*((_DWORD *)this + 136) - v6) >> 2 )
    invalid_parameter_noinfo();
  *(_DWORD *)(*((_DWORD *)this + 156) + 24) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 135) + 4 * a2) + 24);
  v7 = operator new(0xC4u);
  if ( v7 )
  {
    v7[28] = 0;
    *(_DWORD *)v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  *(_DWORD *)(*((_DWORD *)this + 156) + 4) = v7;
  v8 = *((_DWORD *)this + 135);
  if ( !v8 || a2 >= (*((_DWORD *)this + 136) - v8) >> 2 )
    invalid_parameter_noinfo();
  qmemcpy(
    *(void **)(*((_DWORD *)this + 156) + 4),
    *(const void **)(*(_DWORD *)(*((_DWORD *)this + 135) + 4 * a2) + 4),
    0xC4u);
  v9 = *((_DWORD *)this + 135);
  if ( !v9 || a2 >= (*((_DWORD *)this + 136) - v9) >> 2 )
    invalid_parameter_noinfo();
  v10 = *(_DWORD **)(*((_DWORD *)this + 135) + 4 * a2);
  v11 = v10[2];
  v10 += 2;
  v12 = (_DWORD *)(*((_DWORD *)this + 156) + 8);
  *v12 = v11;
  v12[1] = v10[1];
  v12[2] = v10[2];
  v12[3] = v10[3];
  v13 = *((_DWORD *)this + 135);
  if ( !v13 || a2 >= (*((_DWORD *)this + 136) - v13) >> 2 )
    invalid_parameter_noinfo();
  std::wstring::operator=(*((_DWORD *)this + 156) + 28, *(_DWORD *)(*((_DWORD *)this + 135) + 4 * a2) + 28);
  CREDialog::s_pControlLast = this;
  return 1;
}
