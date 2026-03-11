/*
 * func-name: ?SetSize@CREControl@@UAEXHH@Z
 * func-address: 0x10069de0
 * callers: none
 * callees: none
 */

void __thiscall CREControl::SetSize(CREControl *this, int a2, int a3)
{
  int v3; // eax

  *((_DWORD *)this + 26) = a2;
  v3 = *(_DWORD *)this;
  *((_DWORD *)this + 27) = a3;
  (*(void (**)(void))(v3 + 164))();
}
