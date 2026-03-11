/*
 * func-name: ?UpdateRects@CMLIMEEditBox@@UAEXXZ
 * func-address: 0x100a7af0
 * callers: none
 * callees: 0x100a4220
 */

void __thiscall CMLIMEEditBox::UpdateRects(CMLIMEEditBox *this)
{
  int v2; // edi
  int v3; // [esp-10h] [ebp-18h]
  int v4; // [esp-Ch] [ebp-14h]
  int v5; // [esp-8h] [ebp-10h]
  int v6; // [esp-4h] [ebp-Ch]

  v2 = *((_DWORD *)this + 26);
  CREEditBox::UpdateRects(this);
  v6 = *((_DWORD *)this + 44);
  v5 = v2 + *((_DWORD *)this + 24);
  v4 = *((_DWORD *)this + 42);
  v3 = *((_DWORD *)this + 43);
  *((_DWORD *)this + 26) = v2;
  SetRect((LPRECT)((char *)this + 980), v3, v4, v5, v6);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 26) + *((_DWORD *)this + 41);
}
