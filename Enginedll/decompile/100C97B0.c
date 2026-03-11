/*
 * func-name: ?setCellPic@CREListCtrl@@QAE_NHHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100c97b0
 * callers: none
 * callees: 0x100a5f30, 0x1017a280, 0x101a2500, 0x101a2534
 */

char __thiscall CREListCtrl::setCellPic(int this, unsigned int a2, int a3, int a4, struct tagRECT *a5)
{
  int v6; // eax
  int v8; // eax
  void (__cdecl *v9)(); // ebp
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  _BYTE *v15; // eax
  _BYTE *v16; // ebx
  int v17; // eax
  bool v18; // cf
  int v19; // eax
  unsigned int v20; // ebx
  _BYTE v22[28]; // [esp+Ch] [ebp-28h] BYREF
  int v23; // [esp+30h] [ebp-4h]

  v6 = *(_DWORD *)(this + 764);
  if ( !v6 || a2 >= (*(_DWORD *)(this + 768) - v6) / 20 )
    return 0;
  v8 = *(_DWORD *)(this + 764);
  if ( v8 && a2 < (*(_DWORD *)(this + 768) - v8) / 20 )
  {
    v9 = invalid_parameter_noinfo;
  }
  else
  {
    v9 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
  }
  v10 = *(_DWORD *)(this + 764);
  v11 = *(_DWORD *)(v10 + 20 * a2 + 4);
  v12 = v10 + 20 * a2;
  if ( v11 > *(_DWORD *)(v12 + 8) )
    v9();
  while ( 1 )
  {
    v13 = *(_DWORD *)(v12 + 8);
    if ( *(_DWORD *)(v12 + 4) > v13 )
      v9();
    if ( !v12 )
      v9();
    if ( v11 == v13 )
      break;
    if ( !v12 )
      v9();
    if ( v11 >= *(_DWORD *)(v12 + 8) )
      v9();
    if ( *(_DWORD *)v11 >= a3 )
      break;
    if ( v11 >= *(_DWORD *)(v12 + 8) )
      v9();
    v11 += 44;
  }
  v14 = *(_DWORD *)(v12 + 8);
  if ( *(_DWORD *)(v12 + 4) > v14 )
    v9();
  if ( !v12 )
    v9();
  if ( v11 != v14 )
  {
    if ( !v12 )
      v9();
    if ( v11 >= *(_DWORD *)(v12 + 8) )
      v9();
    if ( *(_DWORD *)v11 == a3 )
    {
      if ( v11 >= *(_DWORD *)(v12 + 8) )
        v9();
      if ( *(_DWORD *)(v11 + 40) )
      {
        if ( v11 >= *(_DWORD *)(v12 + 8) )
          v9();
        operator delete(*(void **)(v11 + 40));
        if ( v11 >= *(_DWORD *)(v12 + 8) )
          v9();
        *(_DWORD *)(v11 + 40) = 0;
      }
      if ( *(_DWORD *)(a4 + 20) )
      {
        v15 = operator new(0xC4u);
        if ( v15 )
        {
          v15[28] = 0;
          *(_DWORD *)v15 = -1;
          v16 = v15;
        }
        else
        {
          v16 = 0;
        }
        if ( v11 >= *(_DWORD *)(v12 + 8) )
          invalid_parameter_noinfo();
        *(_DWORD *)(v11 + 40) = v16;
        v17 = sub_1017A280(v22, a4);
        v18 = *(_DWORD *)(v17 + 24) < 8u;
        v23 = 0;
        if ( v18 )
          v19 = v17 + 4;
        else
          v19 = *(_DWORD *)(v17 + 4);
        v20 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v19);
        v23 = -1;
        std::wstring::~wstring(v22);
        if ( v11 >= *(_DWORD *)(v12 + 8) )
          invalid_parameter_noinfo();
        CREElement::SetTexture(*(CREElement **)(v11 + 40), v20, a5, 0xFFFFFFFF);
      }
    }
  }
  return 1;
}
