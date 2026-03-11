/*
 * func-name: ?SetItemHoverPic@CItemHolder@@QAE_NHHV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAUtagRECT@@ABU4@@Z
 * func-address: 0x10153020
 * callers: none
 * callees: 0x10152de0
 */

char __thiscall CItemHolder::SetItemHoverPic(
        _DWORD *this,
        int a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        struct tagRECT *a11,
        _DWORD *a12)
{
  int v13; // esi
  char v14; // bl
  char v16; // [esp-24h] [ebp-3Ch] BYREF
  int *v17; // [esp-20h] [ebp-38h]
  int v18; // [esp-1Ch] [ebp-34h]
  int v19; // [esp-18h] [ebp-30h]
  int v20; // [esp-14h] [ebp-2Ch]
  int v21; // [esp-10h] [ebp-28h]
  unsigned int v22; // [esp-Ch] [ebp-24h]
  struct tagRECT *v23; // [esp-8h] [ebp-20h]
  _DWORD *v24; // [esp-4h] [ebp-1Ch]
  int v25; // [esp+14h] [ebp-4h]

  v13 = a2 + a3 * this[149];
  v24 = a12;
  v23 = a11;
  v25 = 0;
  std::wstring::wstring(&v16, &a4);
  v14 = CItemHolder::SetItemHoverPic((int)this, v13, v16, v17, v18, v19, v20, v21, v22, v23, v24);
  v25 = -1;
  std::wstring::~wstring(&a4);
  return v14;
}
