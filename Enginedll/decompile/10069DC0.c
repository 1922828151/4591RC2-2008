/*
 * func-name: ?SetLocation@CREControl@@UAEXHH@Z
 * func-address: 0x10069dc0
 * callers: none
 * callees: none
 */

void __thiscall CREControl::SetLocation(CREControl *this, int a2, int a3)
{
  int v3; // eax

  *((_DWORD *)this + 24) = a2;
  v3 = *(_DWORD *)this;
  *((_DWORD *)this + 25) = a3;
  (*(void (**)(void))(v3 + 164))();
}
