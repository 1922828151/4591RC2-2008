/*
 * func-name: sub_1015B9F0
 * func-address: 0x1015b9f0
 * callers: 0x1015bad0
 * callees: 0x100a7900, 0x100aef10, 0x10149eb0, 0x1014a3e0
 */

char __stdcall sub_1015B9F0(CTYDialog *a1, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  CDlgMgr *v7; // eax
  int v8; // ecx
  CDlgMgr *v9; // eax
  int v10; // ecx
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-Ch] [ebp-14h]

  result = a2;
  if ( a2 == 24 )
  {
    if ( !a5 )
      *((_BYTE *)a1 + 4005) = 1;
  }
  else if ( a2 == 257 )
  {
    if ( a3 == 1 )
    {
      CTYDialog::ShowDialog(a1, 0, 0.0);
      CTYDialog::SetHasInput(a1, 0);
      v12 = *((_DWORD *)a1 + 1000);
      v9 = CDlgMgr::Instance();
      result = CDlgMgr::PostMessageA(v9, v12, 2049, 2304, 0);
      v10 = *((_DWORD *)a1 + 971);
      if ( v10 )
        return (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
    }
    else
    {
      result = a3 - 2;
      if ( a3 == 2 )
      {
        CTYDialog::ShowDialog(a1, 0, 0.0);
        CTYDialog::SetHasInput(a1, 0);
        v11 = *((_DWORD *)a1 + 1000);
        v7 = CDlgMgr::Instance();
        result = CDlgMgr::PostMessageA(v7, v11, 2050, 2304, 0);
        v8 = *((_DWORD *)a1 + 971);
        if ( v8 )
          return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
      }
    }
  }
  return result;
}
