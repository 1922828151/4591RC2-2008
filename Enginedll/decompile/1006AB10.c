/*
 * func-name: ?ResolutionChanged@CREEditBox@@UAEXNNNN@Z
 * func-address: 0x1006ab10
 * callers: none
 * callees: 0x101a26c0
 */

void __thiscall CREEditBox::ResolutionChanged(CREEditBox *this, double a2, double a3, double a4, double a5)
{
  *((_DWORD *)this + 140) = (int)((double)*((int *)this + 140) / a2 * a4);
  (*(void (__thiscall **)(CREEditBox *))(*(_DWORD *)this + 164))(this);
}
