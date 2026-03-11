/*
 * func-name: sub_102672E0
 * func-address: 0x102672e0
 * callers: 0x10017337
 * callees: 0x1000226b, 0x10014105, 0x10014f15, 0x10017b7a, 0x100189da, 0x102c8d6c, 0x102c9d62
 */

int __thiscall sub_102672E0(int this, int a2, int a3, int a4, int a5, int a6)
{
  int *v7; // eax
  int v8; // edi
  const char *v9; // eax
  const wchar_t *v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int v15; // [esp+0h] [ebp-74h]
  int v16; // [esp+0h] [ebp-74h]
  int v17; // [esp+4h] [ebp-70h]
  int v18; // [esp+4h] [ebp-70h]
  _BYTE v19[8]; // [esp+14h] [ebp-60h] BYREF
  _BYTE v20[28]; // [esp+1Ch] [ebp-58h] BYREF
  _BYTE v21[28]; // [esp+38h] [ebp-3Ch] BYREF
  int v22; // [esp+54h] [ebp-20h]
  int v23; // [esp+58h] [ebp-1Ch]
  int v24; // [esp+5Ch] [ebp-18h]
  int v25; // [esp+60h] [ebp-14h]
  int v26; // [esp+70h] [ebp-4h]

  if ( *(_DWORD *)(this + 568) == *(_DWORD *)(this + 532) )
    sub_100189DA((int)v19, this + 560, **(_DWORD **)(this + 564));
  sub_10017B7A(v15, v17);
  v26 = 0;
  v24 = 32;
  std::wstring::operator=(v20, a2);
  std::wstring::operator=(v21, a4);
  v7 = *(int **)(this + 112);
  v22 = a3;
  v23 = a5;
  v8 = *v7;
  v9 = (const char *)std::string::c_str(a6);
  v10 = atow(v9);
  v11 = (*(int (__thiscall **)(_DWORD, const wchar_t *))(v8 + 20))(*(_DWORD *)(this + 112), v10);
  v12 = *(_DWORD *)(this + 564);
  v25 = v11;
  v13 = sub_10014105(v12, *(_DWORD *)(v12 + 4), (int)v20);
  sub_1000226B(1);
  *(_DWORD *)(v12 + 4) = v13;
  **(_DWORD **)(v13 + 4) = v13;
  v26 = -1;
  return sub_10014F15(v16, v18);
}
