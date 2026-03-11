/*
 * func-name: ?AddFont@CREDialog@@QAEIPB_WJ_N@Z
 * func-address: 0x100b5550
 * callers: 0x100bb370, 0x100c14a0, 0x10156140
 * callees: 0x1006c5d0, 0x100af8e0, 0x100b5280
 */

int __thiscall CREDialog::AddFont(CREDialog *this, wchar_t *String2, int a3, bool a4)
{
  int v5; // edi
  CREDialogResourceManager *v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _DWORD *v9; // esi

  v5 = *((_DWORD *)this + 189);
  v6 = REGetGlobalDialogResourceManager();
  v7 = CREDialogResourceManager::AddFont(v6, String2, a3, a4 ? 700 : 400);
  v8 = *((_DWORD *)this + 189);
  v9 = (_DWORD *)((char *)this + 752);
  if ( sub_1006C5D0((int)v9, v8 + 1) >= 0 )
    *(_DWORD *)(*v9 + 4 * v9[1]++) = -1;
  if ( v5 >= 0 && v5 < v9[1] )
    *(_DWORD *)(*v9 + 4 * v5) = v7;
  return v5;
}
