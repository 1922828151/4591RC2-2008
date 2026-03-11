/*
 * func-name: ?SetEmissive@Shader@@QAEXXZ
 * func-address: 0x10120ed0
 * callers: 0x1005bd90, 0x1005cb50
 * callees: 0x101207d0
 */

void __thiscall Shader::SetEmissive(Shader *this)
{
  int v2; // eax

  if ( (dword_112417F0 & 1) == 0 )
  {
    dword_112417F0 |= 1u;
    flt_112417E0 = 1.0;
    flt_112417E4 = 1.0;
    flt_112417E8 = 1.0;
    flt_112417EC = 1.0;
  }
  v2 = *((_DWORD *)this + 3509);
  if ( v2 || (Shader::CreateHandle(this, (Shader *)((char *)this + 13968)), (v2 = *((_DWORD *)this + 3509)) != 0) )
    (*(void (__stdcall **)(_DWORD, int, float *, int))(**((_DWORD **)this + 4) + 128))(
      *((_DWORD *)this + 4),
      v2,
      &flt_112417E0,
      4);
}
