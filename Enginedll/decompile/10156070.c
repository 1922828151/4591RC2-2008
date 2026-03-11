/*
 * func-name: ?AddItem@CItemHolder@@QAEHPAUItemInfo@1@@Z
 * func-address: 0x10156070
 * callers: none
 * callees: 0x100cdd20, 0x100cdd30, 0x10158e20
 */

int __thiscall CItemHolder::AddItem(CItemHolder *this, struct CItemHolder::ItemInfo *a2)
{
  struct CItemHolder::ItemInfo *v2; // ebx
  int v4; // eax
  char *v5; // esi
  unsigned int v6; // edi
  int v7; // edi
  int v8; // ebp
  struct tagRECT *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // [esp-10h] [ebp-1Ch]

  v2 = a2;
  if ( !a2 )
    return -1;
  v4 = *((_DWORD *)this + 135);
  v5 = (char *)this + 536;
  if ( v4 && (*((_DWORD *)this + 136) - v4) >> 2 )
  {
    v6 = ((*((_DWORD *)this + 136) - v4) >> 2) - 1;
    if ( v6 >= (*((_DWORD *)this + 136) - v4) >> 2 )
      invalid_parameter_noinfo();
    v7 = *(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v6);
    v8 = *(_DWORD *)(v7 + 16);
    v9 = (struct tagRECT *)((char *)v2 + 8);
    v13 = *(_DWORD *)(v7 + 12) + sub_100CDD30((int)v9);
    v10 = sub_100CDD20(v9);
    SetRect(v9, v8 + *((_DWORD *)this + 143), *(_DWORD *)(v7 + 12), v8 + v10, v13);
    v2 = a2;
  }
  v11 = *((_DWORD *)v5 + 1);
  if ( v11 )
    v12 = (*((_DWORD *)v5 + 2) - v11) >> 2;
  else
    v12 = 0;
  *(_DWORD *)v2 = v12;
  sub_10158E20((int)v5, (int)&a2);
  return *(_DWORD *)v2;
}
