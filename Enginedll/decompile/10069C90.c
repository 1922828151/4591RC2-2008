/*
 * func-name: ?OnMouseLeave@CREControl@@UAEXXZ
 * func-address: 0x10069c90
 * callers: none
 * callees: none
 */

void __thiscall CREControl::OnMouseLeave(CREControl *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 17);
  if ( v2 && *((_BYTE *)this + 156) && *((_BYTE *)this + 90) )
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 36))(0, *((float *)this + 40));
  *((_BYTE *)this + 91) = 0;
}
