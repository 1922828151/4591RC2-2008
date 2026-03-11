/*
 * func-name: ?SetTextFont@CREStatic@@UAEXPB_WJ_N@Z
 * func-address: 0x100bb370
 * callers: none
 * callees: 0x100b5550
 */

void __thiscall CREStatic::SetTextFont(CREStatic *this, wchar_t *String2, int a3, bool a4)
{
  CREDialog *v5; // ecx
  int v6; // eax

  v5 = (CREDialog *)*((_DWORD *)this + 28);
  if ( v5 )
  {
    v6 = CREDialog::AddFont(v5, String2, a3, a4);
    (*(void (__thiscall **)(CREStatic *, int))(*(_DWORD *)this + 172))(this, v6);
  }
}
